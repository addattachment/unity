public abstract class CaregiverIntroStateMachine
{
    public abstract void EnterState(CaregiverIntroStateManager state);
    public abstract void UpdateState(CaregiverIntroStateManager state);
    public abstract void ExitState(CaregiverIntroStateManager state);
}
