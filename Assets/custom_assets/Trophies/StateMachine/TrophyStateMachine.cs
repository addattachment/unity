using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class TrophyStateMachine
{
    public abstract void EnterState(TrophyStateManager state);
    public abstract void UpdateState(TrophyStateManager state);
    public abstract void ExitState(TrophyStateManager state);
}