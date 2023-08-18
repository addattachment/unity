using UnityEngine;

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
        state.targets.HoldAllTargets();
        state.gameManager.MayGiveTrophy = true;
    }


    public override void UpdateState(TrialStateManager state)
    {
        // trophy is given comes from trophy giving state ==> trophylist ==> move trophy to winner
        if (state.gameManager.trophyIsGiven)
        {
            state.gameManager.trophyIsGiven = false;
            // trophy is given, so give feedback
            state.gameManager.mustGiveFeedback = true;
        }
        // restart is set in caregiver scoring exit of state
        if (state.gameManager.done)
        {
            //Set index for next trial, this also checks if we've come to the end
            state.trialList.NextTrial();
            if (!state.gameManager.trialListFinished)
            {
                state.gameManager.done = false;
                state.SwitchState(state.preTrialState);
            }
            else
            {
                state.gameManager.done = false;
                state.SwitchState(state.endState);
            }
        }
        if (state.gameManager.isTutorial & state.gameManager.mustGiveFeedback)
        {
            state.gameManager.mustGiveFeedback = false;
            state.trialList.NextTrial();
            state.SwitchState(state.preTrialState);
        }
    }

    public override void ExitState(TrialStateManager state)
    {
        //make sure other variables are also false
        state.gameManager.toPostTrial = false;
        state.gameManager.startTrial = false;
        state.gameManager.ballIsShot = false;
        // we move the targets to a new starting pos
        state.targets.SetAllStartingPos();
        
    }
}
