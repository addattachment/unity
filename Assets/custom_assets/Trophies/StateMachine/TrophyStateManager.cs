﻿using UnityEngine;

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
    [HideInInspector] public GameManager gameManager;
    public PlayerGroup players;
    public TargetGroup targets;
    public TrophyList trophyList;
    public LightingMgr lightMgr;
    public announceWinner winnerUI;

    [SerializeField] private bool sendStateWSMessage = false;
    public float waitTimeForTransition = 0.5f;
    [Header("data connections")]
    private WsClient ws;
    StateMgrEvent trophyStateMgrEvent;

    private void Start()
    {
        ws = WsClient.Instance;
        gameManager = GameManager.Instance;
        if (players == null)
        {
            players = GameObject.FindGameObjectWithTag("PlayerGroup").GetComponent<PlayerGroup>();
        }
        currentTrophyState = trophyInitState;
        trophyState = "trophyInitState";
        currentTrophyState.EnterState(this);
        trophyStateMgrEvent = new("trophystate");
    }
    private void Update()
    {
        currentTrophyState.UpdateState(this);

    }
    public void SwitchState(TrophyStateMachine newState)
    {
        currentTrophyState.ExitState(this);
        currentTrophyState = newState;
        if (sendStateWSMessage)
        {
            trophyStateMgrEvent.Set(newState.ToString());
            ws.SendWSMessage(trophyStateMgrEvent.SaveToString());
        }
        currentTrophyState.EnterState(this);
    }
}
