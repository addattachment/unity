using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem.XR;
using UnityEngine.XR;
using UnityEngine.XR.Interaction;
using UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation;
using UnityEngine.XR.Interaction.Toolkit.Inputs;

public class ScoreCaregiver : MonoBehaviour
{
    [SerializeField] private GameObject LeftController;
    [SerializeField] private GameObject RightController;
    [SerializeField] private Transform center;
    [SerializeField] private GameObject meCircle;
    [SerializeField] private GameObject caregiverCircle;
    [SerializeField] private float scaleCircleDistance = 5.0f;
    [SerializeField] private float maxDistance = 2.0f;
    private float controllerStartDist = 0.0f;
    public float controllerDist = 0.0f;
    [SerializeField] private float circleDist = 0.0f;
    private bool gripIsPushed = false;
    [SerializeField] private WsClient ws;
    //TESTING
    [SerializeField] private XRDeviceSimulator sim;


    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (gripIsPushed)
        {
            CalcDistanceBetweenControllers();
            MoveCircles();

            if (!sim.gripAction.action.IsPressed())
            {
                GripReleased();
            }
        }
        if (sim.gripAction.action.IsPressed())
        {
            GripPushed();
        }
    }

    public void SendScore(int trialIndex)
    {
        ws.SendWSMessage("caregiverscore: " + controllerDist + "/" + maxDistance + " trial:"+trialIndex);
    }

    public void GripPushed()
    {
        controllerStartDist = Vector3.Distance(LeftController.transform.position, RightController.transform.position);
        Debug.Log("Grip pushed");
        gripIsPushed = true;

        // now calculate the distance we move our hands apart until we release
    }

    public void GripReleased()
    {
        Debug.Log("grip released");
        gripIsPushed = false;
    }

    public void CalcDistanceBetweenControllers()
    {
        controllerDist = Vector3.Distance(LeftController.transform.position, RightController.transform.position) - controllerDist;
        Debug.Log("Distance between controllers = " + controllerDist);
    }
    private float DistanceBetweenCircles()
    {
        circleDist = Vector3.Distance(meCircle.transform.position, caregiverCircle.transform.position);
        return circleDist;
    }
    public void MoveCircles()
    {
        float movement = controllerDist * scaleCircleDistance / 2.0f;
        if (DistanceBetweenCircles() + movement*2.0f > maxDistance)
        {
            movement = maxDistance - DistanceBetweenCircles();
        }
        Debug.Log("movement "+movement);
        Hashtable meCircleHt = iTween.Hash("x", center.position.x + movement, "delay", 0.1f, "time", 0.1f, "easetype", "easeInOutExpo");
        Hashtable caregiverCircleHt = iTween.Hash("x", center.position.x-movement, "delay", 0.1f, "time", 0.1f, "easetype", "easeInOutExpo");
        iTween.MoveTo(meCircle, meCircleHt);
        iTween.MoveTo(caregiverCircle, caregiverCircleHt);

    }
}
