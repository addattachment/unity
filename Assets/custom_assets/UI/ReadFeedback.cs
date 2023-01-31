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
    public bool RaiseFeedback = false;
    public bool LowerFeedback = false;
    private Hashtable upHash;
    private Hashtable downHash;
    [SerializeField] private BoxCollider boxColl;
    public UnityEvent pushEvent;
    // Start is called before the first frame update
    void Start()
    {
        upHash = iTween.Hash("y", Height, "easeType", "easeInOutExpo", "loopType", "None", "delay", .1);
        downHash = iTween.Hash("y", -Height, "easeType", "easeInOutExpo", "loopType", "None", "delay", .1);
        boxColl = GetComponent<BoxCollider>();
        if (pushEvent == null)
            pushEvent = new UnityEvent();
    }

    // Update is called once per frame
    void Update()
    {
        if (RaiseFeedback)
        {
            RaiseFeedbackPole();
            RaiseFeedback = false;
        }
        if (LowerFeedback)
        {
            LowerFeedbackPole();
            LowerFeedback = false;
        }
    }

    public void RaiseFeedbackPole()
    {
        iTween.MoveBy(gameObject, upHash);
        button.interactable = true;
        boxColl.enabled = true;

    }

    public void LowerFeedbackPole()
    {
        iTween.MoveBy(gameObject, downHash);
        button.interactable = false;
        boxColl.enabled = false;
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
}
