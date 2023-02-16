using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TrialNS;

public class CaregiverFeedbackConfirmState : CaregiverStateMachine
{
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverFeedbackConfirmState";
        state.triggerAnimation.TriggerAnim("idleCameraTrig"); //temp
        state.feedbackPole.RaiseFeedbackPole();
    }

    public override void ExitState(CaregiverStateManager state)
    {
        state.caregiverFeedback.SetSlingshotForFeedback(false);
        state.lightingMgr.envLight.EnableSunlight(true);
        state.lightingMgr.caregiverLight.EnableLight(false);
        state.caregiverFeedbackScreen.SetActive(false);
        state.scoreCaregiver.SetActive(true);
    }


    public override void UpdateState(CaregiverStateManager state)
    {
        if (state.feedbackPole.isTouched)
        {
            state.feedbackPole.isTouched = false;
            state.SwitchState(state.caregiverScoringState);
        }
    }
}

