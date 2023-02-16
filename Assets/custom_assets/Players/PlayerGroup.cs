using Assets.Scripts;
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
    [SerializeField] private DebugConnection debug_text;

    [SerializeField] private List<Player> players;

    void Start()
    {
        //gameManager = GameManager.Instance;
        ResetPlayers();
        debug_text = GameObject.FindGameObjectWithTag("debug").GetComponentInChildren<DebugConnection>();
        gameManager = GameManager.Instance;
        if (player != null)
        {
            players.Add(player);
        }
        if (NPC != null)
        {
            players.Add(NPC);
        }
    }

    // Update is called once per frame
    void Update()
    {
        ////TEST/////////////////
        if (switchPlayer)
        {
            switchPlayer = false;
            SwitchPlayer();
        }
        ////////////////////////
    }

    public bool BallsLeft()
    {
        foreach (Player x in players)
        {
            if (x.currentBallInTrial < gameManager.ballsPerGame)
            {
                // player x still has balls available (didn't spend all balls)
                return true;
            }
        }
        return false;

        //if ((player.currentBallInTrial >= gameManager.ballsPerGame) & (NPC.currentBallInTrial >= gameManager.ballsPerGame))
        //{
        //    return false;
        //}
        //else
        //{
        //    return true;
        //}
    }

    public Player GetWinner()
    {
        // TODO
        Player winner = player.score > NPC.score ? player : NPC;
        return winner;
    }

    public Player GetActivePlayer()
    {
        Player active = null;
        foreach (Player x in players)
        {
            if (x.isActivePlayer)
            {
                active = x;
            }
        }
        return active;
    }
    public void SwitchPlayer()
    {
        foreach (Player x in players)
        {
            x.SetActive(!x.isActivePlayer);
        }
        activeParticipant = GetActivePlayer(); // see who is the active player to get a new ball
    }

    /// <summary>
    /// ResetPlayers
    /// sets the initial amount of balls to throw
    /// sets the active starting player
    /// 
    /// </summary>
    public void ResetPlayers()
    {
        foreach (Player x in players)
        {
            x.currentBallInTrial = 0;
            x.playerScore.ResetScore();
            // first we set each player non active
            x.SetActive(false);
        }
        // then we set the player active, this way we don't have to care about the length of ptcpts ranging from 1 to ...
        //player.currentBallInTrial =0;
        //NPC.currentBallInTrial = 0;
        player.SetActive(true);
        //NPC.SetActive(false);
        //player.playerScore.ResetScore();
        //NPC.playerScore.ResetScore();
        activeParticipant = GetActivePlayer(); // see who is the active player to get a new ball
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
        ReachTargetEnum reachChance;
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
                    reachChance = ReachTargetEnum.must;
                }
                else
                {
                    reachChance = ReachTargetEnum.may;
                }
                debug_text.SetToggleReach(reachChance, activeParticipant);

            }
            else
            {
                // equal or less chance of scoring than human player??
                // equal chance must vs mustn
                if (guess >= 0.5f)
                {
                    reachChance = ReachTargetEnum.must;
                }
                else
                {
                    reachChance = ReachTargetEnum.mayNPC;
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
                    reachChance = ReachTargetEnum.may;
                }
                else
                {
                    reachChance = ReachTargetEnum.musnt;
                }
                debug_text.SetToggleReach(reachChance, activeParticipant);
            }
            else
            {
                // equal or less chance of scoring than human player??
                // most of the time should be must, sometimes may
                if (guess >= 0.4f)
                {
                    reachChance = ReachTargetEnum.must;
                }
                else
                {
                    reachChance = ReachTargetEnum.mayNPC;
                }
            }
        }
        slingshot.SetTargetReachable(reachEnum: reachChance);
    }
}
