using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    [SerializeField] private Slingshot slingshot;
    [SerializeField] private GameObject slingshotHook;
    [SerializeField] private GameObject target;
    [SerializeField] private List<GameObject> targetList;

    [SerializeField] private Player player;
    [SerializeField] private Player NPC;


    [Header("Trialsettings")]
    public GameObject slingshotBall;

    public GameObject hitTarget;
    //[Header("GUI")]
    //[SerializeField] GameObject HUD;

    void Start()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        InitTargets();
        slingshot = GameObject.FindGameObjectWithTag("slingshot").GetComponent<Slingshot>();
        slingshotHook = slingshot.getHook();
        //int level = SceneManager.GetActiveScene().buildIndex;
        //HighscoreText.text = GetHighscore(level).ToString();
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
        NPC = GameObject.FindGameObjectWithTag("NPC").GetComponent<Player>();
        StartNewTrial();
    }

    private void InitTargets() {
        target = GameObject.FindGameObjectWithTag("target");
        foreach (Transform x in target.transform)
        {
            targetList.Add(x.gameObject);
        }
    }
    public void RestartScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
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
        Player activeParticipant = player.isActivePlayer? player : NPC; // see who is the active player to get a new ball
        activeParticipant.amountOfBallsInTrial--;
        if (activeParticipant.amountOfBallsInTrial > 0)
        {
            // Make sure we can detect collisions by the new bullet (only once!)
            target.GetComponent<Target>().readyForHit = true;
            // Instantiate the new bullet
            GameObject ball = Instantiate(slingshotBall, slingshotHook.transform.position, Quaternion.identity);
            if (targetList.Count > 0)
            {
                hitTarget = targetList[Random.Range(0, targetList.Count)];
                ball.GetComponent<Renderer>().material = hitTarget.GetComponent<Renderer>().material;
                ball.GetComponent<TrailRenderer>().material.color = hitTarget.GetComponent<Renderer>().material.color;
                foreach (GameObject target in targetList)
                {
                    if (target == hitTarget)
                    {
                        target.GetComponent<TargetHit>().SetActiveTarget(true);
                    }
                    else target.GetComponent<TargetHit>().SetActiveTarget(false);
                }
            }
            slingshot.Ball = ball;
        }
    }

    public void SwitchPlayer()
    {
        //temp adaptation while only 1 player
        player.isActivePlayer = true;// !player.isActivePlayer;
        NPC.isActivePlayer = false;//  !NPC.isActivePlayer;
    }


}
