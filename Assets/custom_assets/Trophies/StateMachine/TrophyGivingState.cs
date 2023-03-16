public class TrophyGivingState : TrophyStateMachine
{
    public override void EnterState(TrophyStateManager state)
    {
        state.trophyState = "TrophyGivingState";
        //get winner of trial
        Player winner = state.players.GetWinner();
        if (winner != null)
        {
            state.winnerUI.ShowWinnerCanvas(winner.playerName);

            // lights
            state.trophyList.SetFocus(true, winner.trophySpawnLocation.transform);
            //move trophy
            state.trophyList.MoveTrophyToWinner(winner);
        }
        else
        {
            state.winnerUI.ShowWinnerCanvas("gelijkspel");
            // lights
            state.trophyList.SetFocus(true, state.trophyList.transform);
            //move trophy
            state.trophyList.DestroyCurrentTrophy();
        }
        //state.players.ResetPlayers();
    }

    public override void ExitState(TrophyStateManager state)
    {
        state.trophyList.trophyIsGiven = false;
        state.winnerUI.HideWinnerCanvas();
    }

    public override void UpdateState(TrophyStateManager state)
    {
        if (state.trophyList.currentTrophy == null & state.trophyList.trophyIsGiven & state.gameManager.LightIsSet)
        {
            state.gameManager.LightIsSet = false;
            state.SwitchState(state.trophyCooldownState);
        }
    }
}