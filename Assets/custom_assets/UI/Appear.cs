using System.Collections;
using UnityEngine;

public class Appear : MonoBehaviour
{
    [SerializeField] private float maxHeight;
    [SerializeField] private float minHeight = 0.0f;
    [SerializeField] private float duration = 1.0f;

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
        upHash = iTween.Hash("y", maxHeight, "easeType", "easeInOutExpo", "loopType", "None", "time", duration, "delay", .1, "oncomplete", "SetIsLow", "oncompleteparams", false);
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
        downHash = iTween.Hash("y", minHeight, "easeType", "easeInOutExpo", "loopType", "None", "time", duration, "delay", .1, "oncomplete", "SetIsLow", "oncompleteparams", true);
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
