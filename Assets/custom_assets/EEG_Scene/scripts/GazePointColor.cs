using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(GazePointHover)), RequireComponent(typeof(EEGGaze))]
public class GazePointColor : MonoBehaviour
{
    [SerializeField] private Color gazeColor;
    [SerializeField] private Color noGazeColor;
    [SerializeField] private GameObject renderSphere;
    private EEGGaze gazed;
    private bool isSeen = false;
    private Material _mat;

    [Header("debug")]
    [SerializeField] private bool testGaze = false;
    [SerializeField] private bool testNoGaze = false;
    private bool switching = false;
    private Hashtable htOn;
    private Hashtable htOff;
    void Start()
    {
        gazed = GetComponent<EEGGaze>();
        _mat = renderSphere.GetComponent<Renderer>().material;
        _mat.SetColor("_EmissionColor", noGazeColor);
        htOn = iTween.Hash("name", "gazecolor", "from", noGazeColor, "to", gazeColor, "time", 0.4f, "onupdate", "UpdateColor"); ;
        htOff = iTween.Hash("name", "gazecolor", "from", gazeColor, "to", noGazeColor, "time", 0.4f, "onupdate", "UpdateColor"); ;
    }

    // Update is called once per frame
    void Update()
    {

        if (gazed.inFocus & !isSeen)
        {
            isSeen = gazed.inFocus;
            iTween.ValueTo(gameObject, htOn);
        }
        if (!gazed.inFocus & isSeen)
        {
            isSeen = gazed.inFocus;
            iTween.ValueTo(gameObject, htOff);
        }

        if (testGaze)
        {
            testGaze = false;
            iTween.ValueTo(gameObject, htOn);
        } 
        if (testNoGaze)
        {
            testNoGaze = false;
            iTween.ValueTo(gameObject, htOff);

        }
    }
    private void UpdateColor(Color c)
    {
        _mat.SetColor("_EmissionColor", c);
    }


}
