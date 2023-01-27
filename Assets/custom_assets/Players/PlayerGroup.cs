using System.Collections;
using System.Collections.Generic;
using TrialNS;
using UnityEngine;

public class PlayerGroup : MonoBehaviour
{
    // Start is called before the first frame update
    public Player player;
    public Player NPC;
    public Player activeParticipant;
    [SerializeField] private GameManager gameManager;
    [SerializeField] private bool switchPlayer = false;

    void Start()
    {
        //gameManager = GameManager.Instance;
        ResetPlayers();
    }

    // Update is called once per frame
    void Update()
    {
        if (switchPlayer)
        {
            switchPlayer = false;
            SwitchPlayer();
        }
    }

    public void SwitchPlayer()
    {
        //temp adaptation while only 1 player
        player.SetActive(!player.isActivePlayer);// ;
        NPC.SetActive(!NPC.isActivePlayer);//  ;
        activeParticipant = player.isActivePlayer ? player : NPC; // see who is the active player to get a new ball
    }

    /// <summary>
    /// ResetPlayers
    /// sets the initial amount of balls to throw
    /// sets the active starting player
    /// 
    /// </summary>
    public void ResetPlayers()
    {
        player.amountOfBallsInTrial = gameManager.ballsPerGame;
        NPC.amountOfBallsInTrial = gameManager.ballsPerGame;
        player.SetActive(true);
        NPC.SetActive(false);
        activeParticipant = player.isActivePlayer ? player : NPC; // see who is the active player to get a new ball
    }

    public void PrepNewShootingTurn(TrialList trialList, TargetGroup targets)
    {
        activeParticipant = player.isActivePlayer ? player : NPC; // see who is the active player to get a new ball

        var slingshot = activeParticipant.slingshot;

        SetPlayerScoringChance(slingshot, trialList.GetCurrentTrial());

        if (activeParticipant.amountOfBallsInTrial > 0)
        {
            activeParticipant.amountOfBallsInTrial--;
            // Make sure we can detect collisions by the new bullet (only once!)
            targets.readyForHit = true;
            // Set the new targets
            targets.SetNewHitTarget();
            // Instantiate the new bullet and it's colors
            slingshot.PrepNewBall(targets);
        }
        else
        {
            // As soon as one of the players is out of balls, we can conclude that both players are out of balls
            gameManager.stateMGR.endTrial = true;
        }
    }

    /// <summary>
    /// sets the ReachtargetEnum of the active slingshot
    /// we use a random float to have variation within a trial
    /// </summary>
    /// <param name="slingshot"></param>
    public void SetPlayerScoringChance(Slingshot slingshot, Trial currentTrial)
    {
        float guess = Random.Range(0.0f, 1.0f);
        //Trial currentTrial = trialList.GetCurrentTrial();

        if (currentTrial.IsGoodTrial() == true)
        {
            // NPC has 50% chance of scoring
            // Player has 20% of balls which are steered towards targets

            if (activeParticipant.isRealPlayer)
            {
                // have a chance that the ball must hit the targets
                // equal chance must vs may?
                if (guess >= 0.8f)
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.must);
                }
                else
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.may);
                }
            }
            else
            {
                // equal or less chance of scoring than human player??
                // equal chance must vs mustn
                if (guess >= 0.5f)
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.must);
                }
                else
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.mayNPC);
                }
            }
        }
        else
        {
            // NPC 60% chance of scoring
            // player max random[20-50%] chance of scoring
            if (activeParticipant.isRealPlayer)
            {
                // have a low chance that the ball must hit the targets 
                // most of the time it should be musn't, sometimes may
                if (guess >= Random.Range(0.2f, 0.5f))
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.may);
                }
                else
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.musnt);
                }
            }
            else
            {
                // equal or less chance of scoring than human player??
                // most of the time should be must, sometimes may
                if (guess >= 0.4f)
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.must);
                }
                else
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.mayNPC);
                }
            }
        }
    }
}
