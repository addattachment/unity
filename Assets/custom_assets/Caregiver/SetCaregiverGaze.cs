using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations.Rigging;
public class SetCaregiverGaze : MonoBehaviour
{
    [SerializeField] GameObject lookTarget;
    private Vector3 startPos;
    [SerializeField] private GameObject followObject;
    [SerializeField] private bool follow = false;
    private void Start()
    {
        startPos = lookTarget.transform.position;
    }

    private void Update()
    {
        if (follow)
        {
            lookTarget.transform.position = followObject.transform.position;
        }
        else
        {
            lookTarget.transform.position = startPos;
        }
    }
    public void SetGaze(GameObject ball)
    {
        followObject = ball;
        follow = true;
    }

    public void ClearGaze()
    {
        follow = false;
        followObject = null;
    }
}
