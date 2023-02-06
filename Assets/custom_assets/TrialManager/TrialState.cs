// #define COMPETITION
using UnityEngine;

namespace TrialNS
{
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
            state.trialIsRunning = true;
        }

        public override void OnCollisionEnter(TrialStateManager state)
        {
            Debug.Log("Collision Enter");
        }

        public override void UpdateState(TrialStateManager state)
        {
            //if (state.ballIsShot)
            //{
            //    state.ballIsShot = false;
            //    state.players.SwitchPlayer();
            //    state.players.PrepNewShootingTurn(state.trialList, state.targets);
            //}
            if (state.endTrial)
            {
                state.SwitchState(state.postTrialState);
            }
        }

        public override void ExitState(TrialStateManager state)
        {
            Debug.Log("Exiting Trial State");
            state.endTrial = false;
            state.trialIsRunning = false;
            //make sure other variables are also false
            state.startTrial = false;

            state.restart = false;
            state.ballIsShot = false;
        }

    }
}