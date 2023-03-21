using UnityEngine;

public class TrophyCooldownState : TrophyStateMachine
{
    public override void EnterState(TrophyStateManager state)
    {
        state.trophyState = "TrophyCooldownState";
        state.trophyList.SetFocus(false, state.trophyList.trophyStandLocation.transform);
        state.gameManager.trophyIsGiven = true;
    }

    public override void ExitState(TrophyStateManager state)
    {
    }

    public override void UpdateState(TrophyStateManager state)
    {
        if (state.gameManager.trophyMayAppear & state.gameManager.LightIsSet)
        {
            state.gameManager.LightIsSet = false;
            state.gameManager.trophyMayAppear = false;
            if (!state.gameManager.trialListFinished)
            {
                state.SwitchState(state.trophyAppearState);
            }
            else
            {
                Debug.Log("it's over");
                state.SwitchState(state.trophyInitState);
            }
        }
    }
}

