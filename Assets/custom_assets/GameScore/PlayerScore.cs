using Assets.Scripts;
using LSL;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScore : MonoBehaviour
{
    [SerializeField] private Player player;

    [Header("visualising score")]
    [SerializeField] private ScoreDot[] scoreDots;
    [SerializeField] private ScoreBoardAll scoreboard;
    [SerializeField] private Floor floor;

    [Header("Audio")]
    [SerializeField] private GameSounds gameSounds;

    [Header("data connections")]
    [SerializeField] private WsClient ws;
    [SerializeField] private OutletPassThrough lsl;

    [Header("debug")]
    [SerializeField] private DebugConnection debug_text;

    // Start is called before the first frame update
    void Start()
    {
        player = GetComponentInParent<Player>();
        ws = GameObject.FindGameObjectWithTag("ws").GetComponent<WsClient>();
        lsl = GameObject.FindGameObjectWithTag("lsl").GetComponent<OutletPassThrough>();
        debug_text = GameObject.FindGameObjectWithTag("debug").GetComponentInChildren<DebugConnection>();
        gameSounds = GameObject.FindGameObjectWithTag("gameSounds").GetComponent<GameSounds>();
        scoreboard = GameObject.FindGameObjectWithTag("scoreboard").GetComponent<ScoreBoardAll>();
        scoreDots = GetComponentsInChildren<ScoreDot>();
        floor = GameObject.FindGameObjectWithTag("Floor").GetComponent<Floor>();
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
        LSLNotifyGoodOrBadHit(score);
        WSUpdateScore();
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

    private void WSUpdateScore()
    {
        //debug_text.SetDebugText("" + player.name + " " + player.score);
        ws.SendWSMessage("name: " + player.name + ", score: " + player.score);
        lsl.SendMarker(Marker.score);
    }
}
