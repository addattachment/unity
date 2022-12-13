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

    [SerializeField] private Player player;
    [SerializeField] private Player NPC;

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

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    /// <summary>
    /// add to score adds a 1 or 0 to the score of the player
    /// based on the score we also send if it was a good or bad hit to the data
    /// </summary>
    /// <param name="score"></param>
    public void AddToScore(int score)
    {
        lsl.SendMarker(score==1 ? Marker.ball_good_hit : Marker.ball_bad_hit);

        Player activeParticipant = player.isActivePlayer ? player : NPC; // see who is the active player to get a new ball
        //update the score
        activeParticipant.score += score;
        debug_text.SetDebugText("" + activeParticipant.name + " " + activeParticipant.score);
        ws.SendWSMessage("name: " +activeParticipant.name + ", score: " + activeParticipant.score);
        lsl.SendMarker(Marker.score);
        //int trial = gameManager
    }

    



}
