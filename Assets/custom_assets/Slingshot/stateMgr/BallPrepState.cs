using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TrialNS;
using UnityEngine;

public class BallPrepState : BallStateMachine
{
    public override void EnterState(BallStateManager state)
    {
        state.ballPhase = "ballPrepState";

        Player activeParticipant = state.players.GetActivePlayer();

        Slingshot slingshot = activeParticipant.slingshot;

        state.players.SetPlayerScoringChance(slingshot, state.trialList.GetCurrentTrial());
        Debug.Log("enter ball prep state"+Time.time);
        if (activeParticipant.currentBallInTrial < state.amountOfBallsInTrial)
        {
            //// Make sure we can detect collisions by the new bullet (only once!)
            //state.targets.readyForHit = true;
            // Set the new targets
            state.targets.SetNewHitTarget();
            // Instantiate the new bullet and it's colors
            state.currentBall = slingshot.PrepNewBall(state.targets);
        }
        else
        {
            // As soon as one of the players is out of balls, we can conclude that both players are out of balls
            state.gameManager.endTrial = true;
        }
        slingshot.slingshotLinesEnum = SlingshotLinesEnum.active;
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
        // For the NPC we need to fake the shot
        if ((state.players.GetActivePlayer().isRealPlayer == false) 
            && (state.players.GetActivePlayer().isActivePlayer == true))
        {
            state.players.GetActivePlayer().FakeShot();
        }
        if (state.currentBall.ballIsGrabbed)
        {
            state.currentBall.ballIsGrabbed = false;
            state.SwitchState(state.ballLaunchState);
        }
    }
}

