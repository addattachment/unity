using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TrialNS;

public class CaregiverIdleState : CaregiverStateMachine
{
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverIdleState";
        state.triggerAnimation.TriggerAnim("IdleTrigger");

    }

    public override void ExitState(CaregiverStateManager state)
    {
        state.caregiverFeedbackScreen.GetComponent<CaregiverFeedback>().LoadAudioClip(state.trialList.currentTrial);
    }

    public override void OnCollisionEnter(CaregiverStateManager state)
    {
        throw new NotImplementedException();
    }

    public override void UpdateState(CaregiverStateManager state)
    {
        if (state.mustGiveFeedback)
        {
            state.mustGiveFeedback = false;
            state.SwitchState(state.caregiverFeedbackState);
        }
    }
}

