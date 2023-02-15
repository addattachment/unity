using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Appear : MonoBehaviour
{
    [SerializeField] private float Height;
    //TEST bools
    public bool RaiseFeedback = false;
    public bool LowerFeedback = false;
    ////////
    private Hashtable upHash;
    private Hashtable downHash;

    public delegate void TestDelegate();// This defines what type of method you're going to call.
    public TestDelegate m_methodToCall; // This is the variable holding the method you're going to call.

    public bool isLow = true;

    // Start is called before the first frame update
    void Start()
    {
        upHash = iTween.Hash("y", Height, "easeType", "easeInOutExpo", "loopType", "None", "delay", .1, "oncomplete", "SetIsLow", "oncompleteparams", false);
        downHash = iTween.Hash("y", 0.0f, "easeType", "easeInOutExpo", "loopType", "None", "delay", .1, "oncomplete", "SetIsLow", "oncompleteparams", true);
    }

    // Update is called once per frame
    void Update()
    {
        ////////////TEST
        if (RaiseFeedback)
        {
            Raise();
            RaiseFeedback = false;
        }
        if (LowerFeedback)
        {
            Lower();
            LowerFeedback = false;
        }
        //////////////////
    }

    private void SetIsLow(bool val)
    {
        isLow = val;
    }

    public void Raise()
    {
        iTween.MoveTo(gameObject, upHash);
    }
    public void Raise(TestDelegate method)
    {
        Raise();
        // load the function to execute once the button is pushed
        m_methodToCall = method;
    }
    public void Lower()
    {
        iTween.MoveTo(gameObject, downHash);
    }

    public void Lower(TestDelegate method)
    {
        Lower();
        // load the function to execute once the button is pushed
        m_methodToCall = method;
    }

    private void Test()
    {
        Debug.Log("extra function executed");
    }
    public void FunctionToExecute(TestDelegate method)
    {
        method();
    }
}
