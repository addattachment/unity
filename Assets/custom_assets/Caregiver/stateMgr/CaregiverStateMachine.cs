public abstract class CaregiverStateMachine
{
    public abstract void EnterState(CaregiverStateManager state);
    public abstract void UpdateState(CaregiverStateManager state);
    public abstract void ExitState(CaregiverStateManager state);
}
