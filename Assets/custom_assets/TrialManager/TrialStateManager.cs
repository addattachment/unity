using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace TrialNS
{
    //reference: https://www.youtube.com/watch?v=Vt8aZDPzRjI
    public class TrialStateManager : MonoBehaviour
    {
        public StateMachine currentState;
        public PreTrialState preTrialState = new();
        public TrialState trialState = new();
        public PostTrialState postTrialState = new();
        public IntroState introState = new();

        public PlayerGroup players;
        public TargetGroup targets;
        public TrialList trialList;
        public GameManager gameManager;
        public BallStateManager ballStates;
        public CaregiverStateManager caregiverStates;
        public TrophyStateManager trophyStates;
        public CountDown countDown;

        public bool startTrial = false;
        public bool endTrial = false;
        public bool restart = false;
        public bool ballIsShot = false;
        public bool trialIsRunning = false;
        // trialPhase is for debugging purposes
        public string trialPhase = "IntroState";



        // Start is called before the first frame update
        void Start()
        {
            // starting state for our state machine
            currentState = introState;
            trialPhase = "IntroState";
            // "this" is a reference to the context (this EXACT Monobehavior script)
            currentState.EnterState(this);
            gameManager = GameManager.Instance;
        }

        // Update is called once per frame
        void Update()
        {
            currentState.UpdateState(this);
        }

        public void SwitchState(StateMachine newState)
        {
            currentState.ExitState(this);
            currentState = newState;
            currentState.EnterState(this);
        }
    }
}