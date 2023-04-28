using System.Collections;
using UnityEngine;

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
    private MonoBehaviour _mb; // The surrogate MonoBehaviour that we'll use to manage this coroutine.

    public override void EnterState(TrialStateManager state)
    {
        state.trialPhase = "IntroTrialState";
        _mb = GameObject.FindObjectOfType<MonoBehaviour>();
        _mb.StartCoroutine(IntroSettings(state));
        state.gameManager.GetComponent<SetGameValues>().SetPlayerVals(state.wsClient.playerVals);
    }

    private IEnumerator IntroSettings(TrialStateManager state)
    {
        yield return new WaitForSeconds(state.IntroPauseTimeForStart);
        state.countDown.StartCountDown();
        state.targets.SetAllStartingPos();
        state.targets.HoldAllTargets(); // we don't want the targets to move yet
    }

    public override void UpdateState(TrialStateManager state)
    {
        if (state.gameManager.trialListGenerated && state.countDown.countDownFinished)
        {
            state.SwitchState(state.preTrialState);
            //state.gameManager.SendSyncTime();
        }
    }

    public override void ExitState(TrialStateManager state)
    {

    }
}
