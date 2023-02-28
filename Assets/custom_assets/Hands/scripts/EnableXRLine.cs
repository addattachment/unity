using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.UI;

public class EnableXRLine : MonoBehaviour
{
    [SerializeField] private XRInteractorLineVisual xrLine;
    [SerializeField] private TrackedDeviceGraphicRaycaster xrRay;
    [SerializeField, Range(0.0f, 20.0f)] float maxLineLength = 10.0f;
    [SerializeField] string[] enableLineTags = { "debug" };
    [SerializeField] bool testLineLength = false;
    //[SerializeField] private DebugConnection debug_text;
    PointerEventData m_PointerEventData;
    EventSystem m_EventSystem;
    // Use this for initialization
    void Start()
    {
        xrLine = GetComponent<XRInteractorLineVisual>();
        xrRay = GetComponent<TrackedDeviceGraphicRaycaster>();
        //debug_text = GameObject.FindGameObjectWithTag("debug").GetComponentInChildren<DebugConnection>();
    }

    // Update is called once per frame
    void Update()
    {
        if (testLineLength)
        {
            xrLine.lineLength = maxLineLength;
        }
        else
        {
            xrLine.lineLength = 0.0f;
        }
    }

    public void EnableLine(bool enable)
    {
        //RaycastHit rayHit;
        //debug_text.SetDebugText("enable line " + enable);
        if (enable)
        {
            bool res = false;
            //Set up the new Pointer Event
            m_PointerEventData = new PointerEventData(m_EventSystem);
            //Set the Pointer Event Position to that of the mouse position
            m_PointerEventData.position = Input.mousePosition;

            //Create a list of Raycast Results
            List<RaycastResult> results = new List<RaycastResult>();

            xrRay.Raycast(m_PointerEventData, results);
            foreach (RaycastResult _res in results)
            {
                //debug_text.SetDebugText("raycast hit by " + _res.gameObject.name);
                foreach (string i in enableLineTags)
                {
                    if (_res.gameObject.CompareTag(i))
                    {
                        res = true;
                    }
                }
            }
            if (res)
            {
                xrLine.lineLength = maxLineLength;
            }
        }
        else
        {
            xrLine.lineLength = 0.0f;
        }
    }
}
