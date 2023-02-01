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
        public override void EnterState(StateManager state)
        {
            Debug.Log("Entering PostTrialState");
            state.trialPhase = "PostTrialState";
            state.trialList.NextTrial();
            state.caregiverFeedbackScreen.SetActive(true);

            state.caregiverFeedbackScreen.GetComponent<CaregiverFeedback>().GiveFeedback();
        }

        public override void OnCollisionEnter(StateManager state)
        {
            Debug.Log("Collision Enter");
        }

        public override void UpdateState(StateManager state)
        {
            if (state.restart) { state.SwitchState(state.preTrialState); }
        }

        public override void ExitState(StateManager state)
        {
            Debug.Log("Exiting PostTrialState");
            state.restart = false;
            //make sure other variables are also false
            state.endTrial = false;
            state.startTrial = false;
            state.ballIsShot = false;

            state.caregiverFeedbackScreen.SetActive(false);

            // look for the public gameobject triallist and update the trialstate
            try { GameObject.Find("trialListPrefab").GetComponent<TrialList>().NextTrial(); }
            catch { Debug.Log("Could not find trialListPrefab"); }
        }
    }
}