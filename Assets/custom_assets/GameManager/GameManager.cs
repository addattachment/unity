using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using LSL;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    [SerializeField] private Slingshot slingshot;
    [SerializeField] private GameObject slingshotHook;
    [SerializeField] private GameObject target;
    //[SerializeField] private List<GameObject> targetList;
    [SerializeField] private GameObject[] targetList;

    [SerializeField] private Player player;
    [SerializeField] private Player NPC;
    [SerializeField] private bool restartBool = false;
    private GameObject instBall;

    [Header("Trialsettings")]
    public GameObject slingshotBall;
    
    public GameObject hitTarget;
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
        InitTargets();
        slingshot = GameObject.FindGameObjectWithTag("slingshot").GetComponent<Slingshot>();
        slingshotHook = slingshot.getHook();
        //int level = SceneManager.GetActiveScene().buildIndex;
        //HighscoreText.text = GetHighscore(level).ToString();
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
        NPC = GameObject.FindGameObjectWithTag("NPC").GetComponent<Player>();
        StartNewTrial();
        SendSyncTime();

    }

    private void SendSyncTime()
    {
//TODO SendSyncTime blocks execution if no websocket available, set in different thread or just remove?
        //while (!ws.hasWsConnection) { }
        lsl.SendMarker(Marker.game_start);
        ws.SendWSMessage("message: game started");
    }

    private void InitTargets()
    {
        targetList = GameObject.FindGameObjectsWithTag("subTarget");
        //foreach (Transform x in target.transform)
        //{
        //    targetList.Add(x.gameObject);
        //}
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
        player.isActivePlayer = true;
        NPC.isActivePlayer = false;
        SetNewBall();
    }

    public void SetNewBall()
    {
        Player activeParticipant = player.isActivePlayer ? player : NPC; // see who is the active player to get a new ball
        activeParticipant.amountOfBallsInTrial--;
        if (activeParticipant.amountOfBallsInTrial > 0)
        {
            // Make sure we can detect collisions by the new bullet (only once!)
            target.GetComponent<Targets>().readyForHit = true;
            // Instantiate the new bullet
            instBall = Instantiate(slingshotBall, slingshotHook.transform.position, Quaternion.identity, slingshot.transform);
            if (targetList.Length > 0)
            {
                hitTarget = targetList[Random.Range(0, targetList.Length)];
                instBall.GetComponent<Renderer>().material = hitTarget.GetComponent<Renderer>().material;
                instBall.GetComponent<TrailRenderer>().material.color = hitTarget.GetComponent<Renderer>().material.color;
                foreach (GameObject target in targetList)
                {
                    if (target == hitTarget)
                    {
                        target.GetComponent<TargetHit>().SetActiveTarget(true);
                    }
                    else target.GetComponent<TargetHit>().SetActiveTarget(false);
                }
            }
            slingshot.Ball = instBall;
        }
    }

    public void SwitchPlayer()
    {
        //temp adaptation while only 1 player
        player.isActivePlayer = true;// !player.isActivePlayer;
        NPC.isActivePlayer = false;//  !NPC.isActivePlayer;
    }

    private void Update()
    {
        if (restartBool)
        {
            RestartScene();
        }
    }

}
