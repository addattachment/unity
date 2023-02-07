using UnityEngine;

public class TrophyWaitingState : TrophyStateMachine
{
    public override void EnterState(TrophyStateManager state)
    {
        state.trophyState = "TrophyWaitingState";
        state.trophyList.SetFocus(false);
        state.trialState.startTrial = true;
    }

    public override void ExitState(TrophyStateManager state)
    {

    }

    public override void UpdateState(TrophyStateManager state)
    {
        if (state.trialState.endTrial)
        {
            state.SwitchState(state.trophyGivingState);
        }
    }
}