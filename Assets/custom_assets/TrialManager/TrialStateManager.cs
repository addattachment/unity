using LSL;
using UnityEngine;

//reference: https://www.youtube.com/watch?v=Vt8aZDPzRjI
public class TrialStateManager : MonoBehaviour
{
    public StateMachine currentState;
    public PreTrialState preTrialState = new();
    public TrialState trialState = new();
    public PostTrialState postTrialState = new();
    public IntroState introState = new();
    public EndTrialState endState = new();

    public GameManager gameManager;
    public PlayerGroup players;
    public TargetGroup targets;
    public TrialList trialList;
    public BallStateManager ballStates;
    public CaregiverStateManager caregiverStates;
    public TrophyStateManager trophyStates;
    public CountDown countDown;

    public Trial currentTrial;

    public float IntroPauseTimeForStart = 1.0f;

    // trialPhase is for debugging purposes
    public string trialPhase = "IntroState";
    [SerializeField] private bool sendStateWSMessage = false;

    public GameFinished gameFinished;
    [Header("data connections")]
    public WsClient wsClient;
    public OutletPassThrough LSLOutlet;
    StateMgrEvent trialStateMgrEvent;

    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameManager.Instance;
        wsClient = WsClient.Instance;
        LSLOutlet = OutletPassThrough.Instance;

        if (players == null)
        {
            players = GameObject.FindGameObjectWithTag("PlayerGroup").GetComponent<PlayerGroup>();
        }

        // starting state for our state machine
        currentState = introState;
        trialPhase = "IntroState";
        // "this" is a reference to the context (this EXACT Monobehavior script)
        currentState.EnterState(this);
        trialStateMgrEvent = new("trialstate");
        
    }

    // Update is called once per frame
    void Update()
    {
        currentState.UpdateState(this);
    }

    public void SwitchState(StateMachine newState)
    {
        currentState.ExitState(this);
        currentState = newState;
        if (sendStateWSMessage)
        {
            trialStateMgrEvent.Set(newState.ToString());
            wsClient.SendWSMessage(trialStateMgrEvent.SaveToString());
        }
        currentState.EnterState(this);
    }
}


