using UnityEngine;
namespace TrialNS
{
    /// <summary>
    /// The reward which was at stake gets given to the winning participant
    /// 
    /// </summary>
    public class RewardState : StateMachine
    {
        public override void EnterState(StateManager state)
        {
            Debug.Log("Entering RewardState");
            state.trialPhase = "RewardState";
           
        }

        public override void OnCollisionEnter(StateManager state)
        {
            Debug.Log("Collision Enter");
        }

        public override void UpdateState(StateManager state)
        {
        }

        public override void ExitState(StateManager state)
        {
            Debug.Log("Exiting RewardState");
            state.restart = false;
            //make sure other variables are also false
            state.endTrial = false;
            state.startTrial = false;
            state.ballIsShot = false;

        }
    }
}