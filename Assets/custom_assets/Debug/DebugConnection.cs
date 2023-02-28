using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class DebugConnection : MonoBehaviour
{
    [SerializeField] private TMP_Text debug;
    [SerializeField] bool testDebug = false;

    private List<string> debug_array;
    private int debug_arr_max_len = 8;

    // Use this for initialization
    void Start()
    {
        debug = GameObject.FindGameObjectWithTag("debug").GetComponentInChildren<TMPro.TMP_Text>();
        debug_array = new();
    }

    // Update is called once per frame
    void Update()
    {
        if (testDebug) debug.SetText("Debugger present");
    }


    /// <summary>
    /// Function to be able to display in game debug logs.
    /// a maximum amount of text is presented
    /// </summary>
    /// <param name="text"></param>
    public void SetDebugText(string text)
    {
        if (debug_array.Count <= debug_arr_max_len)
        {
            debug_array.Add(text);
        }
        else
        {
            debug_array.RemoveAt(0);
            debug_array.Add(text);
        }
        debug.SetText(string.Join("\r\n", debug_array));
    }



    /// <summary>
    /// snippet to use when implementing a slider in the UI, make sure the slider is not a child of other UI elements, as for some reason you can't interact anymore then.
    /// </summary>
    /// <param name="newValue"></param>
    public void ChangeSlider(float newValue)
    {
        Debug.Log("updating ChangeSlider" + newValue);

    }
}
