using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;

public class TrialList : MonoBehaviour
{
    [SerializeField] private Player player;

    [Header("Game settings")]
    [SerializeField] private string data20_dir;
    [SerializeField] private string data80_dir;

    [SerializeField] private List<Trial> trialsList; // list of trials to be used in block of experiment
    public AudioClip[] audioClips;
    [SerializeField] private TextAsset trialListTA;

    private GameManager gameManager;

    private void Awake()
    {
        trialsList = new List<Trial>();
    }
    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameManager.Instance;


        if (gameManager.isTutorial)
        {
            CreateTutorialTrialList();
            gameManager.trialListGenerated = true;

        }
    }

    private void Update()
    {
        if ((gameManager.trialListGenerated == false) 
            && (gameManager.playerContingencySet == true))
        {
            Debug.Log("triallist gets filled in");
            GenerateTrialList(player.contingency);
        }
    }

    public void GenerateTrialList(Contingency cont)
    {
        ClearTrialList();
        if (cont == Contingency.c_20)
        {
            LoadFromResourcesFolder(data20_dir);
        }
        else
        {
            LoadFromResourcesFolder(data80_dir);
        }
        ReadTrial(trialListTA);
        gameManager.trialListGenerated = true;
    }

    private void LoadFromResourcesFolder(string contingency_dir)
    {
        audioClips = Resources.LoadAll<AudioClip>(contingency_dir);
        trialListTA = Resources.LoadAll<TextAsset>(contingency_dir)[0];
    }

    private void CreateTutorialTrialList()
    {
        for (int i = 1; i < 200; i++)
        {
            Trial temp = new(); // temp trial to fill in values
            temp.CreateTrial(i, isGoodTrial: true, response: "", atmosphere: Atmosphere.GOOD);
            trialsList.Add(temp);
        }
    }


    /// <summary>
    /// ReadTrial reads a text asset csv file
    /// 0 is trialnumber
    /// 1 response
    /// 2 atmosphere
    /// 3 tone
    /// 4 intensity
    /// 5 players performance 
    /// </summary>
    /// <param name="ft"></param>
    private void ReadTrial(TextAsset ft)
    {
        string fs = ft.text;
        List<string> trialStringList = new List<string>(fs.Split("\r\n"));

        for (int i = 1; i < trialStringList.Count; i++)
        {
            // we skip the header line
            string valueLine = trialStringList[i];
            string[] values = Regex.Split(valueLine, ";"); // your splitter here
            int trialnr = int.Parse(values[0]);
            bool isGood = values[5] == "good";
            string response = values[1];
            Atmosphere atm = (string)values[2] switch
            {
                "good" => Atmosphere.GOOD,
                "bad" => Atmosphere.BAD,
                "neutral" => Atmosphere.NEUTRAL,
                _ => Atmosphere.NEUTRAL,
            };
            Trial temp = new(); // temp trial to fill in values
            temp.CreateTrial(trialnr, isGood, response, atm);
            trialsList.Add(temp);
            //debug_text.SetDebugText(response);
        }
    }

    public void ClearTrialList()
    {
        Debug.Log("clearing the list");
        //Debug.Break();
        trialsList.Clear();
    }

    /// <summary>
    /// get to know what the current trial is, defined by its index, its good or bad values, etc.
    /// </summary>
    /// <returns></returns>
    public Trial GetCurrentTrial()
    {
        return trialsList[gameManager.currentTrial];
    }

    public void NextTrial()
    {
        gameManager.currentTrial++;
        if (gameManager.currentTrial < trialsList.Count)
        {
            gameManager.trialListFinished = false;
        }
        else
        {
            gameManager.trialListFinished = true;
        }

    }
}
