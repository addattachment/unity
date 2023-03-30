using UnityEngine;

public class CaregiverIntroStateManager : MonoBehaviour
{
    public CaregiverIntroStateMachine currentCaregiverState;
    public CaregiverIntroIdleState caregiverIdleState = new();
    public CaregiverIntroWaveState caregiverIntroWaveState = new();
    public CaregiverIntroButtonState caregiverIntroButtonState = new();
    // script references
    public GameManager gameManager;

    [HideInInspector] public CaregiverFeedback caregiverFeedback;
    //public ReadFeedback feedbackPole;
    //public SetCaregiverGaze caregiverGaze;
    //public GameObject caregiverFeedbackScreen;
    //public GameObject scoreCaregiver;
    public LightingMgr lightingMgr;
    public GameObject Caregiver;
    [Header("data connections")]
    public WsClient ws;
    public CaregiverFeedbackEvent caregiverFeedbackEvent;

    public bool toNextState = false;

    // caregiverPhase is for debugging purposes
    public string caregiverPhase = "caregiverIntroIdleState";
    private void Start()
    {
        currentCaregiverState = caregiverIdleState;
        caregiverPhase = "caregiverIntroIdleState";
        currentCaregiverState.EnterState(this);
        gameManager = GameManager.Instance;
        //caregiverFeedback = caregiverFeedbackScreen.GetComponent<CaregiverFeedback>();
        //caregiverFeedbackEvent = new();
    }
    private void Update()
    {
        currentCaregiverState.UpdateState(this);
    }
    public void SwitchState(CaregiverIntroStateMachine newState)
    {
        currentCaregiverState.ExitState(this);
        currentCaregiverState = newState;
        Debug.Log("new state: " + newState);
        currentCaregiverState.EnterState(this);
    }

    public void SetDidGiveScore()
    {
        gameManager.didGiveScore = true;
    }
}
