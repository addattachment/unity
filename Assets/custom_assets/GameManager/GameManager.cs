using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance;

    public bool gameDidStart = false;

    [Header("Scene settings")]
    public bool aSceneIsLoaded = false;

    [Header("player settings")]
    public bool playerValuesAreUpdated = false;
    public bool playerContingencySet = false;
    public bool NPCShootsBall = false;
    public bool newNameSet = false;

    [Header("development settings")]
    public bool allMust = false;
    public bool developmentMode = true;
    public bool useTestingDataset = false;

    [Header("tutorial settings")]
    public bool isTutorial; // if tutorial is true, we only have 1 trial with 'good' chances of scoring

    [Header("Trialsettings")]
    public int ballsPerGame = 5;
    public bool trialListGenerated = false;
    public bool doFakeLaunch = false;


    [Header("dataConnections")]
    public bool playerValsReceivedViaWS = false;

    [Header("countdown stateMgr bools")]

    [Header("trial stateMgr bools")]
    public bool startTrial = false;
    public bool toPostTrial = false;
    public bool done = false;
    public bool ballIsShot = false;
    public bool trialIsRunning = false;
    public bool trialListFinished = false;
    public int currentTrial = 0;
    public bool endMessagesSend = false;

    [Header("trophy stateMgr bools")]
    public bool trophyMayAppear = false;
    public bool mayPrep = false;
    public bool canLaunch = false;
    public bool didShoot = false;
    public bool MayGiveTrophy = false;
    public bool trophyIsGiven = false;

    [Header("caregiver stateMgr bools")]
    public bool didReadFeedback = false;
    public bool didGiveScore = false;
    public bool mustGiveFeedback = false;
    public bool toFinalScoring = false; // bool to indicate that the game has ended, and we need to give once more a scoring of the caregiver
    public bool enableScoring = false; // check so we can't start scoring too soon
    [Header("ball stateMgr bools")]
    public bool isInitiated = false;
    [Header("light bools")]
    public bool LightIsSet = false;


    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }
    void Start()
    {
    }

    private void Update()
    {


    }
    //public void SendSyncTime()
    //{
    //    //TODO SendSyncTime blocks execution if no websocket available, set in different thread or just remove?
    //    //while (!ws.hasWsConnection) { }
    //    lsl.SendMarker(Marker.game_start);
    //    ws.SendWSMessage("message: game started");
    //}

    //public void SwitchScene(string sceneToLoad)
    //{
    //    //string[] sceneList = {"BaseRotscene", "BasePolescene"};
    //    //var activeScene = SceneManager.GetActiveScene().name;
    //    //string sceneToLoad = 
    //    SceneManager.UnloadSceneAsync(SceneManager.GetActiveScene());
    //    SceneManager.LoadSceneAsync(sceneToLoad, LoadSceneMode.Additive);
    //}
    //public void RestartScene()
    //{
    //    var activeScene = SceneManager.GetActiveScene().name;
    //    //SceneManager.UnloadScene("PlayerScene");
    //    //SceneManager.LoadScene("PlayerScene", LoadSceneMode.Additive);
    //    SceneManager.LoadScene(activeScene);
    //}


}
