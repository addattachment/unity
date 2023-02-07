using UnityEngine;

public class TrophyGivingState : TrophyStateMachine
{
    public override void EnterState(TrophyStateManager state)
    {
        state.trophyState = "TrophyGivingState";
        Player winner = state.players.GetWinner();
        state.trophyList.MoveTrophyToWinner(winner);
    }

    public override void ExitState(TrophyStateManager state)
    {

    }

    public override void UpdateState(TrophyStateManager state)
    {
        if (state.trophyList.currentTrophy == null)
        {
            state.SwitchState(state.trophyCooldownState);
        }
    }
}