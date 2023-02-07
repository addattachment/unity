using System.Collections;
using System.Collections.Generic;
using TrialNS;
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
    public GameObject instBall;
    public PlayerScore playerScore;
    public GameObject trophySpawnLocation;
    public List<GameObject> trophyWonList;

    public void SetActive(bool active)
    {
        isActivePlayer = active;
        slingshot.slingshotLinesEnum = SlingshotLinesEnum.active;
        
    }

    public void FakeShot()
    {
        StartCoroutine(ShootBall());
    }
    private IEnumerator ShootBall()
    {
        Ball ballScript = instBall.GetComponent<Ball>();
        float wait_time = Random.Range(0.2f, 1.5f);
        ballScript.ballIsGrabbed = true;
        yield return new WaitForSeconds(wait_time);
        ballScript.FakeLaunch();
    }
}

