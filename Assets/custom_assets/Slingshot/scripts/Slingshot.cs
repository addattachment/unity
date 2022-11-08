using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class Slingshot : MonoBehaviour
{
    public GameObject Bullet;
    [Header("slingshot machine anchor points")]
    [SerializeField] private GameObject LeftSide;
    [SerializeField] private GameObject RightSide;
    [SerializeField] private GameObject Hook;
    private Vector3 distance2keep;
    private LineRenderer Line;

    void Start()
    {
        Line = GetComponent<LineRenderer>();
        Line.positionCount = 3;
        distance2keep = Bullet.transform.localScale;
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
            Line.SetPosition(1, new Vector3(Bullet.transform.position.x, Bullet.transform.position.y, Bullet.transform.position.z - 1f*distance2keep.z));
        }
        Line.SetPosition(2, RightSide.transform.position);
    }

    public GameObject getHook()
    {
        return Hook;
    }

    public Transform getHookTransform()
    {
        return Hook.transform;
    }
}