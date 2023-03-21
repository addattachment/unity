using UnityEngine;

/// <summary>
/// we see the caregiver + respons
/// we score the caregiver
/// 
/// we update the trialnumber
/// we switch to pretrial if more trials to come, otherwise exitscene
/// 
/// </summary>
public class EndTrialState : StateMachine
{
    public override void EnterState(TrialStateManager state)
    {
        state.trialPhase = "EndTrialState";
        state.targets.HoldAllTargets();
        state.wsClient.ws.CloseAsync();
        state.LSLOutlet.SendMarker(LSL.Marker.end_game);
        if (state.players.player.trial_block == 1) { 
            // we set the name of the next trial round so the child already gets to know his/her next opponent
            state.gameFinished.SetNextNPC(state.gameManager.gameObject.GetComponent<SetGameValues>().NextTrialBlockNPCname); 
        }
        state.gameFinished.ShowGameFinishedCanvas();
    }


    public override void UpdateState(TrialStateManager state)
    {

    }

    public override void ExitState(TrialStateManager state)
    {

    }
}
