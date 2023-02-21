using UnityEngine;

public class TrophyGivingState : TrophyStateMachine
{
    public override void EnterState(TrophyStateManager state)
    {
        state.trophyState = "TrophyGivingState";
        //get winner of trial
        Player winner = state.players.GetWinner();
        // lights
        state.trophyList.SetFocus(true, winner.trophySpawnLocation.transform);

        //move trophy
        state.trophyList.MoveTrophyToWinner(winner);
        //state.players.ResetPlayers();
    }

    public override void ExitState(TrophyStateManager state)
    {
        state.trophyList.trophyIsGiven = false;
    }

    public override void UpdateState(TrophyStateManager state)
    {
        if (state.trophyList.currentTrophy == null & state.trophyList.trophyIsGiven)
        {
            state.SwitchState(state.trophyCooldownState);
        }
    }
}