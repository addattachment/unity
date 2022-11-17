using Assets.Scripts;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;


public class GameManager : MonoBehaviour
{
    public static GameManager Instance;
    [SerializeField] private Slingshot slingshot;
    [SerializeField] private GameObject slingshotHook;
    [SerializeField] private GameObject target;
    [SerializeField] private List<GameObject> targetList;

    //[SerializeField] private Material red;
    //[SerializeField] private Material blue;
    //[SerializeField] private Material green;
    //[SerializeField] private List<Material> materialList;

    [Header("Trialsettings")]
    public GameObject slingshotBullet;
    //public GameObject remainingBullet;
    public int RemainingTries = 5;
    
    public GameObject hitTarget;
    //[Header("GUI")]
    //[SerializeField] GameObject HUD;
    [Header("bullet settings")]
    public bool steerBall = false; // boolean to check if we want to steer the ball or let it follow it's natural path
    public bool hitSuccesGuide = false; // if hitSuccesGuid is true, we want the ball to hitSuccesGuid the target, otherwise definitely miss

    // Start is called before the first frame update
    void Start()
    {
        if (Instance == null)
        {
            Instance = this;
        }
        //materialList = new List<Material>();
        //materialList.Add(red);
        //materialList.Add(blue);
        //materialList.Add(green);

        target = GameObject.FindGameObjectWithTag("target");
        foreach (Transform x in target.transform)
        {
            targetList.Add(x.gameObject);
        }
        slingshot = GameObject.FindGameObjectWithTag("slingshot").GetComponent<Slingshot>();
        slingshotHook = slingshot.getHook();
        //int level = SceneManager.GetActiveScene().buildIndex;
        //HighscoreText.text = GetHighscore(level).ToString();
        SetNewBullet();
    }

    public void RestartScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name) ;
    }
    public void StartNewTrial()
    {
        RemainingTries = 5;
        SetNewBullet();
    }

    public void SetNewBullet()
    {
        RemainingTries--;
        if (RemainingTries > 0)
        {
            // Make sure we can detect collisions by the new bullet (only once!)
            target.GetComponent<Target>().readyForHit = true;
            // Instantiate the new bullet
            GameObject bullet = Instantiate(slingshotBullet, slingshotHook.transform.position, Quaternion.identity);
            if (targetList.Count > 0)
            {
                hitTarget = targetList[Random.Range(0, targetList.Count)];
                bullet.GetComponent<Renderer>().material = hitTarget.GetComponent<Renderer>().material;
                bullet.GetComponent<TrailRenderer>().material.color = hitTarget.GetComponent<Renderer>().material.color;
                foreach(GameObject target in targetList)
                {
                    if (target == hitTarget)
                    {
                        target.GetComponent<TargetHit>().SetActiveTarget(true);
                    }
                    else target.GetComponent<TargetHit>().SetActiveTarget(false);
                }
            }
            slingshot.Bullet = bullet;
        }
    }
    public void SetBallSteering()
    {
        steerBall = !steerBall;
        GameObject.FindGameObjectWithTag("debug")
            .GetComponentInChildren<DebugExample>()
            .SetDebugText("" + steerBall + " " + hitSuccesGuide);
        slingshot.SetTargetReachable(steerBall, hitSuccesGuide);
    }

    public void SetHitTargetSteering()
    {
        hitSuccesGuide = !hitSuccesGuide;
        GameObject.FindGameObjectWithTag("debug")
            .GetComponentInChildren<DebugExample>()
            .SetDebugText("" + steerBall + " " + hitSuccesGuide);
        slingshot.SetTargetReachable(steerBall, hitSuccesGuide);

    }
}
