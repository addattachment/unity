using Assets.Scripts;
using LSL;
using System.Collections;
using UnityEngine;

public class Ball : MonoBehaviour
{
    private Rigidbody Rb;
    [SerializeField] private Slingshot slingShot; // link to the slingshot

    [Header("AudioSamples")]
    [SerializeField] private AudioSource SlingshotPullAudio;
    [SerializeField] private AudioSource SlingshotReleaseAudio;
    [SerializeField] private AudioSource BallFloorImpact;
    [SerializeField] private AudioSource BallDestructionNoHitSound;
    [SerializeField] private AudioSource ball_flying_audio;
    [SerializeField] private AudioSource ball_burning_audio;


    [Header("shooting arguments")]
    [Tooltip("time used for determining when bullet is not attached to slingshot anymore")] public float ReleaseTime = 0.5f;
    [Tooltip("time after release when bullet is destroyed")] public float DestructionTime = 1.5f;

    public bool didHitATarget = false;
    [Header("ball Steering")]
    private float _time_to_target = 1.0f;
    Vector3 _hitTargetPos;
    private GameObject target;
    [Header("score result")]
    [SerializeField] private GameScore gameScore;
    [SerializeField] private GameManager gameManager;
    [SerializeField] private OutletPassThrough lsl;
    [SerializeField] private TargetGroup targetGroup;

    [Header("atmosphere")]
    [SerializeField] private GameObject backgroundSound;

    // DEBUGGING
    public GameObject debugCube;
    private string _name;

#if DEBUGMODE
    public GameObject debugCube;
    private GameObject debugCubeInstance;
    private bool cubePlaced = false;
#endif
    [SerializeField] private DebugConnection debug_text;
    public Vector3 _fakeBallStartPoint = new Vector3(0, 0.4f, 0);
    public bool doFakeLaunch = false;

    private void Start()
    {
        gameManager = GameManager.Instance;
        Rb = GetComponent<Rigidbody>();
        target = GameObject.FindGameObjectWithTag("target"); // todo write tests for finding all gameobjects
        slingShot = this.GetComponentInParent<Slingshot>();
        gameScore = GameObject.FindGameObjectWithTag("gameScore").GetComponent<GameScore>();
        debug_text = GameObject.FindGameObjectWithTag("debug").GetComponentInChildren<DebugConnection>();
        lsl = GameObject.FindGameObjectWithTag("lsl").GetComponent<OutletPassThrough>();
        backgroundSound = GameObject.FindGameObjectWithTag("atmosphere");
        targetGroup = GameObject.FindGameObjectWithTag("target").GetComponentInChildren<TargetGroup>();
        _name = "" + Time.time;
    }


    void FixedUpdate()
    {
#if UNITY_EDITOR
        if (doFakeLaunch)
        {
#if DEBUGMODE
            InitDebugCube();
#endif
            doFakeLaunch = false;
            FakeLaunch();
        }
#if DEBUGMODE
        PlaceDebugCube(_fakeBallStartPoint);
#endif
#else
#if DEBUGMODE
PlaceDebugCube(Rb.position);
#endif
#endif

    }

    private void OnTriggerEnter(Collider other)
    {
        if (didHitATarget == false)
        {
            Debug.Log("triggered " + other.name + " at " + Time.time);
            // TEMP OBJECT TO SEE IF FUTUREPOSITION AND TARGETHIT ARE THE SAME LOCATION
            GameObject temp = GameObject.CreatePrimitive(PrimitiveType.Cube);
            temp.GetComponent<Renderer>().material.color = GetComponent<Renderer>().material.color; // set to the color of the ring
            temp.GetComponent<BoxCollider>().enabled = false;
            temp.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
            //Destroy(temp, 2.0f);
            temp.transform.position = targetGroup.hitTarget.transform.position;
            temp.name = "ShouldHitlocation" + _name;

            if (other.CompareTag("Ground"))
            {
                didHitATarget = true;

                // we didn't hit any target, so this equals hitting the wrong target
                gameScore.AddToScore(0);
                DestroyThisBall();
            }
            if (other.CompareTag("subTarget"))
            {
                didHitATarget = true;

                var th = other.GetComponent<TargetHit>();
                if (th == null)
                {
                    // if we hit the cylinder INSIDE the target, we also want to check if it's the active target
                    th = other.GetComponentInParent<TargetHit>();
                }
                

                CalcImpact(th);
            }
            if (other.CompareTag("missTargets"))
            {
                didHitATarget = true;

                
                DestroyThisBall();
            }
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (didHitATarget == false)
        {
            Debug.Log("collided " + collision.gameObject.name + " at " + Time.time);
            // TEMP OBJECT TO SEE IF FUTUREPOSITION AND TARGETHIT ARE THE SAME LOCATION
            GameObject temp = GameObject.CreatePrimitive(PrimitiveType.Cube);
            temp.GetComponent<Renderer>().material.color = GetComponent<Renderer>().material.color; // set to the color of the ring
            temp.GetComponent<BoxCollider>().enabled = false;
            temp.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
            temp.transform.position = targetGroup.hitTarget.transform.position;
            temp.name = "ShouldHitlocation" + _name;
        }
        //GetComponent<TrailRenderer>().enabled = false;
        //if (collision.collider.CompareTag("Ground") && !didHitATarget)
        //{
        //    if (!BallFloorImpact.isPlaying)
        //    {
        //        BallFloorImpact.Play();
        //    }
        //}
        //if (collision.collider.CompareTag("subTarget"))
        //{
        //    var th = collision.collider.GetComponent<TargetHit>();
        //    if (th == null)
        //    {
        //        // if we hit the cylinder INSIDE the target, we also want to check if it's the active target
        //        th = collision.collider.GetComponentInParent<TargetHit>();
        //    }
        //    CalcImpact(th);
        //    didHitATarget = true;
        //}

    }


    private void CalcImpact(TargetHit th)
    {
        if (target.GetComponent<Targets>().readyForHit == true)
        {
            target.GetComponent<Targets>().readyForHit = false;
            if (th.activeTarget)
            {
                Debug.Log("correct target touched! at " + Time.time);
                gameScore.AddToScore(1);
            }
            else
            {
                Debug.Log("wrong! at " + Time.time);
                gameScore.AddToScore(0);
            }
            DestroyThisBall();
        }
    }

    public void FakeLaunch()
    {
        // audio stuff
        ball_flying_audio.Play();
        backgroundSound.GetComponent<FilterBackgroundSound>().enableTransition = true;
        //Send LSL data
        lsl.SendMarker(Marker.ball_release);
        //Calculate trajectory of ball
        Rb.position = _fakeBallStartPoint + slingShot.transform.position;
        _time_to_target = CalcFlyingTime(Rb, targetGroup.hitTarget.transform.position);
        _hitTargetPos = targetGroup.hitTarget.GetComponent<TargetPosUpdate>().GetFuturePositionOfTarget(_time_to_target);
        Debug.Log("shoot at " + Time.time + " for " + _time_to_target + " seconds with mode: " + slingShot.reachTarget);
        //Instantiate(debugCube, _fakeBallStartPoint, Quaternion.identity);
        Launch(_fakeBallStartPoint + slingShot.transform.position);
        StartCoroutine(Explode());
    }
    /// <summary>
    /// 
    /// </summary>
    /// <param name="origin"> from where do we shoot the ball, normally it's position, yet for debugging we can choose</param>
    private void Launch(Vector3 origin)
    {
        //Debug.Log("launchforce gets calculated with origin " + origin + " and hittargetpos " + _hitTargetPos);
        var launchForce = slingShot.CalcLaunchVelocity(origin, _hitTargetPos);
        Rb.AddForce(launchForce, ForceMode.Impulse);

        SlingshotReleaseAudio.Play();
        Destroy(GetComponent<SpringJoint>());
    }


    public void VREnterEvent()
    {
#if DEBUGMODE
        InitDebugCube();
#endif
        ball_burning_audio.loop = true;
        ball_burning_audio.Play();
        backgroundSound.GetComponent<FilterBackgroundSound>().enableTransition = true;
        SlingshotPullAudio.Play();
    }

    // we release the Ball
    public void VRExitEvent()
    {
        // notify the backend that we did release the ball
        lsl.SendMarker(Marker.ball_release);
        ball_flying_audio.Play();
        //_time_to_target = CalcFlyingTime(Rb, target.transform.position);
        _time_to_target = CalcFlyingTime(Rb, targetGroup.hitTarget.transform.position);
        debug_text.SetDebugText("time to target: " + _time_to_target);
        _hitTargetPos = targetGroup.hitTarget
           .GetComponent<TargetPosUpdate>()
           .GetFuturePositionOfTarget(_time_to_target);
        debug_text.SetDebugText("hittargetPos " + _hitTargetPos);
        Launch(Rb.position);
#if DEBUGMODE
        Destroy(debugCubeInstance);
        cubePlaced = false;
#endif
        StartCoroutine(Explode());
    }

    /// <summary>
    /// DestroyThisBall
    /// first makes sure a new ball is created and immediately destroys this one
    /// </summary>
    private void DestroyThisBall()
    {
        gameManager.SwitchPlayer();
        gameManager.PrepNewShootingTurn();
        backgroundSound.GetComponent<FilterBackgroundSound>().enableTransition = false;
        Destroy(gameObject, 1.0f);
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
    /// function to calculate approximately how long the ball will take to hit the target
    /// should return null if we won't hit the target, or hit the floor first
    /// </summary>
    /// <param name="Rb"> Rigidbody of the ball TODO not necessary?</param>
    /// <param name="targetDistance">distance of the target we want to hit </param>
    /// <returns></returns>
    private float CalcFlyingTime(Rigidbody Rb, Vector3 targetDistance)
    {
        var _distance = targetDistance - Rb.position;
        var _direction = _distance.normalized; // A vector FROM the ball TOWARDS the hittarget
        var _launchForce = _direction * slingShot.launchForceMultiplier;
        var launchVel = _launchForce / Rb.mass;
        float time = _distance.magnitude / launchVel.magnitude;
        return time;
    }

#if DEBUGMODE
    private void PlaceDebugCube(Vector3 ballOrigin)
    {
        var debugCubeFound = GameObject.FindGameObjectWithTag("debugCube");
        if (cubePlaced)
        {
            if (debugCubeFound != null)
            {
                //-------------show where the target will be in near future-----------------
                _time_to_target = CalcFlyingTime(Rb, target.transform.position);
                float _time = (float)_time_to_target.Value;
                _hitTargetPos = GameManager.Instance.hitTarget
                   .GetComponent<TargetPos>()
                   .GetFuturePositionOfTarget(_time);
                debugCubeInstance.transform.position = _hitTargetPos;
            }
            else debug_text.SetDebugText("no cube found");
        }
    }

    private void InitDebugCube()
    {
        debugCubeInstance = Instantiate(debugCube,
                        _hitTargetPos,
                        Quaternion.identity);
        debugCubeInstance.GetComponent<Renderer>().material = GameManager.Instance.hitTarget.GetComponent<Renderer>().material;
        cubePlaced = true;
    }
#endif
}
