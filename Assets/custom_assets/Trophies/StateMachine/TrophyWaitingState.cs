public class TrophyWaitingState : TrophyStateMachine
{
    public override void EnterState(TrophyStateManager state)
    {
        state.trophyState = "TrophyWaitingState";
        state.trophyList.SetFocus(false, state.trophyList.trophyStandLocation.transform);
        state.gameManager.startTrial = true;
    }

    public override void ExitState(TrophyStateManager state)
    {

    }

    public override void UpdateState(TrophyStateManager state)
    {
        if (state.gameManager.endTrial)
        {
            state.SwitchState(state.trophyGivingState);
        }
    }
}