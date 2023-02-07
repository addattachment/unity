using UnityEngine;

public class TrophyInitState : TrophyStateMachine
{
    public override void EnterState(TrophyStateManager state)
    {
        state.trophyState = "TrophyInitState";
    }

    public override void ExitState(TrophyStateManager state)
    {
    }

    public override void UpdateState(TrophyStateManager state)
    {
        if (state.trophyMayAppear) {
            state.trophyMayAppear = false;
            state.SwitchState(state.trophyAppearState); 
        }
    }
}