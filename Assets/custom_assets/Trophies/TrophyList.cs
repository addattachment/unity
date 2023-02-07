using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrophyList : MonoBehaviour
{
    public GameObject[] trophiesList;
    public GameObject currentTrophy;
    [SerializeField, Tooltip("directory in Resources where all trophy gameobjects will be stored")] private string trophy_dir;
    [SerializeField] private Transform trophyFloatLocation;
    [SerializeField] private Transform trophyStandLocation;
    [Header("light")]
    [SerializeField] private GameObject trophySpot;
    [SerializeField] float maxLightIntensity = 2.5f;
    private Hashtable ht;
    [Header("Audio")]
    public AudioSource trophyAppear;
    public bool trophyDidAppear = false;
    //TESTING
    [SerializeField] private bool testLightOn = false;
    [SerializeField] private bool testLightOff = false;
    [SerializeField] private bool createTrophy = false;
    [SerializeField] private bool moveTrophy = false;
    [SerializeField] private Player testPlayer;
    // Start is called before the first frame update
    void Start()
    {
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
            SetFocus(true);
        }
        if (testLightOff)
        {
            testLightOff = false;
            SetFocus(false);
        }
        if (createTrophy)
        {
            createTrophy = false;
            MakeTrophyAppear(Random.Range(0, trophiesList.Length));
        }
        if (moveTrophy)
        {
            moveTrophy = false;
            MoveTrophyToWinner(testPlayer);
        }
        ////////////////////
    }


    public void MoveTrophyToWinner(Player winner)
    {
        // add to the list of won trophies
        winner.trophyWonList.Add(currentTrophy);
        ht = iTween.Hash("position", winner.trophySpawnLocation.transform.position, "easeType", "easeInOutExpo", "delay", 0.1f, "time", 1.0f);

        // move trophy to winner
        iTween.MoveTo(currentTrophy, ht);
        // make spot follow the trophy
        SpotFollowTrophy(winner.trophySpawnLocation.transform.position);

        currentTrophy.GetComponent<Rigidbody>().isKinematic = false;
        currentTrophy.GetComponent<Rigidbody>().useGravity = true;
        //make sure we don't have a currentTrophy anymore
        currentTrophy = null;
    }

    public void SpotFollowTrophy(Vector3 location)
    {
        Hashtable spotHt = iTween.Hash("looktarget", location, "delay", 0.1f, "time", 1.0f, "easetype", "easeInOutExpo");
        iTween.LookTo(trophySpot, spotHt);
    }

    /// <summary>
    /// Instantiate a new trophy
    /// </summary>
    /// <param name="trophyIndex"></param>
    public void MakeTrophyAppear(int trophyIndex)
    {
        trophyDidAppear = true; // this is used by the trophyAppearState to know when to start listening
        SetFocus(true);
        currentTrophy = Instantiate(trophiesList[trophyIndex], trophyFloatLocation.position, Quaternion.identity, this.trophyStandLocation);
        iTween.MoveTo(currentTrophy, iTween.Hash("position", trophyStandLocation.position, "easeType", "easeOutBounce", "delay", 0.5f, "time", 1.0f));
        trophyAppear.Play();
    }


    /// <summary>
    /// SetFocus places the trophylocation in the spotlight
    /// </summary>
    /// <param name="enabled"></param>
    public void SetFocus(bool enabled)
    {
        Hashtable ht;
        if (enabled)
        {
            ht = iTween.Hash("from", 0, "to", maxLightIntensity, "time", .2f, "onupdatetarget", gameObject, "onupdate", "SetLightIntensity");
        }
        else
        {
            ht = iTween.Hash("from", maxLightIntensity, "to", 0.0f, "time", 1.0f, "onupdatetarget", gameObject, "onupdate", "SetLightIntensity");
        }
        iTween.ValueTo(trophySpot, ht);
        SpotFollowTrophy(trophyStandLocation.position);
    }

    private void SetLightIntensity(float newVal)
    {
        trophySpot.GetComponentInChildren<Light>().intensity = newVal;
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