using UnityEngine;
namespace TrialNS
{
    /// <summary>
    /// In the pretrialstate we set the amount of balls for each player
    /// the speed of the rings is adapted
    ///     
    /// We clear the scoreDots
    /// 
    /// </summary>
    public class PreTrialState : StateMachine
    {
        public override void EnterState(StateManager state)
        {
            Debug.Log("Entering PreTrialState");
            state.trialPhase = "preTrial";
            state.players.ResetPlayers();
            state.targets.SetTranslateValues();
            state.caregiverFeedbackScreen.GetComponent<CaregiverFeedback>().LoadAudioClip(0);
        }

        public override void OnCollisionEnter(StateManager state)
        {
            Debug.Log("Collision Enter");
        }

        public override void UpdateState(StateManager state)
        {
            //if (state.startTrial)
            //{
            state.SwitchState(state.trialState);
            //}
        }

        public override void ExitState(StateManager state)
        {
            Debug.Log("Exiting PreTrialState");
            state.startTrial = false;
            //make sure other variables are also false
            state.endTrial = false;
            state.ballIsShot = false;
            state.restart = false;
        }
    }
}