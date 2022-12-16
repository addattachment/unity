using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreBoardAll : MonoBehaviour
{
    [SerializeField] ScoreBoard scoreboardPlayer;
    [SerializeField] ScoreBoard scoreboardNPC;

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
