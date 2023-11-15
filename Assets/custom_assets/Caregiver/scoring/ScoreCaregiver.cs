using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(Appear))]
public class ScoreCaregiver : MonoBehaviour
{
    [SerializeField] private GameObject LeftController;
    [SerializeField] private GameObject RightController;
    [SerializeField] private GameObject meCircle;
    [SerializeField] private Renderer meCircleRing;
    [SerializeField] private GameObject caregiverCircle;
    [SerializeField] private Renderer caregiverCircleRing;
    [SerializeField, Tooltip("collider to check if hand buttons are pressed")] private GameObject _collider;
    [SerializeField] private float scaleCircleDistance = 5.0f;
    [SerializeField] private float maxDistance = 2.0f;

    public ParticleSystem ParticleEffectStart;
    public ParticleSystem ParticleEffectEndLeft;
    public ParticleSystem ParticleEffectEndRight;


    public int caregiverScore = 0;
    private float controllerStartDist = 0.0f;
    public float controllerDist = 0.0f;
    [SerializeField] private float circleDist = 0.0f;
    private bool gripIsPushed = false;
    public bool scoringStarted = false;
    [SerializeField] private Appear appear;
    public bool isLow = true;
    [Header("Data connections")]
    private WsClient ws;
    private CaregiverScoreEvent caregiverScoreEvent;
    [SerializeField] private CaregiverScoreListEvent caregiverScoreList;
    //TESTING
    //[SerializeField] private DebugConnection debug_text;
    private Vector3 startPosMeCircle;
    private Vector3 startPosMeCircleOrig;
    private Vector3 startPosCaregiverCircle;
    private Vector3 startPosCaregiverCircleOrig;
    [SerializeField, Range(0.0f, 1.0f)] private float testControllerDist = 0.0f;
    [SerializeField] private bool enableTestModus = false;
    // Start is called before the first frame update
    void Start()
    {
        //debug_text = GameObject.FindGameObjectWithTag("debug")
        //               .GetComponentInChildren<DebugConnection>();
        ws = WsClient.Instance;

        appear = GetComponent<Appear>();
        startPosMeCircleOrig = meCircle.transform.position;
        startPosMeCircle = meCircle.transform.position;
        startPosCaregiverCircleOrig = caregiverCircle.transform.position;
        startPosCaregiverCircle = caregiverCircle.transform.position;
        caregiverScoreEvent = GameManager.Instance.caregiverScoreEvent; // we set the caregiver score events in the gamemanager to keep them continuous over the scenes
        caregiverScoreList = GameManager.Instance.caregiverScoreList;

        var controllers = GameObject.FindGameObjectsWithTag("Hand");
        LeftController = controllers[0];
        RightController = controllers[1];

    }

    public void EnableScoring(bool resetPos)
    {
        Hashtable transformMe = iTween.Hash("position", startPosMeCircle, "delay", 0.1f, "time", 1.0f, "easetype", "easeInOutExpo");
        iTween.MoveBy(meCircle, transformMe);
        Hashtable transformCaregiver = iTween.Hash("position", startPosCaregiverCircle, "delay", 0.1f, "time", 1.0f, "easetype", "easeInOutExpo");
        iTween.MoveBy(caregiverCircle, transformCaregiver);
        if (resetPos)
        {
            meCircle.transform.position = new Vector3(startPosMeCircleOrig.x, meCircle.transform.position.y, meCircle.transform.position.z);
            caregiverCircle.transform.position = new Vector3(startPosCaregiverCircleOrig.x, caregiverCircle.transform.position.y, caregiverCircle.transform.position.z);
        }
        _collider.SetActive(true);
        appear.Raise();
        gripIsPushed = false;
    }

    public void DisableScoring()
    {
        _collider.SetActive(false);
        appear.Lower();
    }

    public void SwitchGripMode()
    {
        if (!GameManager.Instance.enableScoring) return; //TODO VERIFY

        gripIsPushed = !gripIsPushed;
        if (gripIsPushed)
        {
            controllerStartDist = Vector3.Distance(LeftController.transform.position, RightController.transform.position);
            startPosMeCircle = meCircle.transform.position;
            startPosCaregiverCircle = caregiverCircle.transform.position;
            ChangeToRed();
        }
        else
        {
            ChangeToGreen();
            //debug_text.SetDebugText("distance is: " + DistanceBetweenCircles());
            scoringStarted = true;
        }
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        isLow = appear.isLow;
        if (gripIsPushed)
        {
            CalcDistanceBetweenControllers();
            MoveCircles();
            CalcScore();
        }
        //if (enableTestModus)
        //{
        //    controllerDist = testControllerDist;
        //    MoveCircles();
        //    CalcScore();
        //}
    }

    private void CalcScore()
    {
        //TODO numbering not good, I think we need a non-linear scale?
        caregiverScore = (int)(10 * (maxDistance - DistanceBetweenCircles()) / maxDistance);

    }

    public void SendScore(int trialIndex)
    {

        //debug_text.SetDebugText("caregiverscore: " +caregiverScore + " based on "+ controllerDist + "/" + maxDistance + " trial:" + trialIndex);
        caregiverScoreEvent.Set(trialIndex, caregiverScore);
        ws.SendWSMessage(caregiverScoreEvent.SaveToString());
        caregiverScoreList.Add(trialIndex, caregiverScore);
        ws.SendWSMessage(caregiverScoreList.SaveToString());
    }


    /// <summary>
    /// we want to check if we move further away or closer with the controllers
    /// </summary>
    public void CalcDistanceBetweenControllers()
    {
        controllerDist = Vector3.Distance(LeftController.transform.position, RightController.transform.position) - controllerStartDist;
        //Debug.Log("Distance between controllers = " + controllerDist);
        controllerDist -= 0.05f; // an offset to make it easier to center the circles
    }
    private float DistanceBetweenCircles()
    {
        circleDist = Vector3.Distance(meCircle.transform.position, caregiverCircle.transform.position);
        //Debug.Log("Circle distance is " + circleDist);
        return circleDist;
    }
    //todo: clamping is incorrect
    public void MoveCircles()
    {
        float movement = controllerDist * scaleCircleDistance / 2.0f;
        if (movement + startPosMeCircle.x > maxDistance / 2.0f)
        {
            movement = maxDistance / 2.0f - startPosMeCircle.x;
        }
        if (movement + startPosMeCircle.x < 0.0f)
        {
            movement = 0.0f - startPosMeCircle.x;
        }
        UpdateLocalPos(meCircle, xUpdate: movement + startPosMeCircle.x, meCircle.transform.localPosition.y, meCircle.transform.localPosition.z);
        UpdateLocalPos(caregiverCircle, xUpdate: -(movement + startPosMeCircle.x), meCircle.transform.localPosition.y, meCircle.transform.localPosition.z);
    }

    private void UpdateLocalPos(GameObject obj, float xUpdate, float yUpdate, float zUpdate)
    {
        Vector3 localPos = obj.transform.localPosition;

        localPos.x = xUpdate;
        localPos.y = yUpdate;
        localPos.z = zUpdate;
        obj.transform.localPosition = localPos;
    }
    public void ChangeAlphaTo(int val)
    {
        var color = meCircleRing.material.color;
        color.a = val;
        meCircleRing.material.color = color;
        color = caregiverCircleRing.material.color;
        color.a = val;
        caregiverCircleRing.material.color = color;
    }
    public void ChangeToRed()
    {
        meCircleRing.material.color = Color.red;
        caregiverCircleRing.material.color = Color.red;
        ParticleEffectStart.Play();

    }
    public void ChangeToGreen()
    {
        meCircleRing.material.color = Color.green;
        caregiverCircleRing.material.color = Color.green;
        ParticleEffectEndLeft.Play();
        ParticleEffectEndRight.Play();
    }
}

