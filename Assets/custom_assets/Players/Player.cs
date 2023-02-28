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
        //StartCoroutine(ShootBall());
        NPC npc = GetComponent<NPC>();
        StartCoroutine(npc.ShootBall(instBall));

    }
}

