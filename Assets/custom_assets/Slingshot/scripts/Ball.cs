using Assets.Scripts;
using LSL;
using System.Collections;
using UnityEngine;
using TrialNS;
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
    }


    void FixedUpdate()
    {
#if UNITY_EDITOR
        if (doFakeLaunch)
        {
#if DEBUGMODE
            InitDebugCube();
#endif
            ballIsGrabbed = true;
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

    private void ProcessCollision(GameObject coll)
    {
        debug_text.SetDebugText("hit: " + coll.name);

        // TEMP OBJECT TO SEE IF FUTUREPOSITION AND TARGETHIT ARE THE SAME LOCATION
#if DEBUGCUBE
            GameObject temp = GameObject.CreatePrimitive(PrimitiveType.Cube);
            temp.GetComponent<Renderer>().material.color = GetComponent<Renderer>().material.color; // set to the color of the ring
            temp.GetComponent<BoxCollider>().enabled = false;
            temp.transform.localScale = new Vector3(0.2f, 0.2f, 0.2f);
            //Destroy(temp, 2.0f);
            temp.transform.position = targets.hitTarget.transform.position;
            temp.name = "ShouldHitlocation" + _name;
#endif
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
        }
    }


    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("triggered " + other.name + " at " + Time.time);
        if (canProcessCollisions) { ProcessCollision(other.gameObject); }
    }
    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log("collided " + collision.gameObject.name + " at " + Time.time);
        if (canProcessCollisions) { ProcessCollision(collision.gameObject); }
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
        Debug.Log("shoot at " + Time.time + " for " + _time_to_target + " seconds with mode: " + slingShot.reachTarget);
        //Debug.Log("launchforce gets calculated with origin " + origin + " and hittargetpos " + _hitTargetPos);
        Vector3 launchForce = slingShot.CalcLaunchVelocity(origin, _hitTargetPos);
        debug_text.SetDebugText("launchforce " + launchForce);
        debug_text.SetDebugText("hittargetPos " + _hitTargetPos);

#if DEBUGCUBE
        Instantiate(debugCube, _fakeBallStartPoint, Quaternion.identity);

        //debug texts in VR
        debug_text.SetDebugText("time to targets: " + _time_to_target);
        debug_text.SetDebugText("hittargetPos " + _hitTargetPos);
#endif
#if DEBUGMODE
        Destroy(debugCubeInstance);
        cubePlaced = false;
#endif

        // shoot the ball
        Rb.AddForce(launchForce, ForceMode.Impulse);
        // make sure 
        slingShot.slingshotLinesEnum = SlingshotLinesEnum.passive;
        SlingshotReleaseAudio.Play();
        Destroy(GetComponent<SpringJoint>());
        StartCoroutine(Explode());
    }


    public void VREnterEvent()
    {
#if DEBUGMODE
        InitDebugCube();
#endif
        ballIsGrabbed = true;
        // AUDIO 
        backgroundSound.GetComponent<FilterBackgroundSound>().enableTransition = true;
        SlingshotPullAudio.Play();
    }

    // we release the Ball
    public void VRExitEvent()
    {
        debug_text.SetDebugText("ball start point is "+Rb.position);
        ballIsReleased = true;
        Launch(Rb.position);
    }

    public void FakeLaunch()
    {
        // fake a starting point for the ball
        Rb.position = _fakeBallStartPoint + slingShot.transform.position;
        ballIsReleased = true;
        debug_text.SetDebugText("ball start point is " + Rb.position);

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
