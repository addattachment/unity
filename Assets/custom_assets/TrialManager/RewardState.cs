using UnityEngine;
namespace TrialNS
{
    /// <summary>
    /// The reward which was at stake gets given to the winning participant
    /// 
    /// </summary>
    public class RewardState : StateMachine
    {
        public override void EnterState(TrialStateManager state)
        {
            Debug.Log("Entering RewardState");
            state.trialPhase = "RewardState";
           
        }

        public override void OnCollisionEnter(TrialStateManager state)
        {
            Debug.Log("Collision Enter");
        }

        public override void UpdateState(TrialStateManager state)
        {
        }

        public override void ExitState(TrialStateManager state)
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