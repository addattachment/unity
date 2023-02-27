using System.Collections;
using UnityEngine;

[RequireComponent(typeof(Light))]
public class LightingScripts : MonoBehaviour
{
    [SerializeField] private float lightVerticalOffset = 5.0f;
    private float maxLightIntensity = 5.0f;

    private void Start()
    {
        maxLightIntensity = GetComponent<Light>().intensity;
        GetComponent<Light>().intensity = 0.0f;
    }

    public void MoveLight(GameObject floatAboveObject, GameObject light)
    {
        // place the spotlight above the object we want to look at
        Vector3 floatingLightLocation = floatAboveObject.transform.position;
        floatingLightLocation.y += lightVerticalOffset;
        light.transform.position = floatingLightLocation;
    }
    /// <summary>
    /// 
    /// </summary>
    /// <param name="enabled"></param>
    /// <param name="focusLocation">location where we need to put the light ABOVE</param>
    public void EnableLight(bool enabled)
    {

        // enable or disable the light
        Hashtable ht;
        if (enabled)
        {
            ht = iTween.Hash("from", 0, "to", maxLightIntensity, "time", .2f, "onupdatetarget", gameObject, "onupdate", "SetLightIntensity");
        }
        else
        {
            ht = iTween.Hash("from", maxLightIntensity, "to", 0.0f, "time", 1.0f, "onupdatetarget", gameObject, "onupdate", "SetLightIntensity");
        }
        iTween.ValueTo(gameObject, ht);
    }

    private void SetLightIntensity(float newVal)//, GameObject light)
    {
        GetComponent<Light>().intensity = newVal;
    }


    public void SpotFollow(Vector3 followLocation)
    {
        Hashtable fopllowHt = iTween.Hash("looktarget", followLocation, "delay", 0.1f, "time", 2.5f, "easetype", "easeInOutExpo");
        iTween.LookTo(gameObject, fopllowHt);
    }
}
