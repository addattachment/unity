﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TrialNS;

public class BallLaunchState : BallStateMachine
{
    public override void EnterState(BallStateManager state)
    {
        state.ballPhase = "ballLaunchState";

        state.currentBall.canProcessCollisions = true;
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
        if (state.currentBall.ballDidHit)
        {
            state.currentBall.ballDidHit = false;
            state.currentBall.canProcessCollisions = false;
            state.SwitchState(state.ballCalcImpactState);
        }
    }
}
