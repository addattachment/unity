using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TrialNS;

public class BallCalcImpactState : BallStateMachine
{
    public override void EnterState(BallStateManager state)
    {
        state.ballPhase = "ballCalcImpactState";

        PlayerScore activePlayerScore = state.players.GetActivePlayer().playerScore;
        bool score = state.currentBall.ballDidScore;
        activePlayerScore.AddToScore(score);
        
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
        // we update the players current ball for a next round
        Player currentPlayer = state.players.GetActivePlayer().GetComponent<Player>();
        currentPlayer.currentBallInTrial++;
        if (currentPlayer.currentBallInTrial >= state.amountOfBallsInTrial)
        {
            // As soon as one of the players is out of balls, we can conclude that both players are out of balls
            state.trialState.endTrial = true;
            state.SwitchState(state.ballInitState);
        }
        else
        {
            state.players.SwitchPlayer();
            state.SwitchState(state.ballWaiting);
        }
    }
}

