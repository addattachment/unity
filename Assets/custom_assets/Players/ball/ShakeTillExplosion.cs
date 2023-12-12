using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShakeTillExplosion : MonoBehaviour
{

    [SerializeField] private Ball ballScript;
    [SerializeField] private Vector3 startScaleAmount = new(1.45f, 1.45f, 1.45f);
    [SerializeField] private float startDelay = 1.0f;
    [SerializeField] private int amountOfShakes = 3;
    [SerializeField] private float delayBetweenWarnings = 2.0f;

    [SerializeField] private Material[] colorList;
    [SerializeField] private AudioSource warningSound;

    // Start is called before the first frame update
    void Start()
    {
        ballScript = GetComponentInParent<Ball>();
        //if (ballScript.slingShot.player.isRealPlayer)
        //{
        StartCoroutine(StartInstabilitySequence());
        //}
    }

    // Update is called once per frame
    void Update()
    {

    }

    private IEnumerator StartInstabilitySequence()
    {
        yield return new WaitForSeconds(startDelay);
        Vector3 startScale = gameObject.transform.localScale;
        for (int i = 0; i < amountOfShakes; i++)
        {
            if (ballScript.ballIsReleased)
            {
                // if we've shot the ball we don't want to use the warning flow anymore
                yield break;
            }
            // adapt the color of the warning circle
            GetComponent<Renderer>().material.SetColor("_EmissionColor", colorList[i].color);
            GetComponent<Renderer>().material.SetColor("_BaseColor", colorList[i].color);
            // adapt the scaling
            Hashtable shaker = iTween.Hash("scale", startScaleAmount, "time", 0.8f, "easetype", "easeInOutExpo", "onstart", "WarningSound");//, "looptype", "pingPong");
            iTween.ScaleTo(gameObject, shaker);
            Hashtable shakerBack = iTween.Hash("scale", startScale, "delay", 0.8f, "time", 0.3f, "easetype", "easeInOutExpo");//, "looptype", "pingPong");
            iTween.ScaleTo(gameObject, shakerBack);
            yield return new WaitForSeconds(delayBetweenWarnings);
        }
        if (ballScript.ballIsReleased)
        {
            // if we've shot the ball we don't want to use the warning flow anymore
            yield break;
        }
        Hashtable shrinker = iTween.Hash("scale", new Vector3(0.0f, 0.0f, 0.0f), "time", 0.8f, "easetype", "easeInOutExpo", "onstart", "BallGetsRemovedSound", "oncomplete", "DestroyBeforeShooting");//, "looptype", "pingPong");
        iTween.ScaleTo(transform.parent.gameObject, shrinker);
    }

    private void WarningSound()
    {
        warningSound.Play();
    }


}
