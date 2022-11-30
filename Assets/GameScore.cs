using LSL;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class GameScore : MonoBehaviour
{
    [SerializeField] private UnityEvent SendScore;
    private WsClient ws;
    private OutletPassThrough lsl;
    [SerializeField] PlayerSetup playerSetup;
    [SerializeField] GameManager gameManager;

    private Player player;
    private Player NPC;

    // Start is called before the first frame update
    void Start()
    {
        ws = GameObject.FindGameObjectWithTag("ws").GetComponent<WsClient>();
        lsl = GameObject.FindGameObjectWithTag("lsl").GetComponent<OutletPassThrough>();
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
        NPC = GameObject.FindGameObjectWithTag("NPC").GetComponent<Player>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    /// <summary>
    /// add to score adds a 1 or 0 to the score of the player
    /// </summary>
    /// <param name="score"></param>
    public void AddToScore(int score)
    {
        Player activeParticipant = player.isActivePlayer ? player : NPC; // see who is the active player to get a new ball
        //update the score
        activeParticipant.score += score;
        ws.SendWSMessage(activeParticipant.name + "score: " + activeParticipant.score);
        //int trial = gameManager
    }

}
