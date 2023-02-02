using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ScoreBoard : MonoBehaviour
{
    [SerializeField] private TMP_Text _name;
    [SerializeField] private TMP_Text score;
    [SerializeField] private Player player;
    [SerializeField] private Player NPC;
    [SerializeField] private bool isRealPlayer = true;
    private Player subject;
    // Start is called before the first frame update
    void Start()
    {
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
        NPC = GameObject.FindGameObjectWithTag("NPC").GetComponent<Player>();
        if (isRealPlayer)
        {
            subject = player;
        }
        else
        {
            subject = NPC;
        }

        // TODO as long as we don't send the names:
        SetNames();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void SetNames()
    {
        _name.SetText(subject.playerName);
    }

    public void UpdateScores()
    {
        var text = subject.score + "/" + GameManager.Instance.ballsPerGame;
        score.SetText(text);
    }
}