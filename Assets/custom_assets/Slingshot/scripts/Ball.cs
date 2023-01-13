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
    //[SerializeField] private AudioSource BallCorrectHitAudio;
    //[SerializeField] private AudioSource BallWrongHitAudio;
    [SerializeField] private AudioSource ball_flying_audio;
    [SerializeField] private AudioSource ball_burning_audio;


    [Header("shooting arguments")]
    [Tooltip("time used for determining when bullet is not attached to slingshot anymore")] public float ReleaseTime = 0.5f;
    [Tooltip("time after release when bullet is destroyed")] public float DestructionTime = 1.5f;

    public bool didHitATarget = false;
    [Header("ball Steering")]
    private float? _time_to_target = 1.0f;
    Vector3 _hitTargetPos;
    private GameObject target;
    [Header("score result")]
    [SerializeField] private GameScore gameScore;
    [SerializeField] private GameManager gameManager;
    [SerializeField] private OutletPassThrough lsl;

    [Header("atmosphere")]
    [SerializeField] private GameObject backgroundSound;

    // DEBUGGING
    public GameObject debugCube;

#if DEBUGMODE
    public GameObject debugCube;
    private GameObject debugCubeInstance;
    private bool cubePlaced = false;
#endif
    [SerializeField] private DebugConnection debug_text;
#if UNITY_EDITOR
    public Vector3 _fakeBallStartPoint = new Vector3(0, 0.4f, 0);
    public bool doFakeLaunch = false;
#endif

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
#if DEBUG
PlaceDebugCube(Rb.position);
#endif
#endif

    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("triggered " + other.name + " at " + Time.time);
        if (!didHitATarget)
        {
            if (other.CompareTag("Ground"))
            {
                // we didn't hit any target, so this equals hitting the wrong target
                gameScore.AddToScore(0);
            }
            if (other.CompareTag("subTarget"))
            {
                var th = other.GetComponent<TargetHit>();
                CalcImpact(th);
                didHitATarget = true;
            }
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log("collided " + collision.gameObject.name + " at " + Time.time);

        GetComponent<TrailRenderer>().enabled = false;
        if (collision.collider.CompareTag("Ground") && !didHitATarget)
        {
            if (!BallFloorImpact.isPlaying)
            {
                BallFloorImpact.Play();
            }
        }
        if (collision.collider.CompareTag("subTarget"))
        {
            var th = collision.collider.GetComponent<TargetHit>();
            CalcImpact(th);
            didHitATarget = true;
        }

    }


    private void CalcImpact(TargetHit th)
    {
        if (target.GetComponent<Targets>().readyForHit == true)
        {
            target.GetComponent<Targets>().readyForHit = false;
            if (th.activeTarget)
            {
                Debug.Log("correct target touched!");
                gameScore.AddToScore(1);
                //BallCorrectHitAudio.Play();
                DestroyThisBall();
            }
            else
            {
                Debug.Log("wrong!");
                //BallWrongHitAudio.Play();
                gameScore.AddToScore(0);
                DestroyThisBall();
            }
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
        var _hitTarget = gameManager.hitTarget;

        _time_to_target = CalcFlyingTime(Rb, _hitTarget.transform.position);
        float _time = (float)_time_to_target.Value;
        Debug.Log("target time to target would be " + _time); // CalcFlyingTime(Rb, target.transform.position));

        _hitTargetPos = _hitTarget.GetComponent<TargetPosRot>().GetFuturePositionOfTarget(_time);
        Debug.Log("shoot at " + Time.time + " for " + _time + " seconds with mode: " + slingShot.reachTarget);
        Instantiate(debugCube, _fakeBallStartPoint, Quaternion.identity);
        Launch(_fakeBallStartPoint+slingShot.transform.position);
        StartCoroutine(Explode());
    }
    /// <summary>
    /// 
    /// </summary>
    /// <param name="origin"> from where do we shoot the ball, normally it's position, yet for debugging we can choose</param>
    private void Launch(Vector3 origin)
    {
        Debug.Log("launchforce gets calculated with origin " + origin + " and hittargetpos " + _hitTargetPos);
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
        _time_to_target = CalcFlyingTime(Rb, gameManager.hitTarget.transform.position);
        _hitTargetPos = GameManager.Instance.hitTarget
           .GetComponent<TargetPosRot>()
           .GetFuturePositionOfTarget((float)_time_to_target.Value);
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
        GameManager.Instance.SwitchPlayer();
        GameManager.Instance.SetNewBall();
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
    /// function to calculate approximately how long the ball will take to hitSuccesGuid the target
    /// returns null if we won't hitSuccesGuid the target, yet hitSuccesGuid the floor first
    /// </summary>
    /// <param name="targetDistance"> distance of the target we want to hit</param>
    /// <param name="debugOn"> it's only useful </param>
    /// <returns></returns>
    private float? CalcFlyingTime(Rigidbody Rb, Vector3 targetDistance)
    {
        float approx_time_to_target = slingShot.CalcImpactTime(Rb, targetDistance);
        return approx_time_to_target;
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
