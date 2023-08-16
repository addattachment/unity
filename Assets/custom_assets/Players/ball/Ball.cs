using LSL;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Interaction.Toolkit;

public class Ball : MonoBehaviour
{
    private Rigidbody Rb;
    private GameManager gameManager;
    private TrajectoryManager trajectoryManager;
    public Slingshot slingShot; // link to the slingshot

    [Header("AudioSamples")]
    [SerializeField] private AudioSource BallFloorImpact;
    [SerializeField] private AudioSource BallDestructionNoHitSound;
    [SerializeField] private AudioSource ball_flying_audio;

    [Header("shooting arguments")]
    [Tooltip("time used for determining when bullet is not attached to slingshot anymore")] public float ReleaseTime = 0.5f;
    [Tooltip("time after release when bullet is destroyed")] public float DestructionTime = 1.5f;

    public bool didHitATarget = false;

    [Header("Ball states")]
    public bool ballIsGrabbed = false;
    public bool ballIsReleased = false;
    public bool ballDidHit = false;
    public bool canProcessCollisions = true;
    public bool ballDidScore = false;
    private bool showLinerender = false;

    [Header("ball Steering")]
    private float _time_to_target = 1.0f;
    Vector3 _hitTargetPos;
    private TargetGroup targets;
    [SerializeField] Vector3 launchForce;

    [Header("score result")]
    private OutletPassThrough lsl;
    private List<TargetHit> wrongHitTransforms = new();
    [Header("atmosphere")]
    [SerializeField] private GameObject backgroundSound;
    [SerializeField] private TrailRenderer trail;

    [Header("ParticleEffects")]

    public ParticleSystem ballRelease;

    private GameObject hitTargetObject;

    [Header("FakeLaunch")]

    public bool doFakeLaunch = false;

    private void Start()
    {
        Rb = GetComponent<Rigidbody>();
        targets = GameObject.FindGameObjectWithTag("target")
                            .GetComponent<TargetGroup>(); // todo write tests for finding all gameobjects
        slingShot = this.GetComponentInParent<Slingshot>();
        backgroundSound = GameObject.FindGameObjectWithTag("atmosphere");
        gameManager = GameManager.Instance;
        lsl = OutletPassThrough.Instance;

        trajectoryManager = TrajectoryManager.Instance;
        hitTargetObject = slingShot.hitTarget;

    }

    private void Update()
    {
#if UNITY_EDITOR
        if (gameManager.doFakeLaunch)
        {
            if (slingShot.player.isActivePlayer)
            {

                ballIsGrabbed = true;
                FakeLaunch(slingShot._fakeBallStartPointDebug.transform.localPosition + slingShot.transform.position);
            }
            gameManager.doFakeLaunch = false;
        }
#endif
        if (showLinerender)
        {
            _time_to_target = CalcFlyingTime(targets.hitTarget.transform.position);
            _hitTargetPos = targets.hitTarget.GetComponent<TargetPosUpdate>().GetFuturePositionOfTarget(_time_to_target);
            launchForce = slingShot.CalcLaunchVelocity(Rb.position, _hitTargetPos, ReachTargetEnum.may);
            trajectoryManager.SimulateLaunch(transform, launchForce);
        }
    }

    private void ProcessCollision(GameObject coll)
    {
        if (coll.CompareTag("subTarget"))
        {
            coll.GetComponent<Collider>().enabled = false;
            coll.GetComponentInParent<TargetHit>().LitTarget();
            var th = coll.GetComponent<TargetHit>();
            if (th == null)
            {
                // if we hit the cylinder INSIDE the targets, we also want to check if it's the active targets
                th = coll.GetComponentInParent<TargetHit>();
            }
            CalcImpact(th);
        }
        if (!ballDidHit)
        {
            if (coll.CompareTag("missTargets"))
            {
                ballDidHit = true;
                // if we didn't score, we show all wrong transforms we did hit
                if (!ballDidScore)
                {
                    foreach (TargetHit t in wrongHitTransforms)
                    {
                        StartCoroutine(LaunchBallScoreShow(false, t));
                    }
                }
                // we clear the list of wrong transforms for the next ball
                wrongHitTransforms.Clear();

            }
            if (coll.CompareTag("Floor"))
            {
                ballDidHit = true;
                //TODO create animation for splashing ball?
            }
            if (coll.CompareTag("trophy"))
            {
                ballDidHit = true;
            }
            if (coll.CompareTag("gamehall"))
            {
                ballDidHit = true;
                Rb.velocity = Vector3.zero;
                //Rb.mass = 10000;
                // we didn't hit any targets, so this equals hitting the wrong targets
                //TODO create animation for splashing ball?
                StartCoroutine(Explode());

            }
        }
    }


    private void OnTriggerEnter(Collider other)
    {
        //Debug.Log("triggered " + other.name + " at " + Time.time + " at position " + transform.position);
        ProcessCollision(other.gameObject);
    }
    private void OnCollisionEnter(Collision collision)
    {
        //Debug.Log("collided " + collision.gameObject.name + " at " + Time.time + " at position " + transform.position);
        ProcessCollision(collision.gameObject);
    }

    private void CalcImpact(TargetHit th)
    {
        // calculate the impact
        if (th.activeTarget)
        {
            //Debug.Log("correct targets touched! at " + Time.time);
            //Debug.Log("target is touched at " + Time.time + " and target center location " + th.gameObject.transform.position + " by ball at " + gameObject.transform.position);
            ballDidScore = true;
            StartCoroutine(LaunchBallScoreShow(true, th));
        }
        else
        {
            if (!ballDidHit)
            {
                //Debug.Log("wrong! at " + Time.time);
                wrongHitTransforms.Add(th);
            }
            //ballDidScore = false;
        }
    }

    private IEnumerator LaunchBallScoreShow(bool correctHit, TargetHit th)
    {
        if (correctHit)
        {
            // hold all targets
            targets.HoldAllTargets();
            // hold the ball still for a sec 
            var _velocity = Rb.velocity;
            Rb.isKinematic = true;
            th.SpawnHit();
            yield return new WaitForSeconds(1.0f);
            targets.StartAllTargets();
            Rb.isKinematic = false;
            Rb.velocity = _velocity;
        }
        else
        {
            th.SpawnMiss();
            yield return new WaitForSeconds(1.0f);
        }
    }


    /// <summary>
    /// 
    /// </summary>
    /// <param name="origin"> from where do we shoot the ball, normally it's position, yet for debugging we can choose</param>
    private void Launch(Vector3 origin)
    {
        // audio stuff
        trail.enabled = true;
        ball_flying_audio.Play();
        //backgroundSound.GetComponent<FilterBackgroundSound>().enableTransition = true;
        //Send LSL data
        lsl.SendMarker(Marker.ball_release);
        //Calculate trajectory of ball
        _time_to_target = CalcFlyingTime(targets.hitTarget.transform.position);
        _hitTargetPos = targets.hitTarget.GetComponent<TargetPosUpdate>().GetFuturePositionOfTarget(_time_to_target);
        //Debug.Log("target is " + targets.hitTarget + " at coordinate " + _hitTargetPos + " time expected is " + _time_to_target + " from " + Time.time);
        showLinerender = false;
        //trajectoryManager.EnableLine(false);
        //Debug.Log("shoot at " + Time.time + " for " + _time_to_target + " seconds with mode: " + slingShot.reachTarget);
        launchForce = slingShot.CalcLaunchVelocity(origin, _hitTargetPos, reachTarget: slingShot.reachTarget);

        // shoot the ball
        Rb.AddForce(launchForce, ForceMode.Impulse);
        slingShot.releaseSlingShotClip.Play();

        Destroy(GetComponent<SpringJoint>());
        StartCoroutine(Explode());
    }


    public void VREnterEvent()
    {
        ballIsGrabbed = true;
        showLinerender = true;
        // AUDIO 
        //backgroundSound.GetComponent<FilterBackgroundSound>().enableTransition = true;
        slingShot.pullSlingShotClip.Play();
        trail.enabled = false;
        //TrajectoryManager.Instance.EnableLine(true);
    }

    // we release the Ball
    public void VRExitEvent()
    {
        //debug_text.SetDebugText("ball start point is "+Rb.position);
        ballIsReleased = true;
        // trail.enabled = true;

        //play and set color particle effect based on color of hitTarget inside slingshot;
        var main = ballRelease.main;
        main.startColor = hitTargetObject.GetComponent<Renderer>().material.color;
        var col = ballRelease.colorOverLifetime;
        col.color = hitTargetObject.GetComponent<Renderer>().material.color;
        ballRelease.Play();

        Launch(Rb.position);
        TrajectoryManager.Instance.EnableLine(false);

    }

    public void FakeLaunch(Vector3 _fakeBallStartPoint)
    {
        // fake a starting point for the ball
        Rb.position = _fakeBallStartPoint;
        transform.position = _fakeBallStartPoint;
        ballIsReleased = true;
        ballRelease.Play();
        //debug_text.SetDebugText("ball start point is " + Rb.position);
        Launch(Rb.position);
    }

    /// <summary>
    /// DestroyThisBall
    /// first makes sure a new ball is created and immediately destroys this one
    /// </summary>
    private void DestroyThisBall()
    {
        //backgroundSound.GetComponent<FilterBackgroundSound>().enableTransition = false;
        trajectoryManager.EnableLine(false);
        Destroy(gameObject);
    }
    IEnumerator Explode()
    {
        yield return new WaitForSeconds(DestructionTime);
        if (!didHitATarget)
        {
            BallDestructionNoHitSound.Play();
        }
        DestroyThisBall();
    }


    /// <summary>
    /// function to calculate approximately how long the ball will take to hit the targets
    /// should return null if we won't hit the targets, or hit the floor first
    /// </summary>
    /// <param name="Rb"> Rigidbody of the ball TODO not necessary?</param>
    /// <param name="targetDistance">distance of the targets we want to hit </param>
    /// <returns></returns>
    private float CalcFlyingTime(Vector3 targetDistance)
    {
        var _distance = targetDistance - Rb.position;
        var _direction = _distance.normalized; // A vector FROM the ball TOWARDS the hittarget
        var _launchForce = _direction * slingShot.launchForceMultiplier;
        var launchVel = _launchForce / Rb.mass;
        float time = _distance.magnitude / launchVel.magnitude;
        return time;
    }
}
