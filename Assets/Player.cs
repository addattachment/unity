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

    //Set multiple times in game
    public int score = 0;
    public int amountOfBallsInTrial = 0;
    public bool isActivePlayer = false;

    
}
