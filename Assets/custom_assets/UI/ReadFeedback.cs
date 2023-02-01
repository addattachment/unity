using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

/// <summary>
/// Make sure to install the iTween package (free one)
/// This script lowers or raises the response button
/// </summary>
public class ReadFeedback : MonoBehaviour
{
    [SerializeField] private float Height;
    [SerializeField] private Button button;
    //TEST bools
    public bool RaiseFeedback = false;
    public bool LowerFeedback = false;
    ////////
    private Hashtable upHash;
    private Hashtable downHash;
    [SerializeField] private BoxCollider boxColl;
    [Tooltip("not used at the moment")] public UnityEvent pushEvent;

    public delegate void TestDelegate();// This defines what type of method you're going to call.
    public TestDelegate m_methodToCall; // This is the variable holding the method you're going to call.
    // Start is called before the first frame update
    void Start()
    {
        upHash = iTween.Hash("y", Height, "easeType", "easeInOutExpo", "loopType", "None", "delay", .1);
        downHash = iTween.Hash("y", -Height, "easeType", "easeInOutExpo", "loopType", "None", "delay", .1);
        boxColl = GetComponent<BoxCollider>();
        if (pushEvent == null)
            pushEvent = new UnityEvent();
    }
    private void Test()
    {
        Debug.Log("The pole was pushed as a test and goes down now");
    }

    // Update is called once per frame
    void Update()
    {
        ////////////TEST
        if (RaiseFeedback)
        {
            RaiseFeedbackPole(Test);
            RaiseFeedback = false;
        }
        if (LowerFeedback)
        {
            LowerFeedbackPole();
            LowerFeedback = false;
        }
        //////////////////
    }

    public void RaiseFeedbackPole(TestDelegate method)
    {
        iTween.MoveBy(gameObject, upHash);
        button.interactable = true;
        boxColl.enabled = true;

        // load the function to execute once the button is pushed
        m_methodToCall = method;
    }

    public void LowerFeedbackPole()
    {
        iTween.MoveBy(gameObject, downHash);
        button.interactable = false;
        boxColl.enabled = false;
        FunctionToExecute(m_methodToCall);
    }

    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log("Collided with " + collision.gameObject.name);
        if (collision.gameObject.CompareTag("Hand"))
        {
            LowerFeedbackPole();
            pushEvent.Invoke();

        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("triggered by " + other.gameObject.name);

        if (other.gameObject.CompareTag("Hand"))
        {
            LowerFeedbackPole();
            pushEvent.Invoke();

        }
    }

    public void FunctionToExecute(TestDelegate method)
    {
        method();
    }
}
