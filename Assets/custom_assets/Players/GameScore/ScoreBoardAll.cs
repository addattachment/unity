using System.Collections.Generic;
using UnityEngine;

public class ScoreBoardAll : MonoBehaviour
{
    [SerializeField] List<ScoreBoard> scoreBoards;
    private GameManager gameManager;


    private void Start()
    {
        gameManager = GameManager.Instance;
    }

    private void Update()
    {
        if (gameManager.playerValuesAreUpdated)
        {
            UpdateNames();
            gameManager.playerValuesAreUpdated = false;
        }
    }
    public void UpdateScores()
    {
        foreach (ScoreBoard scoreBoard in scoreBoards)
        {
            scoreBoard.UpdateScore();
        }
    }

    public void UpdateNames()
    {
        Debug.Log("updating the names");
        foreach (ScoreBoard scoreBoard in scoreBoards)
        {
            scoreBoard.SetName();
        }
    }
}
