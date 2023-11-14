using UnityEngine;

public class BallStateManager : MonoBehaviour
{
    public BallStateMachine currentBallState;
    public BallInitState ballInitState = new();
    public BallWaitingState ballWaiting = new();
    public BallPrepState ballPrepState = new();
    public BallLaunchState ballLaunchState = new();
    public BallCalcImpactState ballCalcImpactState = new();
    public BallDoneState ballDoneState = new();

    // script references
    public GameManager gameManager;
    //public TrialStateManager trialState;
    public PlayerGroup players;
    public TrialList trialList;
    public TargetGroup targets;
    public Ball currentBall;

    public int amountOfBallsInTrial = 0;
    public bool isGoodTrial = false;
    // booleans to control state
    //public bool isInitiated = false;
    //public bool mayPrep = false;
    //public bool canLaunch = false;
    //public bool didShoot = false;

    [SerializeField] private float maxTimeNoBall = 3.0f;
    private float _timerForNoBall = 0.0f;

    // ballPhase is for debugging purposes
    public string ballPhase = "ballInitState";
    [SerializeField] private bool sendStateWSMessage = false;

    [Header("data connections")]
    [SerializeField] private WsClient ws;
    StateMgrEvent ballStateMgrEvent;

    private void Start()
    {
        gameManager = GameManager.Instance;
        ws = WsClient.Instance;
        if (players == null)
        {
            players = GameObject.FindGameObjectWithTag("PlayerGroup").GetComponent<PlayerGroup>();
        }
        currentBallState = ballInitState;
        ballPhase = "ballInitState";
        currentBallState.EnterState(this);
        ballStateMgrEvent = new("ballstate");
    }
    private void Update()
    {
        currentBallState.UpdateState(this);
        CheckIfBallShouldBePresent();

    }
    public void SwitchState(BallStateMachine newState)
    {
        currentBallState.ExitState(this);
        currentBallState = newState;
        if (sendStateWSMessage)
        {
            ballStateMgrEvent.Set(newState.ToString());
            ws.SendWSMessage(ballStateMgrEvent.SaveToString());
        }
        currentBallState.EnterState(this);
    }

    private void CheckIfBallShouldBePresent()
    {
        if (gameManager.trialIsRunning && players.activeBall == null)
        {
            _timerForNoBall += Time.deltaTime;
            if(_timerForNoBall >= maxTimeNoBall)
            {
                Debug.Log("no ball present, we enter the ballPrepState again to generate a new ball");
                SwitchState(ballPrepState);
            }
        }
        else
        {
            _timerForNoBall = 0.0f;
        }
    }
}
