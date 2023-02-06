using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TrialNS;

public class CaregiverScoringState : CaregiverStateMachine
{
    public override void EnterState(CaregiverStateManager state)
    {
        state.caregiverPhase = "CaregiverScoringState";
    }

    public override void ExitState(CaregiverStateManager state)
    {
        //go to the next trial
        state.trialState.restart = true;
    }

    public override void OnCollisionEnter(CaregiverStateManager state)
    {
        throw new NotImplementedException();
    }

    public override void UpdateState(CaregiverStateManager state)
    {
        if (state.didGiveScore)
        {
            state.didGiveScore = false;
            state.SwitchState(state.caregiverIdleState);
        }
    }
}

