namespace TrialNS
{
    public abstract class BallStateMachine
    {
        public abstract void EnterState(BallStateManager state);
        public abstract void UpdateState(BallStateManager state);
        public abstract void OnCollisionEnter(BallStateManager state);
        public abstract void ExitState(BallStateManager state);
    }
}