using System;

public class BallDoneState : BallStateMachine
{
    public override void EnterState(BallStateManager state)
    {
        state.ballPhase = "ballDoneState";

    }

    public override void ExitState(BallStateManager state)
    {
    }


    public override void UpdateState(BallStateManager state)
    {
    }
}

