using UnityEngine;

public class CaregiverIntroStateManager : MonoBehaviour
{
    public CaregiverIntroStateMachine currentCaregiverState;
    public CaregiverIntroIdleState caregiverIdleState = new();
    public CaregiverIntroWaveState caregiverIntroWaveState = new();
    public CaregiverIntroButtonState caregiverIntroButtonState = new();
    public CaregiverIntroScoringState caregiverIntroScoringState = new();
    public CaregiverIntroEndState caregiverIntroEndState = new();
    // script references
    public GameManager gameManager;

    [HideInInspector] public CaregiverFeedback caregiverFeedback;
    //public ReadFeedback feedbackPole;
    //public SetCaregiverGaze caregiverGaze;
    //public GameObject caregiverFeedbackScreen;
    //public GameObject scoreCaregiver;
    //public LightingMgr lightingMgr;
    public GameObject Caregiver;
    [Header("Interactable objects")]
    public ReadFeedback feedbackButton;
    public ScoreCaregiver scoreCaregiver;
    public SwitchScene switchScene;
    [Header("data connections")]
    public WsClient ws;
    public CaregiverFeedbackEvent caregiverFeedbackEvent;

    public bool toNextState = false;

    // caregiverPhase is for debugging purposes
    public string caregiverPhase = "caregiverIntroIdleState";
    private void Start()
    {
        gameManager = GameManager.Instance;
        ws = WsClient.Instance;

        currentCaregiverState = caregiverIdleState;
        caregiverPhase = "caregiverIntroIdleState";
        currentCaregiverState.EnterState(this);
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
        currentCaregiverState.EnterState(this);
    }

    public void SetDidGiveScore()
    {
        gameManager.didGiveScore = true;
    }
}
