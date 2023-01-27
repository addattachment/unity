using UnityEngine;
namespace TrialNS
{
    /// <summary>
    /// we see the caregiver + respons
    /// we score the caregiver
    /// 
    /// we update the trialnumber
    /// we switch to pretrial if more trials to come, otherwise exitscene
    /// 
    /// </summary>
    public class IntroState : StateMachine
    {
        public override void EnterState(StateManager state)
        {
            Debug.Log("Entering IntroState");
            state.trialPhase = "IntroTrialState";
        }

        public override void OnCollisionEnter(StateManager state)
        {
            Debug.Log("Collision Enter");
        }

        public override void UpdateState(StateManager state)
        {
            if (state.gameManager.trialListGenerated == true)
            {
                state.SwitchState(state.preTrialState);
                state.gameManager.SendSyncTime();
            }
        }

        public override void ExitState(StateManager state)
        {
            Debug.Log("Exiting IntroTrialState");

        }
    }
}