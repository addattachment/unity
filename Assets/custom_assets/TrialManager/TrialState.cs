// #define COMPETITION
using UnityEngine;


/// <summary>
/// In the trialstate a certain amount of balls is given to each player
/// we go to the post-trial state when both players have zero balls left
/// 
/// </summary>
public class TrialState : StateMachine
{
    /// <summary>
    /// 
    /// </summary>
    /// <param name="state"></param>
    public override void EnterState(TrialStateManager state)
    {

        Debug.Log("Entering Trial State");
        state.trialPhase = "TrialState";
        //state.players.PrepNewShootingTurn(state.trialList, state.targets);
        state.gameManager.trialIsRunning = true;
    }

    public override void UpdateState(TrialStateManager state)
    {
        //if (state.ballIsShot)
        //{
        //    state.ballIsShot = false;
        //    state.players.SwitchPlayer();
        //    state.players.PrepNewShootingTurn(state.trialList, state.targets);
        //}
        if (state.gameManager.toPostTrial)
        {
            state.players.WSUpdateTrialScore();
            state.SwitchState(state.postTrialState);
        }
    }

    public override void ExitState(TrialStateManager state)
    {
        Debug.Log("Exiting Trial State");
        //state.gameManager.endTrial = false;
        state.gameManager.trialIsRunning = false;
        //make sure other variables are also false
        //state.startTrial = false;

        state.gameManager.restart = false;
        state.gameManager.ballIsShot = false;
    }

}
