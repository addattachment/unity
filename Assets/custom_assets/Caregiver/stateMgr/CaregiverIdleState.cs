using TrialNS;

public class CaregiverIdleState : CaregiverStateMachine
{
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverIdleState";
        state.triggerAnimation.TriggerAnim("IdleTrigger");

    }

    public override void ExitState(CaregiverStateManager state)
    {
        state.caregiverFeedbackScreen.GetComponent<CaregiverFeedback>().LoadAudioClip(state.trialList.currentTrial);
    }


    public override void UpdateState(CaregiverStateManager state)
    {
        if (state.gameManager.mustGiveFeedback)
        {
            state.gameManager.mustGiveFeedback = false;
            state.SwitchState(state.caregiverFeedbackState);
        }
    }
}

