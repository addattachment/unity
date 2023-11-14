using LSL;
using System.Collections.Generic;
using UnityEngine;

public class PlayerGroup : MonoBehaviour
{
    // Start is called before the first frame update
    public Player player;
    public Player NPC;
    public Player activeParticipant;
    private GameManager gameManager;
    [SerializeField] private bool switchPlayer = false;

    [SerializeField] private List<Player> players;

    private WsClient ws;
    private OutletPassThrough lsl;
    private PlayersScoreEvent playersScoreEvent = new();
    public GameObject PlayerInvisibleWall;
    public GameObject NPCInvisibleWall;
    public GameObject activeBall;

    [Header("Debugging")]

    [SerializeField] int currentRow = 0;
    [SerializeField] int currentPos = 0;
    [SerializeField] int currentNPCResponse = 0;
    [SerializeField] int currentPlayerResponse = 0;

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
        if (activeParticipant != null)
        {
            activeBall = activeParticipant.instBall != null ? activeParticipant.instBall : null;
        }
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
    ///
    /// lets work with 3 or 4 lists of NPC & player scoring chances
    /// 
    [SerializeField]
    private int[,] losingSessionsNPCSide = new int[5, 5] {
        {1,1,0,0,1},
        {0,0,1,1,1},
        {1,0,1,1,1},
        {1,1,0,1,1},
        {1,1,1,0,0}
    };
    [SerializeField]
    private int[,] losingSessionsPlayerSide = new int[5, 5] {
        {0,1,0,0,1},
        {0,0,1,0,1},
        {0,0,1,0,0},
        {0,0,0,1,1},
        {1,0,1,0,0}
    };
    [SerializeField]
    private int[,] winningSessionsNPCSide = new int[5, 5] {
        {1,0,0,0,1},
        {0,0,1,1,1},
        {0,0,0,1,1},
        {1,0,0,1,1},
        {1,1,0,0,0}
    };
    [SerializeField]
    private int[,] winningSessionsPlayerSide = new int[5, 5] {
        {1,1,0,0,1},
        {1,0,1,0,1},
        {0,1,1,1,0},
        {1,1,0,1,1},
        {1,0,1,1,1}
    };

    /// <summary>
    /// sets the ReachtargetEnum of the active slingshot
    /// we use a random float to have variation within a trial
    /// </summary>
    /// <param name="slingshot"></param>
    public void SetPlayerScoringChance(Slingshot slingshot, bool isGoodTrial)//Trial currentTrial)
    {
        int currentBall = activeParticipant.currentBallInTrial;

        ReachTargetEnum reachChance;
        if (gameManager.allMust)
        {
            reachChance = ReachTargetEnum.must;
        }
        else
        {
            if (gameManager.isTutorial)
            {
                //Chance setting
                float guess = Random.Range(0.0f, 1.0f);
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

                currentRow = gameManager.currentTrial % 5;
                currentPos = currentBall;
                currentNPCResponse = isGoodTrial ? winningSessionsNPCSide[currentRow, currentPos] : losingSessionsNPCSide[currentRow, currentPos];
                currentPlayerResponse = isGoodTrial ? winningSessionsPlayerSide[currentRow, currentPos] : losingSessionsPlayerSide[currentRow, currentPos];

                if (isGoodTrial)
                {
                    if (activeParticipant.isRealPlayer)
                    {
                        // have a chance that the ball must hit the targets
                        // equal chance must vs may?
                        if (winningSessionsNPCSide[gameManager.currentTrial % 5, currentBall] == 1)
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
                        if (winningSessionsNPCSide[currentRow, currentBall] == 1)
                        {
                            reachChance = ReachTargetEnum.mayNPC;
                        }
                        else
                        {
                            reachChance = ReachTargetEnum.musnt;
                        }
                    }
                }
                else
                {
                    if (activeParticipant.isRealPlayer)
                    {
                        // have a low chance that the ball must hit the targets 
                        // most of the time it should be musn't, sometimes may
                        if (losingSessionsPlayerSide[currentRow, currentBall] == 1)
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
                        if (losingSessionsNPCSide[currentRow, currentBall] == 1)
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
        Debug.Log(activeParticipant + " reachChance " + reachChance + " for ball " + currentBall + " for trial " + gameManager.currentTrial);
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