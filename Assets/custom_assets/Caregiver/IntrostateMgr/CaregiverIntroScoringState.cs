public class CaregiverIntroScoringState : CaregiverIntroStateMachine
{
    public override void EnterState(CaregiverIntroStateManager state)
    {
        state.caregiverPhase = "CaregiverIntroScoringState";
        state.scoreCaregiver.EnableScoring();
    }

    public override void ExitState(CaregiverIntroStateManager state)
    {
    }


    public override void UpdateState(CaregiverIntroStateManager state)
    {
        if (state.scoreCaregiver.scoringStarted)
        {
            state.scoreCaregiver.scoringStarted = false;
            state.feedbackButton.RaiseFeedbackPole();
        }
        if (state.feedbackButton.isTouched)
        {
            state.SwitchState(state.caregiverIntroEndState);
        }

    }
}

