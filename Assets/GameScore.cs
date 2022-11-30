using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class GameScore : MonoBehaviour
{
    public int gameScore = 0;
    [SerializeField] private UnityEvent SendScore;
    [SerializeField] 
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void AddToScore(int score)
    {
        gameScore += score;
    }

    public void TransmitScore()
    {
        //send ball number 


    }
}
