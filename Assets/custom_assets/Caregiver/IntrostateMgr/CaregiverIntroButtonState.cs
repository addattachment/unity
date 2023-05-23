using TMPro;

public class CaregiverIntroButtonState : CaregiverIntroStateMachine
{
    public override void EnterState(CaregiverIntroStateManager state)
    {
        state.caregiverPhase = "CaregiverIntroButtonState";
        state.feedbackButton.RaiseFeedbackPole();
        state.InstructionBoardAppear.Raise();
        state.InstructionBoardText.text = "Doorheen het spel zullen soms knoppen verschijnen, deze mag je aanraken met je hand om verder te gaan";
    }

    public override void ExitState(CaregiverIntroStateManager state)
    {
    }


    public override void UpdateState(CaregiverIntroStateManager state)
    {
        if (state.feedbackButton.isTouched)
        {
            state.feedbackButton.isTouched = false;
            state.feedbackButton.LowerFeedbackPole();
            state.InstructionBoardAppear.Lower();
            state.SwitchState(state.caregiverIntroScoringState);
        }
    }
}

