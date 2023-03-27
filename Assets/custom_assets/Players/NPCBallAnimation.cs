// This C# function can be called by an Animation Event
using UnityEngine;


public class NPCBallAnimation : MonoBehaviour
{
    private GameManager gameManager;
    private void Start()
    {
        gameManager = GameManager.Instance;
    }
    public void PrintEvent(string s)
    {
        //Debug.Log("PrintEvent: " + s + " called at: " + Time.time);
    }
    // SetBallBool sets the NPCShootsBall boolean at true when the NPC animation releases the ball
    public void SetBallBool()
    {
        //Debug.Log("shoot at " + Time.time);
        gameManager.NPCShootsBall = true;
    }
}