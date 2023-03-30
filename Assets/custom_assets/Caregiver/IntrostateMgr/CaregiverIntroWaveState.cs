using UnityEngine;

public class CaregiverIntroWaveState : CaregiverIntroStateMachine
{
    public override void EnterState(CaregiverIntroStateManager state)
    {
        state.caregiverPhase = "CaregiverIntroWaveState";
        // Here we show a UI screen with "to the left is your mother
        // we trigger the waving as well
        state.Caregiver.GetComponent<Animator>().SetTrigger("wave");
        // if seen, we lift the pushbutton (next state)
        // then, we raise the scoring system
        // then we can go to the next scene
    }

    public override void ExitState(CaregiverIntroStateManager state)
    {

    }


    public override void UpdateState(CaregiverIntroStateManager state)
    {
        if (state.toNextState)
        {
            state.SwitchState(state.caregiverIntroButtonState);
        }
        else
        {
            if (state.Caregiver.GetComponent<Gazed>().hasBeenSeen)
            {
                state.SwitchState(state.caregiverIntroButtonState);
            }
            else
            {
                state.Caregiver.GetComponent<Animator>().SetTrigger("wave");

            }
        }
    }
}

