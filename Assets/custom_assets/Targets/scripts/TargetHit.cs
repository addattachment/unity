using System.Collections;
using UnityEngine;
public class TargetHit : MonoBehaviour
{
    public bool activeTarget = false; // if activeTarget is true, this is the targets to hitSuccesGuid
    private Hashtable htUp;
    private Hashtable htDown;
    [SerializeField] private Color baseColor;
    [SerializeField] private float emissionMaxIntensity = 10.0f;
    [SerializeField] private float emissionMinIntensity = 3.0f;
    private void Start()
    {
        baseColor = GetComponent<Renderer>().material.GetColor("_BaseColor");
    }
    public void SetActiveTarget(bool active)
    {
        activeTarget = active;
    }

    public void LitTarget()
    {
        Tween1();
    }

    private void Tween1()
    {
        htUp = iTween.Hash("name", "floorIllumination", "from", baseColor * emissionMinIntensity, "to", baseColor * emissionMaxIntensity, "easeType", "easeInCubic", "time", 0.2f, "onupdate", "SetColor", "oncomplete", "Tween2");
        iTween.ValueTo(gameObject, htUp);
    }
    private void Tween2()
    {
        htDown = iTween.Hash("name", "floorIllumination", "from", baseColor * emissionMaxIntensity, "to", baseColor * emissionMinIntensity, "easeType", "easeInCubic", "time", 0.2f, "onupdate", "SetColor");//, "oncomplete", "Tween3");
        iTween.ValueTo(gameObject, htDown);
    }

    private void SetColor(Color _color)
    {
        GetComponent<Renderer>().material.SetColor("_EmissionColor", _color);
    }
}
