using Assets.Scripts;
using LSL;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class GameScore : MonoBehaviour
{
    [SerializeField] private UnityEvent SendScore;
    [SerializeField] private WsClient ws;
    [SerializeField] private OutletPassThrough lsl;
    [SerializeField] GameManager gameManager;
    [SerializeField] private DebugConnection debug_text;
    [SerializeField] private GameSounds gameSounds;
    [SerializeField] private Player player;
    [SerializeField] private Player NPC;
    [SerializeField] private ScoreBoardAll scoreboard;

    m_LSL_Event m_LSL = new ();
    m_WS_Event m_WS = new ();
    // Start is called before the first frame update
    void Start()
    {
        ws = GameObject.FindGameObjectWithTag("ws").GetComponent<WsClient>();
        lsl = GameObject.FindGameObjectWithTag("lsl").GetComponent<OutletPassThrough>();
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
        NPC = GameObject.FindGameObjectWithTag("NPC").GetComponent<Player>();
        gameManager = GameManager.Instance;
        debug_text = GameObject.FindGameObjectWithTag("debug").GetComponentInChildren<DebugConnection>();
        gameSounds = GameObject.FindGameObjectWithTag("gameSounds").GetComponent<GameSounds>();
        scoreboard = GameObject.FindGameObjectWithTag("scoreboard").GetComponent<ScoreBoardAll>();
    }

    // Update is called once per frame
    void Update()
    {
        if ((gameManager.gameDidStart == false) && (gameManager.trialListGenerated == true))
        {
            scoreboard.UpdateNames();
        }
    }

    /// <summary>
    /// add to score adds a 1 or 0 to the score of the player
    /// based on the score we also send if it was a good or bad hit to the data
    /// </summary>
    /// <param name="score"></param>
    public void AddToScore(int score)
    {
        PlaySound(score);
        UpdatePlayerScore(score);
        scoreboard.UpdateScores();
        LSLNotifyGoodOrBadHit(score);
        WSUpdateScore(score);

        
        //int trial = gameManager
    }

    private void UpdatePlayerScore(int score)
    {
        Player activeParticipant = player.isActivePlayer ? player : NPC; // see who is the active player to get a new ball
        //update the score
        activeParticipant.score += score;
    }
    private void PlaySound(int score)
    {
        if (score == 1)
        {
            gameSounds.BallCorrectHitAudio.Play();
        }
        else
            gameSounds.BallWrongHitAudio.Play();
    }

    private void LSLNotifyGoodOrBadHit(int score)
    {
        lsl.SendMarker(score == 1 ? Marker.ball_good_hit : Marker.ball_bad_hit);

    }

    private void WSUpdateScore(int score)
    {
        Player activeParticipant = player.isActivePlayer ? player : NPC; // see who is the active player to get a new ball

        debug_text.SetDebugText("" + activeParticipant.name + " " + activeParticipant.score);
        ws.SendWSMessage("name: " + activeParticipant.name + ", score: " + activeParticipant.score);
        lsl.SendMarker(Marker.score);
    }



}
