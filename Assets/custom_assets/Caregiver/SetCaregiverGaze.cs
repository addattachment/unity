using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations.Rigging;
public class SetCaregiverGaze : MonoBehaviour
{
    [SerializeField] GameObject lookTarget;
    private Vector3 startPos;
    [SerializeField] private GameObject followObject;
    public bool follow = false;
    private void Start()
    {
        startPos = lookTarget.transform.position;
    }

    private void Update()
    {
        // we want to move the looktarget, as it is in a look constraint of the head of the caregiver;
        if (followObject != null)
        {
                lookTarget.transform.position = followObject.transform.position;
        }
    }
    public void SetGaze(GameObject followObj)
    {
        followObject = followObj;
        follow = true;
    }

    public void ClearGaze()
    {
        follow = false;
        followObject = null;
        Hashtable ht = iTween.Hash("position", startPos, "easeType", "easeInOutExpo", "delay", 0.1f, "time", 1.0f,"oncompletetarget", gameObject);
        // move trophy to winner
        iTween.MoveTo(lookTarget, ht);
        //lookTarget.transform.position = startPos;
    }


}
