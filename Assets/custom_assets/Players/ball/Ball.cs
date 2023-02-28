using LSL;
using System.Collections;
using UnityEngine;
public class Ball : MonoBehaviour
{
    private Rigidbody Rb;
    private GameManager gameManager;
    [SerializeField] private Slingshot slingShot; // link to the slingshot

    [Header("AudioSamples")]
    [SerializeField] private AudioSource SlingshotPullAudio;
    [SerializeField] private AudioSource SlingshotReleaseAudio;
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
    [Header("ball Steering")]
    private float _time_to_target = 1.0f;
    Vector3 _hitTargetPos;
    private TargetGroup targets;
    [Header("score result")]
    [SerializeField] private OutletPassThrough lsl;

    [Header("atmosphere")]
    [SerializeField] private GameObject backgroundSound;

    // DEBUGGING
    public GameObject debugCube;
    private string _name;

    [SerializeField] private DebugConnection debug_text;
    public Vector3 _fakeBallStartPointDebug = new Vector3(0, 0.4f, 0);
    public bool doFakeLaunch = false;

    private void Start()
    {
        Rb = GetComponent<Rigidbody>();
        targets = GameObject.FindGameObjectWithTag("target")
                            .GetComponent<TargetGroup>(); // todo write tests for finding all gameobjects
        slingShot = this.GetComponentInParent<Slingshot>();
        debug_text = GameObject.FindGameObjectWithTag("debug")
                               .GetComponentInChildren<DebugConnection>();
        lsl = GameObject.FindGameObjectWithTag("lsl")
                        .GetComponent<OutletPassThrough>();
        backgroundSound = GameObject.FindGameObjectWithTag("atmosphere");
        _name = "" + Time.time;
        gameManager = GameManager.Instance;
    }


    void FixedUpdate()
    {
#if UNITY_EDITOR
        if (gameManager.doFakeLaunch)
        {
            if (slingShot.player.isActivePlayer)
            {

                ballIsGrabbed = true;
                FakeLaunch(_fakeBallStartPointDebug + slingShot.transform.position);
            }
            gameManager.doFakeLaunch = false;
        }

#endif
    }

    private void ProcessCollision(GameObject coll)
    {
        //debug_text.SetDebugText("hit: " + coll.name);
        if (coll.CompareTag("subTarget"))
        {
            ballDidHit = true;
            var th = coll.GetComponent<TargetHit>();
            if (th == null)
            {
                // if we hit the cylinder INSIDE the targets, we also want to check if it's the active targets
                th = coll.GetComponentInParent<TargetHit>();
            }
            CalcImpact(th);
        }
        if (coll.CompareTag("missTargets"))
        {
            ballDidHit = true;
            ballDidScore = false;
            //playerScore.AddToScore(false);
            //DestroyThisBall();
        }
        if (coll.CompareTag("Floor"))
        {
            ballDidHit = true;
            ballDidScore = false;
            //TODO create animation for splashing ball?
        }
        if (coll.CompareTag("gamehall"))
        {
            ballDidHit = true;

            // we didn't hit any targets, so this equals hitting the wrong targets
            //TODO create animation for splashing ball?
            ballDidScore = false;
            DestroyThisBall();
        }
    }


    private void OnTriggerEnter(Collider other)
    {
        if (!ballDidHit)
        {
            Debug.Log("triggered " + other.name + " at " + Time.time);
            if (canProcessCollisions) { ProcessCollision(other.gameObject); }
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (!ballDidHit)
        {
            Debug.Log("collided " + collision.gameObject.name + " at " + Time.time);
            if (canProcessCollisions) { ProcessCollision(collision.gameObject); }
        }
    }


    private void CalcImpact(TargetHit th)
    {
        if (th.activeTarget)
        {
            Debug.Log("correct targets touched! at " + Time.time);
            ballDidScore = true;
        }
        else
        {
            Debug.Log("wrong! at " + Time.time);
            ballDidScore = false;
        }
    }


    /// <summary>
    /// 
    /// </summary>
    /// <param name="origin"> from where do we shoot the ball, normally it's position, yet for debugging we can choose</param>
    private void Launch(Vector3 origin)
    {
        // audio stuff
        ball_flying_audio.Play();
        backgroundSound.GetComponent<FilterBackgroundSound>().enableTransition = true;
        //Send LSL data
        lsl.SendMarker(Marker.ball_release);
        //Calculate trajectory of ball
        _time_to_target = CalcFlyingTime(targets.hitTarget.transform.position);
        _hitTargetPos = targets.hitTarget.GetComponent<TargetPosUpdate>().GetFuturePositionOfTarget(_time_to_target);
        Debug.Log("target is " + targets.hitTarget + " at coordinate " + _hitTargetPos);

        Debug.Log("shoot at " + Time.time + " for " + _time_to_target + " seconds with mode: " + slingShot.reachTarget);
        Vector3 launchForce = slingShot.CalcLaunchVelocity(origin, _hitTargetPos);


        // shoot the ball
        Rb.AddForce(launchForce, ForceMode.Impulse);
        SlingshotReleaseAudio.Play();
        Destroy(GetComponent<SpringJoint>());
        StartCoroutine(Explode());
    }


    public void VREnterEvent()
    {
        ballIsGrabbed = true;
        // AUDIO 
        backgroundSound.GetComponent<FilterBackgroundSound>().enableTransition = true;
        SlingshotPullAudio.Play();
    }

    // we release the Ball
    public void VRExitEvent()
    {
        //debug_text.SetDebugText("ball start point is "+Rb.position);
        ballIsReleased = true;
        Launch(Rb.position);
    }

    public void FakeLaunch(Vector3 _fakeBallStartPoint)
    {
        // fake a starting point for the ball
        Rb.position = _fakeBallStartPoint; // + slingShot.transform.position;
        ballIsReleased = true;
        //debug_text.SetDebugText("ball start point is " + Rb.position);

        Launch(Rb.position);
    }

    /// <summary>
    /// DestroyThisBall
    /// first makes sure a new ball is created and immediately destroys this one
    /// </summary>
    private void DestroyThisBall()
    {
        backgroundSound.GetComponent<FilterBackgroundSound>().enableTransition = false;
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
