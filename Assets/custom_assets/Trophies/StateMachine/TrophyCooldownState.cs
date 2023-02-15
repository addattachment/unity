using UnityEngine;

public class TrophyCooldownState : TrophyStateMachine
{
    public override void EnterState(TrophyStateManager state)
    {
        state.trophyState = "TrophyCooldownState";
        state.trophyList.SetFocus(false, state.trophyList.trophyStandLocation.transform);
        state.trophyIsGiven = true;
    }

    public override void ExitState(TrophyStateManager state)
    {
    }

    public override void UpdateState(TrophyStateManager state)
    {
        if (state.trophyMayAppear)
        {
            if (state.trialList.currentTrial < state.trialList.GetTrialLength())
            {
                state.SwitchState(state.trophyWaitingState);
            }
            else
            {
                Debug.Log("it's over");
            }
        }
    }
}

