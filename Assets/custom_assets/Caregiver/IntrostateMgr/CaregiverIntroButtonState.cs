public class CaregiverIntroButtonState : CaregiverIntroStateMachine
{
    public override void EnterState(CaregiverIntroStateManager state)
    {
        state.caregiverPhase = "CaregiverIntroButtonState";
    }

    public override void ExitState(CaregiverIntroStateManager state)
    {
    }


    public override void UpdateState(CaregiverIntroStateManager state)
    {
    }
}

