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
        if (SceneManager.sceneCount < 2)
        {
            LoadNewScene("TutShootingScene");
        }
    }

    // Update is called once per frame
    void Update()
    {
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
        SceneManager.LoadSceneAsync(sceneToLoad, LoadSceneMode.Additive);
        currentActiveScene = sceneToLoad;
        switch (sceneToLoad)
        {
            case "TutShootingScene":
                break;
            case "CaregiverIntroScene":
                break;
            case "GameScene":
                gameManager.isTutorial = false;
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
