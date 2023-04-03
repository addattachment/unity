public class CaregiverIntroButtonState : CaregiverIntroStateMachine
{
    public override void EnterState(CaregiverIntroStateManager state)
    {
        state.caregiverPhase = "CaregiverIntroButtonState";
        state.feedbackButton.RaiseFeedbackPole();
    }

    public override void ExitState(CaregiverIntroStateManager state)
    {
    }


    public override void UpdateState(CaregiverIntroStateManager state)
    {
        if (state.feedbackButton.isTouched)
        {
            state.feedbackButton.isTouched = false;
            state.SwitchState(state.caregiverIntroScoringState);
        }
    }
}

