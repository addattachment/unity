using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TrialNS;
using UnityEngine;


public class CaregiverStateManager: MonoBehaviour
{
    public CaregiverStateMachine currentCaregiverState;
    public CaregiverIdleState caregiverIdleState = new();
    public CaregiverFeedbackState caregiverFeedbackState = new();
    public CaregiverFeedbackConfirmState caregiverFeedbackConfirmState = new();
    public CaregiverScoringState caregiverScoringState = new();
    // script references
    //public GameManager gameManager;
    public TrialStateManager trialState;
    //public PlayerGroup players;
    public TrialList trialList;
    //public TargetGroup targets;
    public TriggerAnimation triggerAnimation;
    [HideInInspector] public CaregiverFeedback caregiverFeedback;
    public ReadFeedback feedbackPole;
    public GameObject caregiverFeedbackScreen;
    public GameObject scoreCaregiver;

    // booleans to control state

    public bool didReadFeedback = false;
    public bool didGiveScore = false;
    public bool mustGiveFeedback = false;

    // caregiverPhase is for debugging purposes
    public string caregiverPhase = "caregiverIdleState";
    private void Start()
    {
        currentCaregiverState = caregiverIdleState;
        caregiverPhase = "caregiverIdleState";
        currentCaregiverState.EnterState(this);
        //gameManager = GameManager.Instance;
        caregiverFeedback = caregiverFeedbackScreen.GetComponent<CaregiverFeedback>();
    }
    private void Update()
    {
        currentCaregiverState.UpdateState(this);
    }
    public void SwitchState(CaregiverStateMachine newState)
    {
        currentCaregiverState.ExitState(this);
        currentCaregiverState = newState;
        currentCaregiverState.EnterState(this);
    }

    public void SetDidGiveScore()
    {
        didGiveScore = true;
    }
}
