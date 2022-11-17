using Assets.Scripts;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
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

    [SerializeField] private SpringJoint springJoint;
    [SerializeField] private TrailRenderer trailRenderer;
    //public bool canDraw = false; // Boolean to tell us we can show the line renderer depicting the balls trajectory

    public bool didHitATarget = false;
    [Header("ball Steering")]
    [SerializeField] private bool isFlying = false;
    private float? _time_to_target = 1.0f;
    Vector3 _hitTargetPos;

    // DEBUGGING
    public GameObject debugCube;
    private GameObject debugCubeInstance;
    private bool cubePlaced = false;
    private GameObject target;
    [Tooltip("a float to indicate how much of the original trajectory we want to remain when shooting a ball towards a target"),
        Range(0.0f, 1.0f)]
    public float mixHitTrajectory = 0.5f;
    private DebugExample debug_text;
    public bool launchDebugPushed = false;
    Vector3 _fakeBallStartPoint = new Vector3(0, 0.4f, 0);
    void Awake()
    {
        Rb = GetComponent<Rigidbody>();
        //lineRenderer = GetComponent<LineRenderer>();
        springJoint = GetComponent<SpringJoint>();
        trailRenderer = GetComponent<TrailRenderer>();
        target = GameObject.FindGameObjectWithTag("target"); // todo write tests for finding all gameobjects
        slingShot = GameObject.FindGameObjectWithTag("slingshot").GetComponent<Slingshot>();

    }

    private void Start()
    {
        debug_text = GameObject.FindGameObjectWithTag("debug")
            .GetComponentInChildren<DebugExample>();
    }


    void FixedUpdate()
    {
        //if (canDraw)
        //{
        //    DrawProjectionVR();
        //}
        //else lineRenderer.enabled = false;


#if UNITY_EDITOR
        if (launchDebugPushed)
        {
            InitDebugCube();
            launchDebugPushed = false;
            float _time = (float)_time_to_target.Value;
            _hitTargetPos = GameManager.Instance.hitTarget.GetComponent<TargetPos>().GetFuturePositionOfTarget(_time);
            Launch(_fakeBallStartPoint);
            StartCoroutine(Explode());
        }

        PlaceDebugCube(_fakeBallStartPoint);
#else
        PlaceDebugCube(Rb.position);
#endif

    }

    //public void DrawProjectionVR()
    //{
    //    lineRenderer.enabled = true;
    //    lineRenderer.positionCount = Mathf.CeilToInt(LinePoints / TimeBetweenPoints) + 1;
    //    Vector3 startPosition = this.transform.position;
    //    Vector3 _direction = springJoint.connectedAnchor - startPosition;
    //    Vector3 startVelocity = Mathf.Sqrt(springJoint.spring) * _direction / Rb.mass;

    //    int i = 0;
    //    lineRenderer.SetPosition(i, startPosition);
    //    for (float time = 0; time < LinePoints; time += TimeBetweenPoints)
    //    {
    //        i++;
    //        Vector3 point = startPosition + time * startVelocity;
    //        point.y = startPosition.y + startVelocity.y * time + (Physics.gravity.y / 2f * time * time) - springJoint.damper * time - Rb.angularDrag * time; //Need to take into account angular drag as well

    //        lineRenderer.SetPosition(i, point);

    //        Vector3 lastPosition = lineRenderer.GetPosition(i - 1);
    //    }
    //}



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
        Debug.Log(_hitTargetPos);
        debug_text.SetDebugText(""+slingShot.reachTarget);
        var launchForce = slingShot.CalcLaunchVelocity(origin, _hitTargetPos);
        Rb.AddForce(launchForce, ForceMode.Impulse);

        SlingshotReleaseAudio.Play();
        Destroy(GetComponent<SpringJoint>());
    }


    public void VREnterEvent()
    {
        InitDebugCube();

        //canDraw = true;
        SlingshotAudio.Play();
    }

    // we release the Bullet
    public void VRExitEvent()
    {
        //canDraw = false;
        Launch(Rb.position);
        Destroy(debugCubeInstance);
        StartCoroutine(Explode());
        cubePlaced = false;
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

    public void ChangeSlider(float newValue)
    {
        Debug.Log("updating ChangeSlider" + newValue);
        mixHitTrajectory = newValue;
    }


    /// <summary>
    /// function to calculate approximately how long the ball will take to hitSuccesGuid the target
    /// returns null if we won't hitSuccesGuid the target, yet hitSuccesGuid the floor first
    /// </summary>
    /// <param name="targetDistance"> distance of the target we want to hit</param>
    /// <param name="debugOn"> it's only useful </param>
    /// <returns></returns>
    private float? CalcFlyingTime(Vector3 origin, Vector3 targetDistance,
                                  bool debugOn)
    {
        (float approx_time_to_target, Vector3 _velocity) = slingShot.CalcImpactTime(Rb, targetDistance);
        // check if we don't hitSuccesGuid the floor before we arrive at our target location : if y <= 0 return null
        //Vector3 calculatedPosition = origin + (_velocity * approx_time_to_target);
        //var grav = Physics2D.gravity.y / 2 * Mathf.Pow(approx_time_to_target, 2);
        //calculatedPosition.y += grav;
        //if (calculatedPosition.y <= 0.0f)
        //{
        //    return null;
        //}
        return approx_time_to_target;
    }

    
    private void PlaceDebugCube(Vector3 ballOrigin)
    {
        var debugCubeFound = GameObject.FindGameObjectWithTag("debugCube");
        if (cubePlaced)
        {
            if (debugCubeFound != null)
            {
                //-------------show where the target will be in near future-----------------
                _time_to_target = CalcFlyingTime(ballOrigin, target.transform.position, false);
                float _time = (float)_time_to_target.Value;
                debug_text.SetDebugText("retime to target: " + _time);
                _hitTargetPos = GameManager.Instance.hitTarget
                   .GetComponent<TargetPos>()
                   .GetFuturePositionOfTarget(_time);
                debugCubeInstance.transform.position = _hitTargetPos;
                debug_text.SetDebugText("cube relocation: " + _hitTargetPos);

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
}
