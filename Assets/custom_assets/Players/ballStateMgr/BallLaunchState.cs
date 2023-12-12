using System;

public class BallLaunchState : BallStateMachine
{
    public override void EnterState(BallStateManager state)
    {
        state.ballPhase = "ballLaunchState";

        state.currentBall.canProcessCollisions = true;
    }

    public override void ExitState(BallStateManager state)
    {
        state.players.activeParticipant.slingshot.slingshotLinesEnum = SlingshotLinesEnum.passive;
    }

    public override void UpdateState(BallStateManager state)
    {
        if (state.currentBall.ballDidHit)
        {
            state.currentBall.ballDidHit = false;
            state.currentBall.canProcessCollisions = false;
            state.SwitchState(state.ballCalcImpactState);
        }
        if (state.currentBall.ballNotLaunchedQuicklyEnough)
        {
            state.currentBall.ballDidScore = false;
            state.SwitchState(state.ballCalcImpactState);
        }
    }
}

