using System.Collections;

public class CaregiverEndScoringState : CaregiverStateMachine
{
    private bool isListening;
    private bool isShaking;
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverEndScoringState";
        state.scoreCaregiver.GetComponent<ScoreCaregiver>().EnableScoring(true);
        state.finalScoringBoard.GetComponent<Appear>().Raise();
        isShaking = false;
        isListening = false;
        state.gameManager.enableScoring = true;
    }

    public override void ExitState(CaregiverStateManager state)
    {
        //go to the next trial
        state.scoreCaregiver.GetComponent<ScoreCaregiver>().SendScore(-1);
        state.gameManager.done = true;
        state.gameManager.enableScoring = false;
    }


    public override void UpdateState(CaregiverStateManager state)
    {
        if (state.scoreCaregiver.GetComponent<ScoreCaregiver>().scoringStarted & !isListening)
        {
            // eenmalig maar feedback pole omhoog brengen
            state.feedbackPole.RaiseFeedbackPole();
            isListening = true;
        }
        if (state.feedbackPole.isTouched)
        {
            // eens feedback geraakt stoppen met scorens
            state.scoreCaregiver.GetComponent<ScoreCaregiver>().DisableScoring();
            state.finalScoringBoard.GetComponent<Appear>().Lower();
        }
        if (state.feedbackPole.isTouched & state.scoreCaregiver.GetComponent<ScoreCaregiver>().isLow)
        {
            isListening = false;
            state.scoreCaregiver.GetComponent<ScoreCaregiver>().scoringStarted = false;
            state.feedbackPole.isTouched = false;
            state.SwitchState(state.caregiverIdleState);
        }
        if (!state.finalScoringBoard.GetComponent<Appear>().isLow && !isShaking)
        {
            isShaking = true;
            Hashtable ht = iTween.Hash("y", 0.1f, "time", 1.0f);
            iTween.ShakePosition(state.finalScoringBoard, ht);
        }

    }
}

