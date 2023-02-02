using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace TrialNS
{
    //reference: https://www.youtube.com/watch?v=Vt8aZDPzRjI
    public class StateManager : MonoBehaviour
    {
        public StateMachine currentState;
        public PreTrialState preTrialState = new();
        public TrialState trialState = new();
        public PostTrialState postTrialState = new();
        public CaregiverFeedbackState caregiverFeedbackState = new();
        public CaregiverScoringState caregiverScoringState = new();
        public IntroState introState = new();
        //TODO we need some more states probably: 
        // an intro state
        // a prepplayer state (generate triallist, set names etc)

        public bool startTrial = false;
        public bool endTrial = false;
        public bool restart = false;
        public bool ballIsShot = false;
        // trialPhase is for debugging purposes
        public string trialPhase = "IntroState";

        //public Player player;
        //public Player NPC;
        public PlayerGroup players;

        public TargetGroup targets;

        public TrialList trialList;

        public GameObject caregiverFeedbackScreen; 

        public GameManager gameManager;


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