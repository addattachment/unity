using UnityEngine;

public class TrophyStateManager : MonoBehaviour
{
    public TrophyStateMachine currentTrophyState;

    // ballPhase is for debugging purposes
    public string trophyState = "trophyInitState";
    public TrophyInitState trophyInitState = new();
    public TrophyAppearState trophyAppearState = new();
    public TrophyWaitingState trophyWaitingState = new();
    public TrophyGivingState trophyGivingState = new();
    public TrophyCooldownState trophyCooldownState = new();

    // script references
    public GameManager gameManager;
    public PlayerGroup players;
    public TargetGroup targets;
    public TrophyList trophyList;
    public LightingMgr lightMgr;
    public announceWinner winnerUI;

    [SerializeField] private bool sendStateWSMessage = false;
    public float waitTimeForTransition = 0.5f;
    [Header("data connections")]
    [SerializeField] private WsClient ws;
    StateMgrEvent trophyStateMgrEvent;
    // booleans to control state
    //public bool trophyMayAppear = false;
    //public bool mayPrep = false;
    //public bool canLaunch = false;
    //public bool didShoot = false;
    //public bool trophyIsGiven = false;
    private void Start()
    {
        currentTrophyState = trophyInitState;
        trophyState = "trophyInitState";
        currentTrophyState.EnterState(this);
        gameManager = GameManager.Instance;
        trophyStateMgrEvent = new("trophystate");
    }
    private void Update()
    {
        currentTrophyState.UpdateState(this);

    }
    public void SwitchState(TrophyStateMachine newState)
    {
        currentTrophyState.ExitState(this);
        currentTrophyState = newState;
        if (sendStateWSMessage)
        {
            trophyStateMgrEvent.Set(newState.ToString());
            ws.SendWSMessage(trophyStateMgrEvent.SaveToString());
        }
        currentTrophyState.EnterState(this);
    }
}
