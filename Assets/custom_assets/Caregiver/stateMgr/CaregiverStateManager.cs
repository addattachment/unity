using UnityEngine;

public class CaregiverStateManager : MonoBehaviour
{
    public CaregiverStateMachine currentCaregiverState;
    public CaregiverIdleState caregiverIdleState = new();
    public CaregiverFeedbackState caregiverFeedbackState = new();
    public CaregiverFeedbackConfirmState caregiverFeedbackConfirmState = new();
    public CaregiverScoringState caregiverScoringState = new();
    // script references
    public GameManager gameManager;
    public PlayerGroup players;
    public Player player;

    [HideInInspector] public CaregiverFeedback caregiverFeedback;
    public ReadFeedback feedbackPole;
    public SetCaregiverGaze caregiverGaze;
    public GameObject caregiverFeedbackScreen;
    public GameObject scoreCaregiver;
    public LightingMgr lightingMgr;
    [Header("data connections")]
    public WsClient ws;
    public CaregiverFeedbackEvent caregiverFeedbackEvent;
    // booleans to control state

    //public bool didReadFeedback = false;
    //public bool didGiveScore = false;
    //public bool mustGiveFeedback = false;

    // caregiverPhase is for debugging purposes
    public string caregiverPhase = "caregiverIdleState";
    private void Start()
    {
        currentCaregiverState = caregiverIdleState;
        caregiverPhase = "caregiverIdleState";
        currentCaregiverState.EnterState(this);
        gameManager = GameManager.Instance;
        caregiverFeedback = caregiverFeedbackScreen.GetComponent<CaregiverFeedback>();
        caregiverFeedbackEvent = new();
        ws = WsClient.Instance;
    }
    private void Update()
    {
        currentCaregiverState.UpdateState(this);
    }
    public void SwitchState(CaregiverStateMachine newState)
    {
        currentCaregiverState.ExitState(this);
        currentCaregiverState = newState;
        currentCaregiverState.EnterState(this);
    }

    public void SetDidGiveScore()
    {
        gameManager.didGiveScore = true;
    }
}
