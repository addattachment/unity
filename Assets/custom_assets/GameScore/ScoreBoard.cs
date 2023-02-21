using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ScoreBoard : MonoBehaviour
{
    [SerializeField] private TMP_Text _name;
    [SerializeField] private TMP_Text score;
    [SerializeField] private Player subject;
    // Start is called before the first frame update
    void Start()
    {
        // TODO as long as we don't send the names:
        SetName();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void SetName()
    {
        _name.SetText(subject.playerName);
    }

    public void UpdateScore()
    {
        var text = ""+subject.score;// + "/" + subject.currentBallInTrial;// GameManager.Instance.ballsPerGame;
        score.SetText(text);
    }
}
