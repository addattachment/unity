using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Tobii.G2OM;

public class GazeEvent
{
    public int trialNumber;
    public string websocketMessage = "gaze";
    public string targetName;
    public bool gazeStart;
    public float _time;
    public GazeEvent(string targetName)
    {
        this.targetName = targetName;
    }

    public string SaveToString()
    {
        _time = Time.time;
        return JsonUtility.ToJson(this);
    }
}
public class Gazed : MonoBehaviour, IGazeFocusable
{
    [SerializeField, Tooltip("either caregiver or NPC")] private string objectName = "caregiver"; // or "NPC"
    [SerializeField] private DebugConnection debug_text;
    [SerializeField] private WsClient ws;
    [SerializeField] private GameManager gameManager;
    private GazeEvent gazeEvent;
    /// <summary>
    /// GazeFocus only gets called on the change
    /// </summary>
    /// <param name="hasFocus"></param>
    public void GazeFocusChanged(bool hasFocus)
    {
        //debug_text.SetDebugText("gaze focus " + hasFocus + " " + Time.time);
        gazeEvent.gazeStart = hasFocus;
        gazeEvent.trialNumber = gameManager.currentTrial;
        ws.SendWSMessage(gazeEvent.SaveToString());
    }

    // Start is called before the first frame update
    void Start()
    {
        debug_text = GameObject.FindGameObjectWithTag("debug")
                       .GetComponentInChildren<DebugConnection>();
        gazeEvent = new(objectName);
    }

    // Update is called once per frame
    void Update()
    {

    }
}
