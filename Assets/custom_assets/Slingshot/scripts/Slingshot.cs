using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class Slingshot : MonoBehaviour
{
    public GameObject Bullet;
    [Header("slingshot machine anchor points")]
    [SerializeField] private GameObject LeftSide;
    [SerializeField] private GameObject RightSide;
    [SerializeField] private GameObject Hook;
    private float launchSpeed = 20.0f;
    private Vector3 distance2keep;
    private LineRenderer Line;
    public enum reachTargetEnum { may, must, musnt }
    public reachTargetEnum reachTarget;

    void Start()
    {
        Line = GetComponent<LineRenderer>();
        Line.positionCount = 3;
        distance2keep = Bullet.transform.localScale;
        reachTarget = reachTargetEnum.may;

    }

    void Update()
    {
        Line.SetPosition(0, LeftSide.transform.position);
        if (Bullet == null || Bullet.GetComponent<SpringJoint>() == null)
        {
            Line.SetPosition(1, Hook.transform.position);
        }
        else
        {
            Line.SetPosition(1, new Vector3(Bullet.transform.position.x, Bullet.transform.position.y, Bullet.transform.position.z - 1f * distance2keep.z));
        }
        Line.SetPosition(2, RightSide.transform.position);
    }
    public void SetTargetReachable(bool steer, bool miss)
    {
      
        if (steer)
        {
            if (!miss)
            {
                //make sure we hit the target
                reachTarget = reachTargetEnum.must;
            }
            else
            {
                //make sure we miss the target
                reachTarget = reachTargetEnum.musnt;
            }
        }
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
    /// <returns></returns>
    public Vector3 CalcLaunchVelocity(Vector3 origin, Vector3 hitTargetLoc= default)
    {
        Vector3 _ballPos = origin;
        Vector3 _hookPos = Hook.transform.position;
        Vector3 _direction;
        Vector3 _launchVel;
        switch (reachTarget)
        {
            case reachTargetEnum.may:
                _direction = _hookPos - _ballPos;
                _direction = _direction.normalized; // A vector FROM the ball TOWARDS the hook
                _launchVel = _direction * launchSpeed;
                return _launchVel;
            case reachTargetEnum.must:
                _direction = hitTargetLoc - _ballPos;
                _direction = _direction.normalized; // A vector FROM the ball TOWARDS the hittarget
                _launchVel = _direction * launchSpeed;
                //compensate for gravity
                _launchVel -= (Physics.gravity*0.25f) ; 
                return _launchVel;
                
            case reachTargetEnum.musnt:
                //TODO NOT GOOD YET
                Vector3 deflectionVector = new Vector3(Random.Range(0.4f, 0.8f), Random.Range(0.4f, 0.8f));
                _direction = _hookPos - _ballPos;
                _direction = _direction.normalized; // A vector FROM the ball TOWARDS the hook
                float transformation_x = hitTargetLoc.x / _direction.x; // if all connections are within a certain reach of each other, we know the ball is getting too close to the target (extrapolation)
                float transformation_y = hitTargetLoc.y / _direction.y;
                var mean = ((transformation_x + transformation_y) / 2);
                transformation_x = transformation_x / mean ; // normalize
                transformation_y = transformation_y / mean;
                float tooCloseRange = 0.2f;
                if( Mathf.Abs(transformation_x-transformation_y)<= tooCloseRange)              
                {
                    _direction = _direction + deflectionVector;
                }
             
                _launchVel = _direction * launchSpeed; 
                return _launchVel;
                
            default:
                _direction = (_hookPos - _ballPos);
                _direction = _direction.normalized; // A vector FROM the ball TOWARDS the hook
                _launchVel = _direction * launchSpeed;
                return _launchVel;
        }
    }

    /// <summary>
    /// THIS IS AN APPROXIMATION OF HOW LONG THE OBJECT WOULD TRAVERSE TO TARGET
    /// </summary>
    /// <param name="Rb"></param>
    /// <param name="target"></param>
    /// <returns></returns>
    public (float, Vector3) CalcImpactTime(Rigidbody Rb, Vector3 target)
    {
        var _distance = target - Rb.position;
        var _direction = _distance.normalized; // A vector FROM the ball TOWARDS the hittarget
        var _launchForce = _direction * launchSpeed;
        var launchVel = _launchForce / Rb.mass;
        float time = launchVel.z / _distance.z;
        return (time, launchVel);
    }


}