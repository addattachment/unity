using Assets.Scripts;
using System.Collections;
using UnityEngine;

public class Ball : MonoBehaviour
{
    private Rigidbody Rb;
    [SerializeField] private Slingshot slingShot; // link to the slingshot

    [Header("AudioSamples")]
    [SerializeField] private AudioSource SlingshotAudio;
    [SerializeField] private AudioSource SlingshotReleaseAudio;
    [SerializeField] private AudioSource BulletImpactAudio;
    [SerializeField] private AudioSource BulletNoHitAudio;

    [Header("shooting arguments")]
    [Tooltip("time used for determining when bullet is not attached to slingshot anymore")] public float ReleaseTime = 0.5f;
    [Tooltip("time after release when bullet is destroyed")] public float DestructionTime = 1.5f;

    public bool didHitATarget = false;
    [Header("ball Steering")]
    private float? _time_to_target = 1.0f;
    Vector3 _hitTargetPos;
    private GameObject target;

    // DEBUGGING
#if DEBUGMODE
    public GameObject debugCube;
    private GameObject debugCubeInstance;
    private bool cubePlaced = false;
#endif
    [SerializeField] private DebugConnection debug_text;
#if UNITY_EDITOR
    Vector3 _fakeBallStartPoint = new Vector3(0, 0.4f, 0);
    public bool launchDebugPushed = false;
#endif
    void Awake()
    {
        Rb = GetComponent<Rigidbody>();
        target = GameObject.FindGameObjectWithTag("target"); // todo write tests for finding all gameobjects
        slingShot = GameObject.FindGameObjectWithTag("slingshot").GetComponent<Slingshot>();

    }

    private void Start()
    {

    }


    void FixedUpdate()
    {
#if UNITY_EDITOR
        if (launchDebugPushed)
        {
#if DEBUGMODE
            InitDebugCube();
#endif
            launchDebugPushed = false;
            float _time = (float)_time_to_target.Value;
            _hitTargetPos = GameManager.Instance.hitTarget.GetComponent<TargetPos>().GetFuturePositionOfTarget(_time);
            Launch(_fakeBallStartPoint);
            StartCoroutine(Explode());
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


    private void OnCollisionEnter(Collision collision)
    {
        GetComponent<TrailRenderer>().enabled = false;
        if (collision.collider.CompareTag("Ground"))
        {
            if (!BulletImpactAudio.isPlaying)
            {
                BulletImpactAudio.Play();
            }
        }

    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="origin"> from where do we shoot the ball, normally it's position, yet for debugging we can choose</param>
    private void Launch(Vector3 origin)
    {
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

        SlingshotAudio.Play();
    }

    // we release the Ball
    public void VRExitEvent()
    {
        _time_to_target = CalcFlyingTime(Rb, target.transform.position);
        _hitTargetPos = GameManager.Instance.hitTarget
           .GetComponent<TargetPos>()
           .GetFuturePositionOfTarget((float)_time_to_target.Value);
        Launch(Rb.position);
#if DEBUGMODE
        Destroy(debugCubeInstance);
        cubePlaced = false;
#endif
        StartCoroutine(Explode());
    }

    IEnumerator Explode()
    {
        yield return new WaitForSeconds(DestructionTime);
        GameManager.Instance.SetNewBullet();
        if (!didHitATarget)
        {
            BulletNoHitAudio.Play();
        }
        Destroy(gameObject);
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
