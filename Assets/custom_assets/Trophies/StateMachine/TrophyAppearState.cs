using UnityEngine;

public class TrophyAppearState : TrophyStateMachine
{
    public override void EnterState(TrophyStateManager state)
    {
        state.trophyState = "TrophyAppearState";
        state.trophyList.SetFocus(true, state.trophyList.trophyStandLocation.transform);
        state.trophyList.MakeTrophyAppear(state.trialList.currentTrial);
        state.gameManager.trophyIsGiven = false;
    }

    public override void ExitState(TrophyStateManager state)
    {
    }

    public override void UpdateState(TrophyStateManager state)
    {
        if (state.trophyList.trophyDidAppear && !state.trophyList.trophyAppear.isPlaying)
        {
            state.trophyList.trophyDidAppear = false;
            state.SwitchState(state.trophyWaitingState);
        }
    }
}