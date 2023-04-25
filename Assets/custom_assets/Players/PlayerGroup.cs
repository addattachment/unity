using LSL;
using System.Collections.Generic;
using UnityEngine;

public class PlayerGroup : MonoBehaviour
{
    // Start is called before the first frame update
    public Player player;
    public Player NPC;
    public Player activeParticipant;
    [SerializeField] private GameManager gameManager;
    [SerializeField] private bool switchPlayer = false;

    [SerializeField] private List<Player> players;

    [Header("data connections")]
    [SerializeField] private WsClient ws;
    [SerializeField] private OutletPassThrough lsl;
    private PlayersScoreEvent playersScoreEvent = new();
    public GameObject PlayerInvisibleWall;
    public GameObject NPCInvisibleWall;
    void Start()
    {
        gameManager = GameManager.Instance;
        lsl = OutletPassThrough.Instance;
        ws = WsClient.Instance;
        if (player != null)
        {
            players.Add(player);
        }
        if (NPC != null)
        {
            players.Add(NPC);
        }
        //ResetPlayers();
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
    }

    public Player GetWinner()
    {
        if (gameManager.isTutorial)
        {
            return activeParticipant;
        }
        else
        {
            if (NPC.score > player.score)
            {
                return NPC;
            }
            else
            {
                if (player.score > NPC.score)
                {
                    return player;
                }
                else
                {
                    //ex-aequo
                    return null;
                }
            }
        }
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
        if (!gameManager.isTutorial)
        {
            foreach (Player x in players)
            {
                x.SetActive(!x.isActivePlayer);
            }
            activeParticipant = GetActivePlayer(); // see who is the active player to get a new ball
        }
        else
        {
            activeParticipant.SetActive(true);
        }
        SetInvisibleWallToActivePlayer();
    }

    /// <summary>
    /// ResetPlayers
    /// sets the initial amount of balls to throw
    /// sets the active starting player
    /// 
    /// </summary>
    public void ResetPlayers()
    {
        if (!gameManager.isTutorial)
        {
            foreach (Player x in players)
            {
                x.currentBallInTrial = 0;
                x.playerScore.ResetScore();
                // first we set each player non active
                x.SetActive(false);
            }
        }
        else
        {
            player.currentBallInTrial = 0;
            player.playerScore.ResetScore();
            // first we set each player non active
            player.SetActive(false);
        }

        // then we set the player active, this way we don't have to care about the length of ptcpts ranging from 1 to ...
        player.SetActive(true);
        activeParticipant = GetActivePlayer(); // see who is the active player to get a new ball
        SetInvisibleWallToActivePlayer();
    }

    public void SetInvisibleWallToActivePlayer()
    {
        if (activeParticipant == player)
        {
            PlayerInvisibleWall.SetActive(true);
            NPCInvisibleWall.SetActive(false);
        }
        else
        {
            PlayerInvisibleWall.SetActive(false);
            NPCInvisibleWall.SetActive(true);
        }
    }

    public void MakeSlingshotsAppear(bool enabled)
    {
        foreach (Player x in players)
        {
            if (enabled)
            {
                x.slingshot.GetComponent<Appear>().Raise();
            }
            else
            {
                x.slingshot.GetComponent<Appear>().Lower();
            }
        }
    }

    public bool AreSlingshotsLow()
    {
        foreach (Player x in players)
        {
            if (!x.slingshot.GetComponent<Appear>().isLow)
            {
                // if one of both slingshots isn't low, return false
                return false;
            }
        }
        return true;
    }
    public void WSUpdateTrialScore()
    {
        if (!gameManager.isTutorial)
        {
            playersScoreEvent.Set(gameManager.currentTrial, player.score, NPC.score);
        }
        else
        {
            playersScoreEvent.Set(gameManager.currentTrial, player.score, 0);
        }
        ws.SendWSMessage(playersScoreEvent.SaveToString());
    }

    /// <summary>
    /// sets the ReachtargetEnum of the active slingshot
    /// we use a random float to have variation within a trial
    /// </summary>
    /// <param name="slingshot"></param>
    public void SetPlayerScoringChance(Slingshot slingshot, bool isGoodTrial)//Trial currentTrial)
    {
        //Chance setting
        float guess = Random.Range(0.0f, 1.0f);
        //Trial currentTrial = trialList.GetCurrentTrial();
        ReachTargetEnum reachChance;
        if (gameManager.allMust)
        {
            reachChance = ReachTargetEnum.must;
        }
        else
        {
            if (gameManager.isTutorial)
            {
                if (guess >= 0.3f)
                {
                    reachChance = ReachTargetEnum.preferredMust;
                }
                else
                {
                    reachChance = ReachTargetEnum.may;
                }
            }
            else
            {
                if (isGoodTrial)
                {
                    // NPC has 30% chance of scoring
                    // Player has 40% of balls which are steered towards targets

                    if (activeParticipant.isRealPlayer)
                    {
                        // have a chance that the ball must hit the targets
                        // equal chance must vs may?
                        if (guess >= 0.6f)
                        {
                            reachChance = ReachTargetEnum.preferredMust;
                        }
                        else
                        {
                            reachChance = ReachTargetEnum.may;
                        }
                    }
                    else
                    {
                        // equal or less chance of scoring than human player??
                        // equal chance must vs mustn
                        if (guess >= 0.7f)
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
            }
        }
        //debug_text.SetToggleReach(reachChance, activeParticipant);
        //debug_text.SetDebugText("" + reachChance + activeParticipant);
        Debug.Log(activeParticipant + " reachChance " + reachChance);
        slingshot.SetTargetReachable(reachEnum: reachChance);
    }
}
public class PlayersScoreEvent
{
    public int trialNumber;
    public string websocketMessage = "PlayersScore";
    public int playerScore;
    public int NPCScore;
    public float _time;
    public PlayersScoreEvent()
    {
    }

    public void Set(int newTrialNumber, int newPlayerScore, int newNPCScore)
    {
        trialNumber = newTrialNumber;
        playerScore = newPlayerScore;
        NPCScore = newNPCScore;
    }
    public string SaveToString()
    {
        _time = Time.time;
        return JsonUtility.ToJson(this);
    }
}