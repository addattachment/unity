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

    private float controllerStartDist = 0.0f;
    public float controllerDist = 0.0f;
    [SerializeField] private float circleDist = 0.0f;
    private bool gripIsPushed = false;
    public bool scoringStarted = false;
    [SerializeField] private Appear appear;
    public bool isLow = true;
    [Header("Data connections")]
    [SerializeField] private WsClient ws;
    private CaregiverScoreEvent caregiverScoreEvent;
    //TESTING
    //[SerializeField] private DebugConnection debug_text;
    private Vector3 startPosMeCircle;
    private Vector3 startPosCaregiverCircle;
    // Start is called before the first frame update
    void Start()
    {
        //debug_text = GameObject.FindGameObjectWithTag("debug")
        //               .GetComponentInChildren<DebugConnection>();
        ws = GameObject.FindGameObjectWithTag("ws").GetComponent<WsClient>();
        appear = GetComponent<Appear>();
        startPosMeCircle = meCircle.transform.position;
        startPosCaregiverCircle = caregiverCircle.transform.position;
        caregiverScoreEvent = new();
    }

    public void EnableScoring()
    {
        meCircle.transform.position = startPosMeCircle;
        caregiverCircle.transform.position = startPosCaregiverCircle;
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
        }
    }

    public void SendScore(int trialIndex)
    {
        //TODO numbering not good, I think we need a non-linear scale?
        int caregiverScore = (int)(10 * (maxDistance - controllerDist) / maxDistance);
        //debug_text.SetDebugText("caregiverscore: " +caregiverScore + " based on "+ controllerDist + "/" + maxDistance + " trial:" + trialIndex);
        caregiverScoreEvent.Set(trialIndex, caregiverScore);
        ws.SendWSMessage(caregiverScoreEvent.SaveToString());
    }


    /// <summary>
    /// we want to check if we move further away or closer with the controllers
    /// </summary>
    public void CalcDistanceBetweenControllers()
    {
        controllerDist = Vector3.Distance(LeftController.transform.position, RightController.transform.position) - controllerStartDist;
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
        if (movement + startPosMeCircle.x > maxDistance / 2.0f)
        {
            movement = maxDistance / 2.0f;
        }
        if (movement + startPosMeCircle.x < 0.0f)
        {
            movement = 0.0f;
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
    }
    public void ChangeToGreen()
    {
        meCircleRing.material.color = Color.green;
        caregiverCircleRing.material.color = Color.green;
    }
}
public class CaregiverScoreEvent
{
    public int trialNumber;
    public string websocketMessage = "caregiverScore";
    public int score;
    public float _time;
    public CaregiverScoreEvent()
    {
    }
    public void Set(int currentTrial, int newScore)
    {
        trialNumber = currentTrial;
        score = newScore;
    }
    public string SaveToString()
    {
        _time = Time.time;
        return JsonUtility.ToJson(this);
    }
}