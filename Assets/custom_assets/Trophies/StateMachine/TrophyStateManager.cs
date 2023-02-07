using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TrialNS;
using UnityEngine;

public class TrophyStateManager : MonoBehaviour
{
    public TrophyStateMachine currentTrophyState;

    // ballPhase is for debugging purposes
    public string trophyState = "trophyInitState";
    public TrophyInitState trophyInitState = new();
    public TrophyAppearState trophyAppearState = new();
    public TrophyWaitingState trophyWaitingState = new();
    public TrophyGivingState trophyGivingState = new();
    public TrophyCooldownState trophyCooldownState = new();

    // script references
    public GameManager gameManager;
    public TrialStateManager trialState;
    public PlayerGroup players;
    public TrialList trialList;
    public TargetGroup targets;
    public TrophyList trophyList;

    // booleans to control state
    public bool trophyMayAppear = false;
    public bool mayPrep = false;
    public bool canLaunch = false;
    public bool didShoot = false;
    private void Start()
    {
        currentTrophyState = trophyInitState;
        trophyState = "trophyInitState";
        currentTrophyState.EnterState(this);
        gameManager = GameManager.Instance;
    }
    private void Update()
    {
        currentTrophyState.UpdateState(this);

    }
    public void SwitchState(TrophyStateMachine newState)
    {
        currentTrophyState.ExitState(this);
        currentTrophyState = newState;
        currentTrophyState.EnterState(this);
    }
}
