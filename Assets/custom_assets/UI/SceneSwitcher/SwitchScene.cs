using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SwitchScene : MonoBehaviour
{
    [SerializeField] private GameManager gameManager;
    [SerializeField] private TMP_Text buttonText;
    [SerializeField] private string nextScene = "Basescene";
    [SerializeField] WsClient wsClient;
    [SerializeField] Animator crossFade;

    [SerializeField] GameObject[] hideObjectWhenNotNeeded;

    private void Start()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Hand"))
        {
            StartCoroutine(SwitchToScene());
        }
    }

    private IEnumerator SwitchToScene()
    {
        gameObject.GetComponent<Renderer>().material.SetColor("_BaseColor", Color.red);
        buttonText.SetText("op naar het volgende!");
        yield return new WaitForSeconds(1.5f);
        SwitchSceneEvent switchScene= new(nextScene);
        wsClient.SendWSMessage(switchScene.SaveToString());
        crossFade.SetTrigger("Start");
        yield return new WaitForSeconds(1f);
        gameManager.SwitchScene(nextScene);
        //Initiate.Fade(nextScene, Color.black, 1.0f);
    }
}

public class SwitchSceneEvent
{
    public string websocketMessage = "switch scene to";
    public string newScene;
    public float _time;
    public SwitchSceneEvent(string newScene)
    {
        this.newScene = newScene;
    }

    public string SaveToString()
    {
        _time = Time.time;
        return JsonUtility.ToJson(this);
    }
}