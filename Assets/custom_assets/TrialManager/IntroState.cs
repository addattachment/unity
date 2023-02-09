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
        public override void EnterState(TrialStateManager state)
        {
            state.trialPhase = "IntroTrialState";
            state.countDown.StartCountDown();
            state.targets.SetStartingPos();
            state.targets.HoldTargets(); // we don't want the targets to move yet
        }

        public override void OnCollisionEnter(TrialStateManager state)
        {
            Debug.Log("Collision Enter");
        }

        public override void UpdateState(TrialStateManager state)
        {
            if (state.gameManager.trialListGenerated && state.countDown.countDownFinished)
            {
                state.SwitchState(state.preTrialState);
                state.gameManager.SendSyncTime();
            }
        }

        public override void ExitState(TrialStateManager state)
        {

        }
    }
}