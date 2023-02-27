using System;
using TrialNS;

public class BallWaitingState : BallStateMachine
{
    public override void EnterState(BallStateManager state)
    {
        state.ballPhase = "ballWaitingState";
    }

    public override void ExitState(BallStateManager state)
    {
    }

    public override void OnCollisionEnter(BallStateManager state)
    {
        throw new NotImplementedException();
    }

    public override void UpdateState(BallStateManager state)
    {
        if (state.gameManager.trialIsRunning)
        {
            state.SwitchState(state.ballPrepState);
        }
    }
}

