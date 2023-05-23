using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class SceneMgr : MonoBehaviour
{
    private GameManager gameManager;
    [SerializeField] string baseScene = "BaseScene";
    [SerializeField] string tutorialShootingScene = "TutShootingScene";
    [SerializeField] string caregiverIntroScene = "CaregiverIntroScene";
    [SerializeField] string gameScene = "GameScene";
    public string currentActiveScene;

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
        if (IsAnAdditiveGameSceneLoaded() && !gameManager.aSceneIsLoaded)
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
        SceneManager.UnloadSceneAsync(sceneToUnload);
        LoadNewScene(sceneToLoad);
    }

    private void LoadNewScene(string sceneToLoad)
    {
        SetSceneVariables(sceneToLoad);
        SceneManager.LoadSceneAsync(sceneToLoad, LoadSceneMode.Additive);
        currentActiveScene = sceneToLoad;
    }

    private void SetSceneVariables(string sceneToLoad)
    {
        switch (sceneToLoad)
        {
            case "TutShootingScene":
                gameManager.isTutorial = true;
                break;
            case "CaregiverIntroScene":
                gameManager.isTutorial = true;
                break;
            case "GameScene":
                gameManager.isTutorial = false;
                //gameManager.trialListGenerated = false; // we opt for a renewed triallist generation
                break;
            default:
                break;
        }
    }
    public void RestartScene()
    {
        //var activeScene = SceneManager.GetActiveScene().name;
        //SceneManager.UnloadScene("PlayerScene");
        //SceneManager.LoadScene("PlayerScene", LoadSceneMode.Additive);
        SceneManager.LoadScene(currentActiveScene);
    }
}
