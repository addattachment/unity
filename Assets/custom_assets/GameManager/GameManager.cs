using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using LSL;
using TrialNS;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    [SerializeField] private GameObject target;
    public bool gameDidStart = false;
    [Header("Gameplay mgmt")]
    public StateManager stateMGR;

    [Header("player settings")]

    //public Player activeParticipant;
    public bool playerSettingsAreSet = false;

    [Header("development settings")]
    [SerializeField] private bool restartBool = false;

    [Header("Trialsettings")]
    //public GameObject slingshotBall;
    public int ballsPerGame = 5;
    public bool trialListGenerated = false;
    [SerializeField] TrialList trialList;

    [Header("dataConnections")]
    [SerializeField] private OutletPassThrough lsl;
    [SerializeField] private WsClient ws;

    //[Header("GUI")]
    //[SerializeField] GameObject HUD;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }
    void Start()
    {
        ws = GameObject.FindGameObjectWithTag("ws").GetComponent<WsClient>();
        lsl = GameObject.FindGameObjectWithTag("lsl").GetComponent<OutletPassThrough>();
        stateMGR = GameObject.FindGameObjectWithTag("state").GetComponent<StateManager>();

    }

    private void Update()
    {
        if (restartBool)
        {
            RestartScene();
        }
    }
    public void SendSyncTime()
    {
        //TODO SendSyncTime blocks execution if no websocket available, set in different thread or just remove?
        //while (!ws.hasWsConnection) { }
        lsl.SendMarker(Marker.game_start);
        ws.SendWSMessage("message: game started");
    }

    public void SwitchScene(string sceneToLoad)
    {
        //string[] sceneList = {"BaseRotscene", "BasePolescene"};
        //var activeScene = SceneManager.GetActiveScene().name;
        //string sceneToLoad = 
        SceneManager.LoadScene(sceneToLoad);
    }
    public void RestartScene()
    {
        var activeScene = SceneManager.GetActiveScene().name;
        //SceneManager.UnloadScene("PlayerScene");
        //SceneManager.LoadScene("PlayerScene", LoadSceneMode.Additive);
        SceneManager.LoadScene(activeScene);
    }
   
    
}
