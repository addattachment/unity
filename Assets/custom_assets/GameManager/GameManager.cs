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
    [SerializeField] private TargetGroup targetGroup;
    public bool gameDidStart = false;

    [Header("player settings")]
    [SerializeField] private Player player;
    [SerializeField] private Player NPC;
    [SerializeField] Player activeParticipant;
    public bool playerSettingsAreSet = false;

    [Header("development settings")]
    [SerializeField] private bool restartBool = false;
    [SerializeField] private bool switchPlayer = false;
    private GameObject instBall;

    [Header("Trialsettings")]
    public GameObject slingshotBall;
    [SerializeField] private int ballsPerGame = 5;
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
        targetGroup = FindObjectOfType<TargetGroup>();
        //int level = SceneManager.GetActiveScene().buildIndex;
        //HighscoreText.text = GetHighscore(level).ToString();
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
        NPC = GameObject.FindGameObjectWithTag("NPC").GetComponent<Player>();


    }

    private void Update()
    {
        if ((gameDidStart == false) && (trialListGenerated == true))
        {
            gameDidStart = true;
            StartNewTrial();
            SendSyncTime();
        }
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
        player.amountOfBallsInTrial = ballsPerGame;
        NPC.amountOfBallsInTrial = ballsPerGame;
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
        //float chanceForMustReachtarget = 0.5f; // we'll vary this value

        SetPlayerScoringChance(slingshot);

        activeParticipant.amountOfBallsInTrial--;
        if (activeParticipant.amountOfBallsInTrial >= 0)
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

    /// <summary>
    /// sets the ReachtargetEnum of the active slingshot
    /// we use a random float to have variation within a trial
    /// </summary>
    /// <param name="slingshot"></param>
    private void SetPlayerScoringChance(Slingshot slingshot)
    {
        float guess = Random.Range(0.0f, 1.0f);
        Trial currentTrial = trialList.GetCurrentTrial();

        if (currentTrial.IsGoodTrial() == true)
        {
            // NPC has 50% chance of scoring
            // Player has 20% of balls which are steered towards target

            if (activeParticipant.isRealPlayer)
            {
                // have a chance that the ball must hit the target
                // equal chance must vs may?
                if (guess >= 0.8f)
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.must);
                }
                else
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.may);
                }
            }
            else
            {
                // equal or less chance of scoring than human player??
                // equal chance must vs mustn
                if (guess >= 0.5f)
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.must);
                }
                else
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.mayNPC);
                }
            }
        }
        else
        {
            // NPC 60% chance of scoring
            // player max random[20-50%] chance of scoring
            if (player.isRealPlayer)
            {
                // have a low chance that the ball must hit the target 
                // most of the time it should be musn't, sometimes may
                if (guess >= Random.Range(0.2f, 0.5f))
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.may);
                }
                else
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.musnt);
                }
            }
            else
            {
                // equal or less chance of scoring than human player??
                // most of the time should be must, sometimes may
                if (guess >= 0.4f)
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.must);
                }
                else
                {
                    slingshot.SetTargetReachable(reachEnum: ReachTargetEnum.mayNPC);
                }
            }
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
