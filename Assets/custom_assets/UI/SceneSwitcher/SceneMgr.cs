using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using LSL;

public class SceneMgr : MonoBehaviour
{
    private GameManager gameManager;
    [SerializeField] string baseScene = "BaseScene";
    [SerializeField] string tutorialShootingScene = "TutShootingScene";
    [SerializeField] string caregiverIntroScene = "CaregiverIntroScene";
    [SerializeField] string gameScene = "GameScene";
    public string currentActiveScene;
    private bool isLoading = false;
    [Header("Debug")]
    [SerializeField] private bool restartBool = false;

    #region SingletonPattern
    private static SceneMgr _instance;
    public static SceneMgr Instance
    {
        get
        {
            if (_instance == null)
            {
                Debug.Log("The SceneMgr is Null");
            }
            return _instance;
        }
    }
    private void Awake()
    {
        _instance = this;
    }
    #endregion

    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameManager.Instance;
        SceneManager.sceneUnloaded += OnSceneUnloaded;
        SceneManager.sceneLoaded += OnSceneLoaded;

        if (!IsAnAdditiveGameSceneLoaded())
        {
            Debug.Log("Loading first scene");
            LoadNewScene("TutShootingScene");
        }
    }

    private bool IsAnAdditiveGameSceneLoaded()
    {
        bool found = false;
        for (int i = 0; i < SceneManager.sceneCount; i++)
        {
            string sceneName = SceneManager.GetSceneAt(i).name;
            if (sceneName == tutorialShootingScene || sceneName == caregiverIntroScene || sceneName == gameScene)
            {
                if (SceneManager.GetSceneAt(i).isLoaded)
                {
                    SceneManager.SetActiveScene(SceneManager.GetSceneAt(i));
                    found = true;
                    SetSceneVariables(SceneManager.GetSceneAt(i).name);
                }
            }
        }
        return found;
    }

    // Update is called once per frame
    void Update()
    {
        if (!gameManager.aSceneIsLoaded && IsAnAdditiveGameSceneLoaded())
        {
            gameManager.aSceneIsLoaded = true;
        }
        if (restartBool)
        {
            RestartScene();
        }
    }
    public void SwitchScene(string sceneToUnload, string sceneToLoad)
    {
        //Debug.Log("not loading so switching");
        if (!isLoading)
        {
            isLoading = true;
            SceneManager.UnloadSceneAsync(sceneToUnload);

            LoadNewScene(sceneToLoad);
        }
        else
        {
            Debug.Log("Was already loading new scene");
        }
    }

    private void LoadNewScene(string sceneToLoad)
    {
        sceneToLoad = SetSceneVariables(sceneToLoad); // we return sceneToLoad, if we want to alter the course of the scene that needs to be loaded
        SceneManager.LoadSceneAsync(sceneToLoad, LoadSceneMode.Additive);
        currentActiveScene = sceneToLoad;
    }

    private string SetSceneVariables(string sceneToLoad)
    {
        Debug.Log("Switching to " + sceneToLoad);
        switch (sceneToLoad)
        {
            case "TutShootingScene":
                gameManager.isTutorial = true;
                gameManager.currentTrial = 0;
                break;
            case "CaregiverIntroScene":
                gameManager.isTutorial = true;
                break;
            case "GameScene":
                if (gameManager.caregiverBaseLineGiven == false)
                {
                    Debug.Log("instead loading the caregiver scene again");
                    gameManager.isTutorial = true;
                    return "CaregiverIntroScene";
                }
                gameManager.isTutorial = false;
                gameManager.trialListGenerated = false; // we opt for a renewed triallist generation
                gameManager.currentTrial = WsClient.Instance.playerVals.trial_number;
                OutletPassThrough.Instance.SendMarker(Marker.game_start);
                break;
            default:
                break;
        }
        return sceneToLoad;

    }
    public void RestartScene()
    {
        //var activeScene = SceneManager.GetActiveScene().name;
        //SceneManager.UnloadScene("PlayerScene");
        //SceneManager.LoadScene("PlayerScene", LoadSceneMode.Additive);
        SceneManager.LoadScene(currentActiveScene);
    }

    private void OnSceneUnloaded(Scene current)
    {
        //Debug.Log("OnSceneUnloaded: " + current);
    }
    void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        //Debug.Log("OnSceneLoaded: " + scene.name);
        //Debug.Log(mode);
        isLoading = false;
    }

    // called when the game is terminated
    void OnDisable()
    {
        //Debug.Log("OnDisable");
        SceneManager.sceneLoaded -= OnSceneLoaded;
        SceneManager.sceneUnloaded -= OnSceneUnloaded;

    }

    void OnDestroy()
    {
        //Debug.Log("OnDestroy");
        SceneManager.sceneLoaded -= OnSceneLoaded;
        SceneManager.sceneUnloaded -= OnSceneUnloaded;

    }
}
