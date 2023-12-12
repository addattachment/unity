using System.Collections;
using UnityEngine;
using TMPro;
using LSL;
using Unity.XR.PXR;

public class SwitchScene : MonoBehaviour
{
    private WsClient wsClient;
    private SceneMgr sceneMgr;
    [Header("next scene things")]
    [SerializeField] private TMP_Text buttonText;
    [SerializeField] private string currentScene = "Basescene";
    [SerializeField] private string nextScene = "Basescene";
    private PXR_ScreenFade screenFade;

    [Header("debug")]
    public bool testSwitch = false;
    //[SerializeField] GameObject[] hideObjectWhenNotNeeded;

    private void Start()
    {
        wsClient = WsClient.Instance;
        sceneMgr = SceneMgr.Instance;
    }

    private void Update()
    {
        if (testSwitch)
        {
            testSwitch = false;
            StartCoroutine(SwitchToScene());
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Hand"))
        {
            Debug.Log("Switching");
            GetComponent<BoxCollider>().enabled = false; // make sure we only touch once
            Switch();
        }
    }

    public void Switch()
    {
        StartCoroutine(SwitchToScene());

    }

    private IEnumerator SwitchToScene()
    {
        gameObject.GetComponent<Renderer>().material.SetColor("_BaseColor", Color.red);
        buttonText.SetText("op naar het volgende!");
        yield return new WaitForSeconds(1.5f);
        SwitchSceneEvent switchScene = new(nextScene);
        //crossFade.SetTrigger("Start");
        screenFade = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<PXR_ScreenFade>();
        yield return new WaitForSeconds(1f);
        screenFade.LaunchScreenFade();
        wsClient.SendWSMessage(switchScene.SaveToString());
        sceneMgr.SwitchScene(currentScene, nextScene);
        currentScene = sceneMgr.currentActiveScene;
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