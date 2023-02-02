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
        public override void EnterState(StateManager state)
        {
            Debug.Log("Entering CaregiverFeedbackState");
            state.trialPhase = "CaregiverFeedbackState";
           
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
            Debug.Log("Exiting CaregiverFeedbackState");
            state.restart = false;
            //make sure other variables are also false
            state.endTrial = false;
            state.startTrial = false;
            state.ballIsShot = false;

        }
    }
}