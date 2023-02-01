using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreBoardAll : MonoBehaviour
{
    [SerializeField] ScoreBoard scoreboardPlayer;
    [SerializeField] ScoreBoard scoreboardNPC;
    private GameManager gameManager;


    private void Start()
    {
        gameManager = GameManager.Instance;

    }

    private void Update()
    {
        if ((gameManager.gameDidStart == false) && (gameManager.trialListGenerated == true))
        {
            UpdateNames();
        }
    }
    public void UpdateScores()
    {
        scoreboardPlayer.UpdateScores();
        scoreboardNPC.UpdateScores();
    }

    public void UpdateNames()
    {
        scoreboardPlayer.SetNames();
        scoreboardNPC.SetNames();
    }
}
