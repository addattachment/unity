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
    private float timeToEndState = 2.5f;
    private float passedTime = 0f;
    public override void EnterState(TrialStateManager state)
    {
        state.trialPhase = "EndTrialState";
        state.targets.HoldAllTargets();
        //send message which trophies are won
        state.wsClient.SendWSMessage(state.players.player.GetWonTrophies()) ;
        state.wsClient.SendWSMessage(state.players.NPC.GetWonTrophies()) ;
        
        state.LSLOutlet.SendMarker(LSL.Marker.end_game);
        state.wsClient.ws.CloseAsync();
        // visual cues of ending
        if (state.players.player.trial_block == 1) { 
            // we set the name of the next trial round so the child already gets to know his/her next opponent
            state.gameFinished.SetNextNPC(state.gameManager.gameObject.GetComponent<SetGameValues>().NextTrialBlockNPCname); 
        }
        state.gameFinished.enabled = true;
        state.gameFinished.ShowGameFinishedCanvas();
    }


    public override void UpdateState(TrialStateManager state)
    {
        //add scoring of caregiver once more, with an explanation after a few seconds

        passedTime += Time.deltaTime;
        if (passedTime >= timeToEndState)
        {
            state.gameManager.toFinalScoring = true;
        }
    }

    public override void ExitState(TrialStateManager state)
    {

    }
}
