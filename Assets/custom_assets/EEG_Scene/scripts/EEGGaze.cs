using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Tobii.G2OM;
public class EEGGazeEvent
{
    public string websocketMessage = "eeggaze";
    public float gazePercentage;
    public float _time;
    public EEGGazeEvent(float gazePerc)
    {
        this.gazePercentage = gazePerc;
    }

    public string SaveToString()
    {
        _time = Time.time;
        return JsonUtility.ToJson(this);
    }
}

public class EEGGaze : MonoBehaviour, IGazeFocusable
{
    [SerializeField] private WsClient ws;
    public bool inFocus = false;
    private float _timer = 0.0f; // timer to keep track of total time
    private float _inFocusTimer = 0.0f; // timer to keep track of time when we're looking at the gaze element

    public void GazeFocusChanged(bool hasFocus)
    {
        inFocus = hasFocus;
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        _timer += Time.deltaTime;
        if (inFocus) _inFocusTimer += Time.deltaTime;
    }

    public void FinishEEGGaze()
    {
        EEGGazeEvent eegGaze = new(_inFocusTimer / _timer);

        ws.SendWSMessage(eegGaze.SaveToString());

    }
}
