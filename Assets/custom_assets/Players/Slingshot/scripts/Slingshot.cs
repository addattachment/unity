using System;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;
/// <summary>
/// may: no guidance
/// must: guidance for hit
/// musnt: guidance to not allow a hit
/// mayNPC: guidance with some randomnization so missing is possible
/// preferredMust: guidance for hit IF drawing is in the correct direction
/// </summary>
[Serializable] public enum ReachTargetEnum { may = 0, must = 1, musnt = 2, mayNPC = 3, preferredMust = 4 }
[Serializable] public enum SlingshotLinesEnum { active = 0, passive = 1, hidden = 2 }

[RequireComponent(typeof(LineRenderer))]
public class Slingshot : MonoBehaviour
{
    [Header("player")]
    public Player player;
    public PlayerScore playerScore;
    [SerializeField] private GameObject Ball;
    public GameObject InstBall;
    [Header("slingshot machine anchor points")]
    [SerializeField] private GameObject LeftSide;
    [SerializeField] private GameObject RightSide;
    [SerializeField] private GameObject Hook;
    public GameObject _fakeBallStartPointDebug;// = new Vector3(-1, 1.4f, 0);

    private Vector3 slingshotPocketToBallDistance;
    private LineRenderer Line;

    [Header("Shooting parameters")]
    [Range(0.0f, 50.0f)] public float launchForceMultiplier = 20.0f;
    [SerializeField, Tooltip("distance to decide whether we need to deflect the ball")] float minDeflectionDist = 1.3f;
    public GameObject hitTarget; // we use the hittarget object to adapt the deflection distance
    [Tooltip("defines whether we may, must or musn't hit the correct targets")] public ReachTargetEnum reachTarget;
    [SerializeField, Tooltip("how much may the drawing hook differ from the perfect hook to guide a ball to hit")] private float minGuidanceDist = 0.9f;

    [Header("Audio")]
    public AudioSource pullSlingShotClip;
    public AudioSource releaseSlingShotClip;

    [Header("debug")]

    public SlingshotLinesEnum slingshotLinesEnum = SlingshotLinesEnum.active;
    private TrajectoryManager trajectoryManager;
    void Start()
    {
        Line = GetComponent<LineRenderer>();
        Line.positionCount = 3;
        slingshotPocketToBallDistance = Ball.transform.localScale;
        reachTarget = ReachTargetEnum.may;
        //debug_text = GameObject.FindGameObjectWithTag("debug").GetComponentInChildren<DebugConnection>();
        trajectoryManager = TrajectoryManager.Instance;
    }

    void Update()
    {
        DrawSlingshotLines();
    }


    /// <summary>
    /// Draws the connection between the ball and the slingshot wires
    /// </summary>
    private void DrawSlingshotLines()
    {
        switch (slingshotLinesEnum)
        {
            case SlingshotLinesEnum.active:
                Line.enabled = true;
                Line.SetPosition(0, LeftSide.transform.position);
                if (InstBall == null || InstBall.GetComponent<SpringJoint>() == null)
                {
                    Line.SetPosition(1, Hook.transform.position);
                }
                else
                {
                    Line.SetPosition(1, new Vector3(InstBall.transform.position.x, InstBall.transform.position.y, InstBall.transform.position.z - 1f * slingshotPocketToBallDistance.z));
                }
                Line.SetPosition(2, RightSide.transform.position);
                break;
            case SlingshotLinesEnum.passive:
                Line.enabled = true;
                Line.SetPosition(0, LeftSide.transform.position);
                Line.SetPosition(1, Hook.transform.position);
                Line.SetPosition(2, RightSide.transform.position);
                break;
            case SlingshotLinesEnum.hidden:
                Line.enabled = false;
                break;
            default:
                break;
        }
    }


    /// <summary>
    /// SetTargetReachable sets the possibility to steer the ball towards or away from the targets.
    /// This can be used in the gamemanager to set the trial option, or with debug buttons switching the state
    /// </summary>
    /// <param name="reachEnumInt">int interpretation of the enum</param>
    public void SetTargetReachable(ReachTargetEnum reachEnum)
    {
        reachTarget = reachEnum;
        //AdaptDebug();
    }

    //private void AdaptDebug()
    //{
    //    switch (reachTarget)
    //    {
    //        case ReachTargetEnum.may:
    //            toggle_may.isOn = true;
    //            break;
    //        case ReachTargetEnum.must:
    //            toggle_must.isOn = true;
    //            break;
    //        case ReachTargetEnum.musnt:
    //            toggle_musnt.isOn = true;
    //            break;
    //        case ReachTargetEnum.preferredMust:
    //            toggle_prefmust.isOn = true;
    //            break;
    //        case ReachTargetEnum.mayNPC:
    //            toggle_mayNPC.isOn = true;
    //            break;
    //        default:
    //            toggle_may.isOn = true;
    //            break;
    //    }
    //}
    //public void SetTargetReachableInt(int reachEnumInt)
    //{
    //    reachTarget = (ReachTargetEnum)reachEnumInt;
    //    AdaptDebug();
    //}
    public GameObject GetHook()
    {
        return Hook;
    }

    public Transform GetHookTransform()
    {
        return Hook.transform;
    }

    /// <summary>
    /// function to replace the springjoint, to be able to control better the velocity we're giving to the ball
    /// </summary>
    /// <param name="origin"></param>
    /// <param name="hitTargetLoc"></param>
    /// <returns></returns>
    public Vector3 CalcLaunchVelocity(Vector3 origin, Vector3 hitTargetLoc = default, ReachTargetEnum reachTarget = ReachTargetEnum.may)
    {
        Vector3 _ballPos = origin;
        Vector3 _hookPos = Hook.transform.position;
        Vector3 _direction;
        Vector3 _launchForce;
        //TODO something wrong with speed calculation?
        switch (reachTarget)
        {
            case ReachTargetEnum.may:
                _direction = _hookPos - _ballPos;
                _direction = _direction.normalized; // A vector FROM the ball TOWARDS the hook
                _launchForce = _direction * launchForceMultiplier;//  - (Physics.gravity * 0.25f); I don't think we need to compensate here, feels less natural to me??
                return _launchForce;
            case ReachTargetEnum.must:
                _direction = hitTargetLoc - _ballPos;
                _direction = _direction.normalized; // A vector FROM the ball TOWARDS the hittarget
                _direction.x += Random.Range(-0.02f, 0.02f); // random offset to make it look more real
                _direction.y += Random.Range(-0.02f, 0.02f); // random offset to make it look more real
                _launchForce = _direction * launchForceMultiplier;
                //compensate for gravity TODO seems correct, BUT WHY??
                _launchForce -= (Physics.gravity * 0.25f);
                return _launchForce;
            case ReachTargetEnum.preferredMust:
                Vector3 _mayDir = _hookPos - _ballPos;
                _mayDir = _mayDir.normalized;
                _direction = hitTargetLoc - _ballPos;
                _direction = _direction.normalized; // A vector FROM the ball TOWARDS the hittarget
                //Debug.Log("mayDir " + _mayDir);
                //Debug.Log("shouldDir " + _direction);
                float projection_magnitude = Vector3.Project(_mayDir, _direction).magnitude;
                //Debug.Log("projmagn " + projection_magnitude);
                Vector3 prefMustLaunchForce = (_direction * launchForceMultiplier) - (Physics.gravity * 0.25f);
                Vector3 mayLaunchForce = _mayDir * launchForceMultiplier;
                if (projection_magnitude >= minGuidanceDist)
                {
                    _launchForce = prefMustLaunchForce;
                }
                else
                {
                    _launchForce = mayLaunchForce;
                }
                return _launchForce;
            case ReachTargetEnum.musnt:
                // first we calculate the mustreachforce & mayreachforce
                // if they are too close to each other, we alter the forceVector away from the mayreachforce vector
                //mayreachForce
                var _mayReachForce = (_hookPos - _ballPos).normalized * launchForceMultiplier - (Physics.gravity * 0.25f); //TODO moet ik geen zwaartekracht in rekening brengen?
                //mustReachForce
                var _mustReachForce = (hitTargetLoc - _ballPos).normalized * launchForceMultiplier - (Physics.gravity * 0.25f);
                float diff = Vector3.Distance(_mayReachForce, _mustReachForce); // we 'abuse' the distance calculation to see whether the vectors are close to each others
                _launchForce = _mayReachForce;
                if (diff <= minDeflectionDist)
                {
                    //NOT DOING check for each vector if we want to add or subtract a diff! 
                    // check for y which is the largest and make sure the deflectionVector enlarges the distance between the two points
                    //minimum distance to move for y, as this is the least distinguisishable in any case
                    var _y_displ_dir = _launchForce.y >= _mustReachForce.y ? 1 : -1;
                    var _min_y_displ = Mathf.Sqrt(Mathf.Pow(minDeflectionDist, 2) - Mathf.Pow(Mathf.Abs(_launchForce.y - _mustReachForce.y), 2));
                    var _move_y = Random.Range(_min_y_displ, _min_y_displ + 0.4f) * _y_displ_dir;
                    Vector3 deflectionVector = new(0, _move_y);
                    _launchForce += deflectionVector;
                }
                return _launchForce;
            case ReachTargetEnum.mayNPC:
                _direction = hitTargetLoc - _ballPos;
                _direction = _direction.normalized; // A vector FROM the ball TOWARDS the hittarget
                _direction.x += Random.Range(-0.4f, 0.4f);
                _direction.y += Random.Range(-0.4f, 0.4f);

                _launchForce = _direction * launchForceMultiplier;
                //compensate for gravity TODO seems correct, BUT WHY??
                _launchForce -= (Physics.gravity * 0.25f);
                return _launchForce;
            default:
                Debug.Log("default?? " + Time.time);
                _direction = (_hookPos - _ballPos);
                _direction = _direction.normalized; // A vector FROM the ball TOWARDS the hook
                _launchForce = _direction * launchForceMultiplier;
                return _launchForce;
        }
    }


    public Ball PrepNewBall(TargetGroup targets)
    {
        hitTarget = targets.hitTarget;
        InstBall = Instantiate(Ball, Hook.transform.position, Quaternion.identity, transform);
        InstBall.GetComponent<Renderer>().material = hitTarget.GetComponent<Renderer>().material;
        InstBall.GetComponent<TrailRenderer>().material.color = hitTarget.GetComponent<Renderer>().material.color;
        player.instBall = InstBall;
        //update deflection distance
        minDeflectionDist = hitTarget.transform.localScale.x * 2.0f;
        return InstBall.GetComponent<Ball>();
    }

}