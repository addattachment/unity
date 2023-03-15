﻿public class CaregiverIdleState : CaregiverStateMachine
{
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverIdleState";
    }

    public override void ExitState(CaregiverStateManager state)
    {
        state.caregiverFeedbackScreen.GetComponent<CaregiverFeedback>().LoadAudioClip(state.gameManager.currentTrial);
    }


    public override void UpdateState(CaregiverStateManager state)
    {
        if (state.gameManager.mustGiveFeedback)
        {
            state.gameManager.mustGiveFeedback = false;
            state.SwitchState(state.caregiverFeedbackState);
        }
        if (state.players.activeParticipant == state.player && state.gameManager.trialIsRunning)
        {
            state.caregiverGaze.SetGaze(state.player.instBall);
        }
        else
        {
            state.caregiverGaze.ClearGaze();
        }
    }
}

