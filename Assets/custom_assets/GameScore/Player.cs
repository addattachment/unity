using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public enum Gender { Male, Female, X };

    //Set once in game
    public string playerName = "";
    public Gender gender = Gender.Male;
    public int height = 0;
    public bool isRealPlayer = false;
    public bool isActivePlayer = false;

    //Set multiple times in game
    public int score = 0;
    public int amountOfBallsInTrial = 0;
    public Slingshot slingshot;
    public void SetActive(bool active)
    {
        isActivePlayer = active;
        slingshot.slingshotIsActive = active;
        if ((isRealPlayer == false) && (isActivePlayer == true))
        {
            StartCoroutine(ShootBall());
        }
    }

    private IEnumerator ShootBall()
    {
        float wait_time = Random.Range(1.0f, 3.0f);
        yield return new WaitForSeconds(wait_time);
        var ballScript = slingshot.Ball.GetComponent<Ball>();
        ballScript.FakeLaunch();
    }
}

