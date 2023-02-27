using System.Collections;
using UnityEngine;

public class Floor : MonoBehaviour
{
    private Material floorMat;
    [SerializeField] private Color scoreColor;
    [SerializeField] private Color missColor;
    [SerializeField] private Color neutralColor;
    [SerializeField] private bool useTween;

    private Color floorColor;
    [Header("test bools")]
    [SerializeField] private bool testRed;
    [SerializeField] private bool testGreen;
    private Hashtable htUp;
    private Hashtable htDown;
    private void Start()
    {
        floorMat = GetComponent<Renderer>().material;
        floorMat.SetColor("_EmissionColor", neutralColor);
    }
    private void Update()
    {
        if (testRed)
        {
            testRed = false;
            SetFloorIllumination(false);
        }
        if (testGreen)
        {
            testGreen = false;
            SetFloorIllumination(true);
        }
    }
    public void SetFloorIllumination(bool score)
    {

        if (score)
        {
            floorColor = scoreColor;
        }
        else
        {
            floorColor = missColor;
        }
        if (useTween)
        {
            Tween1();
        }
        else
        {
            StartCoroutine(Blink());
        }
    }

    private IEnumerator Blink()
    {
        SetColor(floorColor);
        yield return new WaitForSeconds(0.25f);
        SetColor(neutralColor);
        yield return new WaitForSeconds(0.25f);
        SetColor(floorColor);
        yield return new WaitForSeconds(0.25f);
        SetColor(neutralColor);
        yield return new WaitForSeconds(0.25f);
    }

    private void Tween1()
    {
        htUp = iTween.Hash("name", "floorIllumination", "from", neutralColor, "to", floorColor, "easeType", "easeInCubic", "time", 0.3f, "onupdate", "SetColor", "oncomplete", "Tween2");
        iTween.ValueTo(gameObject, htUp);
    }
    private void Tween2()
    {
        htDown = iTween.Hash("name", "floorIllumination", "from", floorColor, "to", neutralColor, "easeType", "easeInCubic", "time", 0.3f, "onupdate", "SetColor");//, "oncomplete", "Tween3");
        iTween.ValueTo(gameObject, htDown);
    }


    private void SetColor(Color _color)
    {
        floorMat.SetColor("_EmissionColor", _color);
    }
}
