using TMPro;
using UnityEngine;

public class CaregiverIntroIdleState : CaregiverIntroStateMachine
{
    public override void EnterState(CaregiverIntroStateManager state)
    {
        state.caregiverPhase = "CaregiverIntroIdleState";
        Debug.Log("Instructionboard appear: " + state.InstructionBoardAppear);
        state.InstructionBoardAppear.Raise();
        state.InstructionBoardText.text = "We gaan je voorstellen aan je zorgfiguur, kijk maar naar haar!";
        state.scoreCaregiver.DisableScoring();
    }

    public override void ExitState(CaregiverIntroStateManager state)
    {
    }


    public override void UpdateState(CaregiverIntroStateManager state)
    {
        state.SwitchState(state.caregiverIntroWaveState);
    }
}

