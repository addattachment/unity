﻿public class CaregiverScoringState : CaregiverStateMachine
{
    private bool isListening;
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverScoringState";
        state.scoreCaregiver.GetComponent<ScoreCaregiver>().EnableScoring();
        isListening = false;
    }

    public override void ExitState(CaregiverStateManager state)
    {
        //go to the next trial
        state.scoreCaregiver.GetComponent<ScoreCaregiver>().SendScore(state.gameManager.currentTrial);
        state.gameManager.restart = true;
    }


    public override void UpdateState(CaregiverStateManager state)
    {
        if (state.scoreCaregiver.GetComponent<ScoreCaregiver>().scoringStarted & !isListening)
        {
            state.feedbackPole.RaiseFeedbackPole();
            isListening = true;
        }
        if (state.feedbackPole.isTouched)
        {
            state.scoreCaregiver.GetComponent<ScoreCaregiver>().DisableScoring();
        }
        if (state.feedbackPole.isTouched & state.scoreCaregiver.GetComponent<ScoreCaregiver>().isLow)
        {
            isListening = false;
            state.scoreCaregiver.GetComponent<ScoreCaregiver>().scoringStarted = false;
            state.feedbackPole.isTouched = false;
            state.SwitchState(state.caregiverIdleState);
        }

    }
}

