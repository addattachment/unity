public class CaregiverFeedbackState : CaregiverStateMachine
{
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverFeedbackState";
        state.caregiverFeedbackScreen.SetActive(true);
        state.caregiverFeedbackScreen.GetComponent<CaregiverFeedback>().FadeBlackBox(true);
        //state.caregiverFeedback.SetSlingshotForFeedback(true);
        state.lightingMgr.envLight.EnableSunlight(false);
        //state.lightingMgr.caregiverLight.EnableLight(true);
        state.caregiverFeedback.setCaregiverGaze.SetGaze(state.caregiverFeedback.feedbackCamera); 
        //Send start signal for caregiver feedback to python
        state.caregiverFeedbackEvent.Set(state.gameManager.currentTrial, true);
        state.ws.SendWSMessage(state.caregiverFeedbackEvent.SaveToString());
    }

    public override void ExitState(CaregiverStateManager state)
    {
    }


    public override void UpdateState(CaregiverStateManager state)
    {
        if (state.caregiverFeedbackScreen.GetComponent<CaregiverFeedback>().fadedToBlack & !state.caregiverFeedback.feedbackIsStarted)
        {
            state.caregiverFeedback.GiveFeedback();
        }

        //We want to check when the speech is done, only then do we want to raise the FeedbackButton
        if (state.caregiverFeedbackScreen.GetComponent<CaregiverFeedback>().fadedToBlack & !state.caregiverFeedback.audioSource.isPlaying & state.caregiverFeedback.feedbackIsStarted)
        {
            //Send stop signal for caregiver feedback to python
            state.caregiverFeedback.feedbackIsStarted = false;
            state.caregiverFeedbackEvent.Set(state.gameManager.currentTrial, false);
            state.ws.SendWSMessage(state.caregiverFeedbackEvent.SaveToString());
            state.SwitchState(state.caregiverFeedbackConfirmState);
        }
    }


}

