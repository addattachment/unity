public class CaregiverIdleState : CaregiverStateMachine
{
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverIdleState";
    }

    public override void ExitState(CaregiverStateManager state)
    {
    }


    public override void UpdateState(CaregiverStateManager state)
    {
        if (state.gameManager.mustGiveFeedback)
        {
            state.gameManager.mustGiveFeedback = false;
            state.caregiverFeedbackScreen.GetComponent<CaregiverFeedback>().LoadAudioClip(state.gameManager.currentTrial);
            state.SwitchState(state.caregiverFeedbackState);
        }
        else
        {
            if (state.players.activeParticipant == state.player && state.gameManager.trialIsRunning)
            {
                if (!state.caregiverGaze.follow && state.player.instBall != null)
                {
                    state.caregiverGaze.SetGaze(state.player.instBall);
                }
            }
            else
            {
                if (state.caregiverGaze.follow)
                {

                    state.caregiverGaze.ClearGaze();
                }
            }
        }
        if (state.gameManager.toFinalScoring)
        {
            state.gameManager.toFinalScoring = false;
            state.SwitchState(state.caregiverEndScoringState);
        }
    }
}

