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
        public override void EnterState(TrialStateManager state)
        {
            state.trialPhase = "preTrial";
            state.players.ResetPlayers();
            state.targets.HoldTargets(); // we don't want the targets to move yet
            state.ballStates.SwitchState(state.ballStates.ballInitState);
            state.trophyStates.trophyMayAppear = true;
        }

        public override void OnCollisionEnter(TrialStateManager state)
        {
            Debug.Log("Collision Enter");
        }

        public override void UpdateState(TrialStateManager state)
        {
            if (state.startTrial)
            {
                state.startTrial = false;
                state.SwitchState(state.trialState);
            }
        }

        public override void ExitState(TrialStateManager state)
        {
            //make sure other variables are also false
            state.endTrial = false;
            state.ballIsShot = false;
            state.restart = false;
            state.targets.SetTranslateSpeed();

        }
    }
}