using Assets.Scripts;
using System;
using UnityEngine;
using Random = UnityEngine.Random;

[RequireComponent(typeof(LineRenderer))]
public class Slingshot : MonoBehaviour
{
    public GameObject Ball;
    [Header("slingshot machine anchor points")]
    [SerializeField] private GameObject LeftSide;
    [SerializeField] private GameObject RightSide;
    [SerializeField] private GameObject Hook;
    private Vector3 slingshotPocketToBallDistance;
    private LineRenderer Line;

    [Header("Shooting parameters")]
    [SerializeField] private float launchForceMultiplier = 20.0f;
    [SerializeField, Tooltip("distance to decide whether we need to deflect the ball")] float minDeflectionDist = 1.3f;
    [Serializable] public enum ReachTargetEnum { may = 0, must = 1, musnt = 2 }
    [Tooltip("defines whether we may, must or musn't hit the correct target")] public ReachTargetEnum reachTarget;
    [Header("debug")]
    [SerializeField] private DebugConnection debug_text;


    void Start()
    {
        Line = GetComponent<LineRenderer>();
        Line.positionCount = 3;
        slingshotPocketToBallDistance = Ball.transform.localScale;
        reachTarget = ReachTargetEnum.may;
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
        Line.SetPosition(0, LeftSide.transform.position);
        if (Ball == null || Ball.GetComponent<SpringJoint>() == null)
        {
            Line.SetPosition(1, Hook.transform.position);
        }
        else
        {
            Line.SetPosition(1, new Vector3(Ball.transform.position.x, Ball.transform.position.y, Ball.transform.position.z - 1f * slingshotPocketToBallDistance.z));
        }
        Line.SetPosition(2, RightSide.transform.position);
    }
    /// <summary>
    /// SetTargetReachable sets the possibility to steer the ball towards or away from the target.
    /// This can be used in the gamemanager to set the trial option, or with debug buttons switching the state
    /// </summary>
    /// <param name="reachEnumInt">int interpretation of the enum</param>
    public void SetTargetReachable(int reachEnumInt)
    {
        reachTarget = (ReachTargetEnum)reachEnumInt;
    }
    public GameObject getHook()
    {
        return Hook;
    }

    public Transform getHookTransform()
    {
        return Hook.transform;
    }

    /// <summary>
    /// function to replace the springjoint, to be able to control better the velocity we're giving to the ball
    /// </summary>
    /// <param name="origin"></param>
    /// <param name="hitTargetLoc"></param>
    /// <returns></returns>
    public Vector3 CalcLaunchVelocity(Vector3 origin, Vector3 hitTargetLoc = default)
    {
        Vector3 _ballPos = origin;
        Vector3 _hookPos = Hook.transform.position;
        Vector3 _direction;
        Vector3 _launchForce;
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
                _launchForce = _direction * launchForceMultiplier;
                //compensate for gravity TODO seems correct, BUT WHY??
                _launchForce -= (Physics.gravity * 0.25f);
                return _launchForce;

            case ReachTargetEnum.musnt:
                // first we calculate the mustreachforce & mayreachforce
                // if they are too close to each other, we alter the forceVector away from the mayreachforce vector
                //mayreachForce
                var _mayReachForce = (_hookPos - _ballPos).normalized * launchForceMultiplier;
                //mustReachForce
                var _mustReachForce = (hitTargetLoc - _ballPos).normalized * launchForceMultiplier - (Physics.gravity * 0.25f);
                float diff = Vector3.Distance(_mayReachForce, _mustReachForce); // we 'abuse' the distance calculation to see whether the vectors are close to each others
                _launchForce = _mayReachForce;
                if (diff <= minDeflectionDist)
                {
                    //check for each vector if we want to add or subtract a diff! 
                    // check for x which is the largest and make sure the deflectionVector enlarges the distance between the two points
                    //minimum distance to move for y, as this is the least distinguisishable in any case
                    var _y_displ_dir = _launchForce.y >= _mustReachForce.y ? 1 : -1;
                    var _min_y_displ = Mathf.Sqrt(Mathf.Pow(minDeflectionDist, 2) - Mathf.Pow(Mathf.Abs(_launchForce.x - _mustReachForce.x), 2));
                    var _move_y = Random.Range(_min_y_displ, _min_y_displ + 0.4f) * _y_displ_dir;
                    Vector3 deflectionVector = new Vector3(0, _move_y);
                    _launchForce += deflectionVector;
                }
                return _launchForce;

            default:
                _direction = (_hookPos - _ballPos);
                _direction = _direction.normalized; // A vector FROM the ball TOWARDS the hook
                _launchForce = _direction * launchForceMultiplier;
                return _launchForce;
        }
    }

    /// <summary>
    /// THIS IS AN APPROXIMATION OF HOW LONG THE OBJECT WOULD TRAVERSE TO TARGET
    /// </summary>
    /// <param name="Rb"></param>
    /// <param name="target"></param>
    /// <returns></returns>
    public float CalcImpactTime(Rigidbody Rb, Vector3 target)
    {
        var _distance = target - Rb.position;
        var _direction = _distance.normalized; // A vector FROM the ball TOWARDS the hittarget
        var _launchForce = _direction * launchForceMultiplier;
        var launchVel = _launchForce / Rb.mass;
        float time = launchVel.z / _distance.z;
        return time;
    }


}