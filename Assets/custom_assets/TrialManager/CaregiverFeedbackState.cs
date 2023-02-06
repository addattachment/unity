using UnityEngine;
namespace TrialNS
{
    /// <summary>
    /// We switch towards the caregiver, the lights gets focussed on the viewport
    /// We need to focus on the viewport in order to start the feedback process
    /// 
    /// 
    /// </summary>
    public class CaregiverFeedbackState : StateMachine
    {
        public override void EnterState(TrialStateManager state)
        {
            Debug.Log("Entering CaregiverFeedbackState");
            state.trialPhase = "CaregiverFeedbackState";
           
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
            Debug.Log("Exiting CaregiverFeedbackState");
            state.restart = false;
            //make sure other variables are also false
            state.endTrial = false;
            state.startTrial = false;
            state.ballIsShot = false;

        }
    }
}