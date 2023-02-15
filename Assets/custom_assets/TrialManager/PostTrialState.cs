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
            if (state.trophyStates.trophyIsGiven)
            {
                state.trophyStates.trophyIsGiven = false;
                // trophy is given, so give feedback
                state.caregiverStates.mustGiveFeedback = true;
            }

            if (state.restart)
            {
                state.restart = false;
                state.SwitchState(state.preTrialState);
            }
        }

        public override void ExitState(TrialStateManager state)
        {
            //make sure other variables are also false
            state.endTrial = false;
            state.startTrial = false;
            state.ballIsShot = false;
            // we move the targets to a new starting pos
            state.targets.SetStartingPos();
            //prepare for next trial
            state.trialList.NextTrial();


            // look for the public gameobject triallist and update the trialstate
            try { GameObject.Find("trialListPrefab").GetComponent<TrialList>().NextTrial(); }
            catch { Debug.Log("Could not find trialListPrefab"); }
        }
    }
}