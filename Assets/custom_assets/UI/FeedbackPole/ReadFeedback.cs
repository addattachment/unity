using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

[RequireComponent(typeof(Appear))]
/// <summary>
/// Make sure to install the iTween package (free one)
/// This script lowers or raises the response button
/// </summary>
public class ReadFeedback : MonoBehaviour
{
    //[SerializeField] private Button button;
    [SerializeField] private Appear appear;

    [SerializeField] private BoxCollider boxColl;
    [Tooltip("not used at the moment")] public UnityEvent pushEvent;
    public bool isTouched = false;


    // Start is called before the first frame update
    void Start()
    {
        appear = GetComponent<Appear>();
        boxColl = GetComponent<BoxCollider>();
        if (pushEvent == null)
            pushEvent = new UnityEvent();
    }

    public void RaiseFeedbackPole()
    {
        Debug.Log("raise pole");
        appear.Raise();
        //button.interactable = true;
        boxColl.enabled = true;
    }


    public void LowerFeedbackPole()
    {
        Debug.Log("lower pole");

        appear.Lower();
        //button.interactable = false;
        boxColl.enabled = false;
        isTouched = true;
        //FunctionToExecute(m_methodToCall);
    }

    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log("Collided with " + collision.gameObject.name);
        if (collision.gameObject.CompareTag("Hand"))
        {
            LowerFeedbackPole();
            //pushEvent.Invoke();
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("triggered by " + other.gameObject.name);

        if (other.gameObject.CompareTag("Hand"))
        {
            LowerFeedbackPole();
            //pushEvent.Invoke();

        }
    }




}
