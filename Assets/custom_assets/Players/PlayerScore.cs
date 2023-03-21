using LSL;
using UnityEngine;

public class PlayerScore : MonoBehaviour
{
    [SerializeField] private Player player;
    [SerializeField] private GameManager gameManager;

    [Header("visualising score")]
    [SerializeField] private ScoreDot[] scoreDots;
    [SerializeField] private ScoreBoardAll scoreboard;
    [SerializeField] private ScoreLightEmitting floor;

    [Header("Audio")]
    [SerializeField] private GameSounds gameSounds;

    [Header("data connections")]
    [SerializeField] private WsClient ws;
    [SerializeField] private OutletPassThrough lsl;
    private PlayerBallScoreEvent playerBallScoreEvent;

    //[Header("debug")]
    //[SerializeField] private DebugConnection debug_text;

    // Start is called before the first frame update
    void Start()
    {
        player = GetComponentInParent<Player>();
        ws = GameObject.FindGameObjectWithTag("ws").GetComponent<WsClient>();
        lsl = GameObject.FindGameObjectWithTag("lsl").GetComponent<OutletPassThrough>();
        //debug_text = GameObject.FindGameObjectWithTag("debug").GetComponentInChildren<DebugConnection>();
        gameSounds = GameObject.FindGameObjectWithTag("gameSounds").GetComponent<GameSounds>();
        scoreboard = GameObject.FindGameObjectWithTag("scoreboard").GetComponent<ScoreBoardAll>();
        scoreDots = GetComponentsInChildren<ScoreDot>();
        floor = GameObject.FindGameObjectWithTag("Floor").GetComponent<ScoreLightEmitting>();
        playerBallScoreEvent = new();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void ResetScore()
    {
        foreach (ScoreDot scoredot in scoreDots)
        {
            scoredot.CleanScore();
        }
        player.score = 0;
        scoreboard.UpdateScores();
    }
    public void AddToScore(bool score)
    {
        PlaySound(score);
        UpdatePlayerScore(score);

        floor.SetFloorIllumination(score);
        //global update of score
        scoreboard.UpdateScores();
        //data connections
        if (!gameManager.isTutorial)
        {
            LSLNotifyGoodOrBadHit(score);
            WSUpdateScore(score);
        }

    }
    private void PlaySound(bool score)
    {
        if (score)
        {
            gameSounds.BallCorrectHitAudio.Play();
        }
        else
            gameSounds.BallWrongHitAudio.Play();
    }

    private void UpdatePlayerScore(bool score)
    {
        scoreDots[player.currentBallInTrial].SetScore(score);
        //update the score
        if (score)
        {
            player.score++;
        }
    }


    private void LSLNotifyGoodOrBadHit(bool score)
    {
        lsl.SendMarker(score ? Marker.ball_good_hit : Marker.ball_bad_hit);
    }

    private void WSUpdateScore(bool score)
    {
        playerBallScoreEvent.Set(gameManager.currentTrial, player.playerName, player.isRealPlayer, score);
        ws.SendWSMessage(playerBallScoreEvent.SaveToString());
        lsl.SendMarker(Marker.score);
    }
}

public class PlayerBallScoreEvent
{
    public int trialNumber;
    public string websocketMessage = "PlayerBallScore";
    public string player;
    public bool realPlayer;
    public bool hit;
    public float _time;
    public PlayerBallScoreEvent()
    {
    }

    public void Set(int newTrialNumber, string thisPlayer, bool isRealPlayer, bool didHit)
    {
        trialNumber = newTrialNumber;
        player = thisPlayer;
        realPlayer = isRealPlayer;
        hit = didHit;
    }
    public string SaveToString()
    {
        _time = Time.time;
        return JsonUtility.ToJson(this);
    }
}

