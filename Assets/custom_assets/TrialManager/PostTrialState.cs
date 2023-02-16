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
    public class PostTrialState : StateMachine
    {
        public override void EnterState(TrialStateManager state)
        {
            state.trialPhase = "PostTrialState";
            state.targets.HoldTargets();
        }

        public override void OnCollisionEnter(TrialStateManager state)
        {
            Debug.Log("Collision Enter");
        }

        public override void UpdateState(TrialStateManager state)
        {
            if (state.gameManager.trophyIsGiven)
            {
                state.gameManager.trophyIsGiven = false;
                // trophy is given, so give feedback
                state.gameManager.mustGiveFeedback = true;
            }

            if (state.gameManager.restart)
            {
                state.gameManager.restart = false;
                state.SwitchState(state.preTrialState);
            }
            if (state.gameManager.isTutorial)
            {
                state.SwitchState(state.preTrialState);
            }
        }

        public override void ExitState(TrialStateManager state)
        {
            //make sure other variables are also false
            state.gameManager.endTrial = false;
            state.gameManager.startTrial = false;
            state.gameManager.ballIsShot = false;
            // we move the targets to a new starting pos
            state.targets.SetStartingPos();
            //prepare for next trial
            state.trialList.NextTrial();
        }
    }
}