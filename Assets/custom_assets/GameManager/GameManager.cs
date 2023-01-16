using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using LSL;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    //[SerializeField] private Slingshot slingshot;
    //[SerializeField] private GameObject slingshotHook;
    [SerializeField] private GameObject target;
    //[SerializeField] private List<GameObject> targetList;
    //[SerializeField] private GameObject[] targetList;
    [SerializeField] private TargetGroup targetGroup;
    [SerializeField] private Player player;
    [SerializeField] private Player NPC;
    [SerializeField] Player activeParticipant;
    [SerializeField] private bool restartBool = false;
    [SerializeField] private bool switchPlayer = false;
    private GameObject instBall;

    [Header("Trialsettings")]
    public GameObject slingshotBall;

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
        targetGroup = FindObjectOfType<TargetGroup>();
        //int level = SceneManager.GetActiveScene().buildIndex;
        //HighscoreText.text = GetHighscore(level).ToString();
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
        NPC = GameObject.FindGameObjectWithTag("NPC").GetComponent<Player>();
        StartNewTrial();
        SendSyncTime();
    }

    private void Update()
    {
        if (restartBool)
        {
            RestartScene();
        }
        if (switchPlayer)
        {
            switchPlayer = false;
            SwitchPlayer();
        }
    }
    private void SendSyncTime()
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
    public void StartNewTrial()
    {
        player.amountOfBallsInTrial = 5;
        NPC.amountOfBallsInTrial = 5;
        player.SetActive(true);
        NPC.SetActive(false);
        activeParticipant = player.isActivePlayer ? player : NPC; // see who is the active player to get a new ball
        targetGroup.UpdateDirections();
        PrepNewShootingTurn();
    }

    public void PrepNewShootingTurn()
    {
        var slingshot = activeParticipant.slingshot;
        var slingshotHook = slingshot.GetHook();
        activeParticipant.amountOfBallsInTrial--;
        if (activeParticipant.amountOfBallsInTrial > 0)
        {
            // Make sure we can detect collisions by the new bullet (only once!)
            target.GetComponent<Targets>().readyForHit = true;
            // Set the new target
            targetGroup.SetNewHitTarget();

            // Instantiate the new bullet and it's colors
            instBall = Instantiate(slingshotBall, slingshotHook.transform.position, Quaternion.identity, slingshot.transform);
            instBall.GetComponent<Renderer>().material = targetGroup.hitTarget.GetComponent<Renderer>().material;
            instBall.GetComponent<TrailRenderer>().material.color = targetGroup.hitTarget.GetComponent<Renderer>().material.color;
            slingshot.Ball = instBall;
        }
    }

    public void SwitchPlayer()
    {
        //temp adaptation while only 1 player
        player.SetActive(!player.isActivePlayer);// ;
        NPC.SetActive(!NPC.isActivePlayer);//  ;
        activeParticipant = player.isActivePlayer ? player : NPC; // see who is the active player to get a new ball
    }
}
