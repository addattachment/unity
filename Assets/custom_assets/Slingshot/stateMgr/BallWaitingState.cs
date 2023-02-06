using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TrialNS;

public class BallWaitingState : BallStateMachine
{
    public override void EnterState(BallStateManager state)
    {
        state.ballPhase = "ballWaitingState";
    }

    public override void ExitState(BallStateManager state)
    {
    }

    public override void OnCollisionEnter(BallStateManager state)
    {
        throw new NotImplementedException();
    }

    public override void UpdateState(BallStateManager state)
    {
        if (state.trialState.trialIsRunning)
        {
            state.SwitchState(state.ballPrepState);
        }
    }
}

