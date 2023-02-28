using UnityEngine;

public class BallStateManager : MonoBehaviour
{
    public BallStateMachine currentBallState;
    public BallInitState ballInitState = new();
    public BallWaitingState ballWaiting = new();
    public BallPrepState ballPrepState = new();
    public BallLaunchState ballLaunchState = new();
    public BallCalcImpactState ballCalcImpactState = new();

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

    // ballPhase is for debugging purposes
    public string ballPhase = "ballInitState";

    private void Start()
    {
        currentBallState = ballInitState;
        ballPhase = "ballInitState";
        currentBallState.EnterState(this);
        gameManager = GameManager.Instance;
    }
    private void Update()
    {
        currentBallState.UpdateState(this);

    }
    public void SwitchState(BallStateMachine newState)
    {
        currentBallState.ExitState(this);
        currentBallState = newState;
        currentBallState.EnterState(this);
    }
}
