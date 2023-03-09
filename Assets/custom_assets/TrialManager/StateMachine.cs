
using UnityEngine;

public abstract class StateMachine
{
    public abstract void EnterState(TrialStateManager state);
    public abstract void UpdateState(TrialStateManager state);
    public abstract void ExitState(TrialStateManager state);
}
