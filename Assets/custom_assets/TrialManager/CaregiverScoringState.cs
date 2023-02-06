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
    public class CaregiverScoringState : StateMachine
    {
        public override void EnterState(TrialStateManager state)
        {
            Debug.Log("Entering CaregiverScoringState");
            state.trialPhase = "CaregiverScoringState";
       
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
            Debug.Log("Exiting CaregiverScoringState");
            state.restart = false;
            //make sure other variables are also false
            state.endTrial = false;
            state.startTrial = false;
            state.ballIsShot = false;

            // look for the public gameobject triallist and update the trialstate
            try { GameObject.Find("trialListPrefab").GetComponent<TrialList>().NextTrial(); }
            catch { Debug.Log("Could not find trialListPrefab"); }
        }
    }
}