using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lights : MonoBehaviour
{
    [SerializeField] private GameObject sun;
    [SerializeField] public GameObject trophySpotlight;
    [SerializeField] public GameObject caregiverLight;
    [SerializeField] private float spotlightOffset = 5.0f;
    private float maxSpotlightIntensity = 5.0f;
    private float maxCaregiverlightIntensity = 2.0f;
    private float maxLightIntensity = 5.0f;

    private void Start()
    {
        maxSpotlightIntensity = trophySpotlight.GetComponent<Light>().intensity;
        trophySpotlight.GetComponent<Light>().intensity = 0.0f;
        maxCaregiverlightIntensity = caregiverLight.GetComponent<Light>().intensity;
        caregiverLight.GetComponent<Light>().intensity = 0.0f;
    }

    public void MoveLight(GameObject floatAboveObject, GameObject light)
    {
        // place the spotlight above the object we want to look at
        Vector3 spotlightLocation = floatAboveObject.transform.position;
        spotlightLocation.y += spotlightOffset;
        light.transform.position = spotlightLocation;
    }
    /// <summary>
    /// 
    /// </summary>
    /// <param name="enabled"></param>
    /// <param name="focusLocation">location where we need to put the light ABOVE</param>
    public void EnableLight(bool enabled, GameObject light)
    {

        // enable or disable the light
        Hashtable ht;
        string functionToCall = "SetTrophyLightIntensity";
        if (light == trophySpotlight)
        {
            functionToCall = "SetTrophyLightIntensity";
            maxLightIntensity = maxSpotlightIntensity;
         }
        if(light == caregiverLight)
        {
            functionToCall = "SetCaregiverLightIntensity";
            maxLightIntensity = maxCaregiverlightIntensity;
        }
        if (enabled)
        {
            ht = iTween.Hash("from", 0, "to", maxLightIntensity, "time", .2f, "onupdatetarget", gameObject, "onupdate", functionToCall);
        }
        else
        {
            ht = iTween.Hash("from", maxLightIntensity, "to", 0.0f, "time", 1.0f, "onupdatetarget", gameObject, "onupdate", functionToCall);
        }
        iTween.ValueTo(light, ht);
    }

    private void SetCaregiverLightIntensity(float newVal)//, GameObject light)
    {
        caregiverLight.GetComponent<Light>().intensity = newVal;
    } 
    private void SetTrophyLightIntensity(float newVal)//, GameObject light)
    {
        trophySpotlight.GetComponent<Light>().intensity = newVal;
    }
    public void EnableSunlight(bool enabled)
    {
        sun.SetActive(enabled);
    }
    public void SpotFollow(Vector3 followLocation, GameObject spotlight)
    {
        Hashtable spotHt = iTween.Hash("looktarget", followLocation, "delay", 0.1f, "time", 1.0f, "easetype", "easeInOutExpo");
        iTween.LookTo(spotlight, spotHt);
    }
}
