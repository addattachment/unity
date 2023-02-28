﻿public class CaregiverFeedbackState : CaregiverStateMachine
{
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverFeedbackState";
        state.caregiverFeedbackScreen.SetActive(true);
        state.caregiverFeedback.SetSlingshotForFeedback(true);
        state.lightingMgr.envLight.EnableSunlight(false);
        state.lightingMgr.caregiverLight.EnableLight(true);
        state.caregiverFeedback.GiveFeedback();
    }

    public override void ExitState(CaregiverStateManager state)
    {
    }


    public override void UpdateState(CaregiverStateManager state)
    {
        //We want to check when the speech is done, only then do we want to raise the FeedbackButton
        if (!state.caregiverFeedback.audioSource.isPlaying)
        {
            state.SwitchState(state.caregiverFeedbackConfirmState);
        }
    }


}

