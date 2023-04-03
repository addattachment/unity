using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LogHeadMovement : MonoBehaviour
{
    public bool noSevereMovementDetected = true;
    private Vector3 startPos;
    private Quaternion startRot;
    private List<Quaternion> rotQuat = new();
    
    private float _timer = 0.0f;
    private bool timerIsRunning = false;
    [SerializeField] private float timerReset = 1.0f;
    // Start is called before the first frame update
    void Start()
    {
        startPos = transform.position;
        startRot = transform.rotation;
    }

    // Update is called once per frame
    void Update()
    {
        if (timerIsRunning)
        {
            _timer += Time.deltaTime;
            if (_timer >= timerReset)
            {
                startRot = transform.rotation;
                startPos = transform.position;
                _timer = 0.0f;
            }
        }
        bool posUpdate = Vector3.Distance(startPos, transform.position) > 0.02f;
        bool rotUpdate = !isApproximate(startRot, transform.rotation, 0.004f);
        if (posUpdate | rotUpdate)
        {
            timerIsRunning = true;
            if (rotUpdate)
            {
                Debug.Log("rotation: " + transform.rotation);
            }
            if (posUpdate)
            {
                Debug.Log("transform: " + transform.position);
            }
        }
        else
            timerIsRunning = false;

    }

    public static bool isApproximate(Quaternion q1, Quaternion q2, float precision)
    {
        //Debug.Log(Mathf.Abs(Quaternion.Dot(q1, q2)));
        return Mathf.Abs(Quaternion.Dot(q1, q2)) >= 1 - precision;
    }
}
