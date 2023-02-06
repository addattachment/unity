using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TrialNS;
using UnityEngine;

public class CaregiverFeedbackState : CaregiverStateMachine
{
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverFeedbackState";
        state.triggerAnimation.TriggerAnim("toHoofdSchoudersTrig"); //temp
        state.caregiverFeedbackScreen.SetActive(true);
        state.caregiverFeedback.SetEnvironmentForFeedback(true);
        state.caregiverFeedback.GiveFeedback();

    }

    public override void ExitState(CaregiverStateManager state)
    {
    }

    public override void OnCollisionEnter(CaregiverStateManager state)
    {
        throw new NotImplementedException();
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

