using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public enum Gender { Male, Female, X };
public enum Contingency { c_20, c_80 };
public class Player : MonoBehaviour
{

    //Set once in game
    public string playerName = "";
    public Gender gender = Gender.Male;
    public int height = 0;
    public bool isRealPlayer = false;
    public bool isActivePlayer = false;
    public Contingency contingency = Contingency.c_20;
    public int trial_block = 1; // or 2

    //Set multiple times in game
    public int score = 0;
    public int currentBallInTrial = 0;
    public Slingshot slingshot;
    public PlayerScore playerScore;
    public GameObject trophySpawnLocation;
    public List<GameObject> trophyWonList;
    public GameObject instBall;
    public void SetActive(bool active)
    {
        isActivePlayer = active;
        //slingshot.slingshotLinesEnum = SlingshotLinesEnum.active;

    }

    public void FakeShot()
    {
        NPC npc = GetComponent<NPC>();
        //StartCoroutine(npc.ShootBall(instBall));
        StartCoroutine(npc.DirectShootBall(instBall));
    }

    public string GetWonTrophies()
    {
        string result = playerName + " : \n";
        foreach (GameObject trophy in trophyWonList)
        {
            result += trophy.name + "\n";
        }
        return result;
    }

    public void UpdateValues(string _name, Gender _gender, Contingency _contingency, int _height, bool _isReal, int _trialBlock)
    {
        playerName = _name;
        gender = _gender;
        contingency = _contingency;
        height = _height;
        isRealPlayer = _isReal;
        trial_block = _trialBlock;
    }

}

