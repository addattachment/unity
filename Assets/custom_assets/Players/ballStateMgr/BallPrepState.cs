using System;
using UnityEngine;

public class BallPrepState : BallStateMachine
{
    public override void EnterState(BallStateManager state)
    {
        state.ballPhase = "ballPrepState";

        Player activeParticipant = state.players.GetActivePlayer();

        Slingshot slingshot = activeParticipant.slingshot;

        state.players.SetPlayerScoringChance(slingshot, state.isGoodTrial);
        //Debug.Log("enter ball prep state " + Time.time);
        if (activeParticipant.currentBallInTrial < state.gameManager.ballsPerGame)
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
            state.gameManager.toPostTrial = true;
        }
        slingshot.slingshotLinesEnum = SlingshotLinesEnum.active;
    }

    public override void ExitState(BallStateManager state)
    {
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
        if (state.currentBall.ballNotLaunchedQuicklyEnough)
        {
            state.currentBall.ballDidScore = false;
            state.SwitchState(state.ballCalcImpactState);
        }
    }
}

