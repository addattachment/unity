using System.Collections;
using UnityEngine;

public class TrophyList : MonoBehaviour
{
    public GameObject[] trophiesList;
    public GameObject currentTrophy;
    [SerializeField, Tooltip("directory in Resources where all trophy gameobjects will be stored")] private string trophy_dir;
    [SerializeField] private Transform trophyFloatLocation;
    [SerializeField] public Transform trophyStandLocation;
    [Header("light")]
    //[SerializeField] private GameObject trophySpot;
    //[SerializeField] float maxLightIntensity = 2.5f;
    [SerializeField] private LightingMgr lightMgr;

    private Hashtable ht;
    [Header("Audio")]
    public AudioSource trophyAppear;
    public bool trophyDidAppear = false;
    public bool trophyIsGiven = false;
    [Header("Animations")]
    [SerializeField] private GameObject explode;
    public bool didExplode = false;
    private float waitingTimeForTransition;
    [SerializeField] private float scaleTrophy = 0.2f;
    [Header("testing")]
    [SerializeField] private bool testLightOn = false;
    [SerializeField] private bool testLightOff = false;
    [SerializeField] private bool createTrophy = false;
    [SerializeField] private bool moveTrophy = false;
    [SerializeField] private bool doExplode = false;
    [SerializeField, Tooltip("used to move the ball to the testPlayer")] private Player testPlayer;

    // Start is called before the first frame update
    void Start()
    {
        testPlayer = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
        trophiesList = Resources.LoadAll<GameObject>(trophy_dir);
        trophiesList = Reshuffle(trophiesList);
        ht = iTween.Hash("position", testPlayer.trophySpawnLocation, "delay", 1f);

    }

    // Update is called once per frame
    void Update()
    {
        ///////////////TEST
        if (testLightOn)
        {
            testLightOn = false;
            SetFocus(true, trophyStandLocation.transform);
        }
        if (testLightOff)
        {
            testLightOff = false;
            SetFocus(false, trophyStandLocation.transform);
        }
        if (createTrophy)
        {
            createTrophy = false;
            MakeTrophyAppear(Random.Range(0, trophiesList.Length));
        }
        if (moveTrophy)
        {
            moveTrophy = false;
            MoveTrophyToWinner(testPlayer, 1.0f);
        }
        if (doExplode)
        {
            doExplode = false;
            DestroyCurrentTrophy(1.5f);
        }
        ////////////////////
    }

    private void Wait()
    {

        StartCoroutine(WaitForTransition());
    }

    private IEnumerator WaitForTransition()
    {
        yield return new WaitForSeconds(waitingTimeForTransition);
        SetTrophyGiven();
        //make sure we don't have a currentTrophy anymore
        currentTrophy = null;
    }



    public void MoveTrophyToWinner(Player winner, float waitTime)
    {
        trophyIsGiven = false;
        waitingTimeForTransition = waitTime;
        // add to the list of won trophies
        winner.trophyWonList.Add(currentTrophy);
        ht = iTween.Hash("position", winner.trophySpawnLocation.transform.position + new Vector3(Random.Range(-0.4f, 0.4f), 1, Random.Range(-0.4f, 0.4f)), "easeType", "easeInOutExpo", "delay", 0.1f, "time", 2.5f, "oncompletetarget", gameObject, "oncomplete", "ShrinkTrophy");                                                                                                                                                                                                      // move trophy to winner
        iTween.MoveTo(currentTrophy, ht);
    }

    private void ShrinkTrophy()
    {
        ht = iTween.Hash("scale", new Vector3(scaleTrophy, scaleTrophy, scaleTrophy), "easeType", "easeInOutExpo", "delay", 0.1f, "time", 1.0f, "oncompletetarget", gameObject, "oncomplete", "DropTrophy");
        // move trophy to winner
        iTween.ScaleTo(currentTrophy, ht);
    }

    private void DropTrophy()
    {
        currentTrophy.GetComponent<Rigidbody>().isKinematic = false;
        currentTrophy.GetComponent<Rigidbody>().freezeRotation = false;

        //currentTrophy.GetComponent<Rigidbody>().mass = 1.0f;
        currentTrophy.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, 0);
        currentTrophy.GetComponent<Rigidbody>().useGravity = true;
        Wait();
    }

    private void SetTrophyGiven()
    {
        trophyIsGiven = true;
    }
    public void DestroyCurrentTrophy(float waitTime)
    {
        waitingTimeForTransition = waitTime;
        trophyIsGiven = false;
        ht = iTween.Hash("amount", new Vector3(0, 3.0f, 0), "easeType", "easeInOutExpo", "delay", 0.1f, "time", 2.5f, "oncomplete", "DestroyTrophy", "oncompletetarget", gameObject);
        // move trophy to winner
        iTween.MoveBy(currentTrophy, ht);
    }
    private void DestroyTrophy()
    {
        explode.transform.position = currentTrophy.transform.position;
        explode.GetComponent<AudioSource>().Play();
        explode.GetComponentInChildren<Animator>().Play("Base Layer.Explosion");

        didExplode = false;
        Wait();
        Destroy(currentTrophy);
    }
    private IEnumerator WaitForDestruction()
    {
        yield return new WaitForSeconds(waitingTimeForTransition);
        Destroy(currentTrophy);
        SetTrophyGiven();
    }



    /// <summary>
    /// Instantiate a new trophy
    /// </summary>
    /// <param name="trophyIndex"></param>
    public void MakeTrophyAppear(int trophyIndex)
    {
        trophyDidAppear = true; // this is used by the trophyAppearState to know when to start listening
        currentTrophy = Instantiate(trophiesList[trophyIndex], trophyFloatLocation.position, Quaternion.identity, this.trophyStandLocation); //Quaternion.identity
        currentTrophy.GetComponent<Rigidbody>().isKinematic = true;
        currentTrophy.GetComponent<Rigidbody>().freezeRotation = true;
        iTween.MoveTo(currentTrophy, iTween.Hash("position", trophyStandLocation.position, "easeType", "easeOutBounce", "delay", 0.5f, "time", 1.0f));
        trophyAppear.Play();
    }


    /// <summary>
    /// SetFocus places the trophylocation in the spotlight
    /// </summary>
    /// <param name="enabled"></param>
    public void SetFocus(bool enabled, Transform focusLocation)
    {
        lightMgr.envLight.EnableSunlight(!enabled);
        lightMgr.spotLight.EnableLight(enabled);
        lightMgr.spotLight.SpotFollow(focusLocation.position);
    }

    private GameObject[] Reshuffle(GameObject[] objects)
    {
        // Knuth shuffle algorithm :: courtesy of Wikipedia :)
        for (int t = 0; t < objects.Length; t++)
        {
            GameObject tmp = objects[t];
            int r = Random.Range(t, objects.Length);
            objects[t] = objects[r];
            objects[r] = tmp;
        }
        return objects;
    }

}
