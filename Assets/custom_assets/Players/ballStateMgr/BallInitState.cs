using System;

public class BallInitState : BallStateMachine
{
    public override void EnterState(BallStateManager state)
    {
        state.ballPhase = "ballInitState";

        //state.players.ResetPlayers();
        //state.amountOfBallsInTrial = state.gameManager.ballsPerGame;
    }

    public override void ExitState(BallStateManager state)
    {
    }


    public override void UpdateState(BallStateManager state)
    {
        state.SwitchState(state.ballWaiting);
    }
}

