using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    [Header("AudioSamples")]
    [SerializeField] private AudioSource SlingshotAudio;
    [SerializeField] private AudioSource SlingshotReleaseAudio;
    [SerializeField] private AudioSource BulletImpactAudio;

    [Tooltip("time used for determining when bullet is not attached to slingshot anymore")] public float ReleaseTime = 0.5f;
    [Tooltip("time after release when bullet is destroyed")]public float DestructionTime = 1.5f;

    [Header("Display Controls")]
    [SerializeField]
    [Range(10, 100)]
    private int LinePoints = 25;
    [SerializeField]
    [Range(0.01f, 0.25f)]
    private float TimeBetweenPoints = 0.1f;
    [SerializeField] private Rigidbody Rb;

    [SerializeField] private LineRenderer lineRenderer;
    [SerializeField] private SpringJoint springJoint;
    [SerializeField] private TrailRenderer trailRenderer;

    private bool canDraw = false; // Boolean to tell us we can show the line renderer depicting the balls trajectory
    private bool isFlying = false;

    public bool hit = false; // if hit is true, we want the ball to hit the target, otherwise definitely miss
    private float gravityForce = 1.3f;

    public GameObject debugCube;

    void Awake()
    {
        Rb = GetComponent<Rigidbody>();
        lineRenderer = GetComponent<LineRenderer>();
        springJoint = GetComponent<SpringJoint>();
        trailRenderer = GetComponent<TrailRenderer>();
    }

    private void Start()
    {
        float _temp_time = 1.0f; // temp time should be an indication of how long it will take before bullet reaches target
        Vector3 _hitTargetPos = GameManager.Instance.hitTarget.GetComponent<TargetPos>().GetFuturePosition(_temp_time);
        var temp = Instantiate(debugCube, _hitTargetPos, Quaternion.identity, this.transform);
        Destroy(temp, 5.0f);
    }

    void FixedUpdate()
    {
        if (canDraw)
        {
            DrawProjectionVR();
        }
        else lineRenderer.enabled = false;
        if (isFlying)
        {
            //We first declare a point where to fly towards
            // WHERE WILL THE TARGET BE AFTER X TIME
            float _temp_time = 0.3f; // temp time should be an indication of how long it will take before bullet reaches target
            Vector3 _hitTargetPos = GameManager.Instance.hitTarget.GetComponent<TargetPos>().GetFuturePosition(_temp_time);
            Vector3 _hitTargetDir = _hitTargetPos - this.transform.position;
            Instantiate(debugCube, _hitTargetPos, Quaternion.identity, this.transform);
            // we want to adapt the trajectory to either definitely win, or definitely fail
            if (! hit){
                // approach 1 : adapt the flying curve
                Rb.AddForce(_hitTargetDir + new Vector3(Random.Range(1, 100), Random.Range(1, 100)) * gravityForce * Time.deltaTime );

                //TODO
                //Rb.velocity  
                // approach 2 : TBD
                    }
        }
    }

    public void DrawProjectionVR()
    {
        lineRenderer.enabled = true;
        lineRenderer.positionCount = Mathf.CeilToInt(LinePoints / TimeBetweenPoints) + 1;
        Vector3 startPosition = this.transform.position;
        Vector3 _direction = springJoint.connectedAnchor - startPosition;
        Vector3 startVelocity = Mathf.Sqrt(springJoint.spring) * _direction/ Rb.mass;

        int i = 0;
        lineRenderer.SetPosition(i, startPosition);
        for (float time = 0; time < LinePoints; time += TimeBetweenPoints)
        {
            i++;
            Vector3 point = startPosition + time * startVelocity;
            point.y = startPosition.y + startVelocity.y * time + (Physics.gravity.y / 2f * time * time) - springJoint.damper * time - Rb.angularDrag * time; //Need to take into account angular drag as well

            lineRenderer.SetPosition(i, point);

            Vector3 lastPosition = lineRenderer.GetPosition(i - 1);
        }
    }



    private void OnCollisionEnter(Collision collision)
    {
        GetComponent<TrailRenderer>().enabled = false;
        if (!collision.collider.CompareTag("Ground"))
        {
            //GameObject feathers = Instantiate(Feathers, transform.position, Quaternion.identity);
            //Destroy(feathers, 2);
            if (!BulletImpactAudio.isPlaying)
            {
                BulletImpactAudio.Play();
            }
            //GameManager.Instance.AddScore(Random.Range(5, 25) * 10, transform.position, Color.white);
        }
    }

    public void VREnterEvent()
    {
        canDraw = true;
        SlingshotAudio.Play();
        Debug.Log("hook " + springJoint.connectedAnchor + " start "+ this.transform.position);

    }

    // we release the Bullet
    public void VRExitEvent()
    {
        canDraw = false;
        SlingshotReleaseAudio.Play();
        StartCoroutine(Release());

    }

    IEnumerator Release()
    {
        // we wait a very short amount of time and release the ball from the springjoint
        yield return new WaitForSeconds(ReleaseTime);
        isFlying = true;
        Destroy(GetComponent<SpringJoint>());
        StartCoroutine(Explode());
    }

    IEnumerator Explode()
    {
        yield return new WaitForSeconds(DestructionTime);

        GameManager.Instance.SetNewBullet();
        //GameManager.Instance.BirdDestroy.Play();
        //Instantiate(FeatherExplosion, transform.position, Quaternion.identity);
        Destroy(gameObject);
    }
}
