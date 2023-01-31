using Assets.Scripts;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEngine;

namespace TrialNS
{
    public class TrialList : MonoBehaviour
    {
        [SerializeField] private Player player;

        //public int numberOfTrials = 5; // TBD NEEDED??
        [SerializeField] private List<Trial> trialsList; // list of trials to be used in block of experiment
        public int currentTrial = 0; // where we are currently in the block
        [SerializeField] private string audioClips20_dir;
        [SerializeField] private string audioClips80_dir;

        public AudioClip[] audioClips;
        [SerializeField] private TextAsset trialListTA;

        private GameManager gameManager;
        [SerializeField] private DebugConnection debug_text;

        private void Awake()
        {
            trialsList = new List<Trial>();
        }
        // Start is called before the first frame update
        void Start()
        {
            gameManager = GameManager.Instance;

            debug_text = GameObject.FindGameObjectWithTag("debug")
                       .GetComponentInChildren<DebugConnection>();
        }

        private void Update()
        {

            if ((gameManager.trialListGenerated == false) && (gameManager.playerSettingsAreSet == true))
            {
                Debug.Log("triallist gets filled in");
                if (player.contingency == Contingency.c_20)
                {
                    LoadFromResourcesFolder(audioClips20_dir);

                }
                else
                {
                    LoadFromResourcesFolder(audioClips80_dir);

                }
                ReadTrial(trialListTA);
                gameManager.trialListGenerated = true;
            }
        }

        private void LoadFromResourcesFolder(string contingency_dir)
        {
            audioClips = Resources.LoadAll<AudioClip>(contingency_dir);
            trialListTA = Resources.LoadAll<TextAsset>(contingency_dir)[0];
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
                debug_text.SetDebugText(response);
            }
        }

        /// <summary>
        /// get to know what the current trial is, defined by its index, its good or bad values, etc.
        /// </summary>
        /// <returns></returns>
        public Trial GetCurrentTrial()
        {
            return trialsList[currentTrial];
        }

        public void NextTrial()
        {
            currentTrial++;
        }
    }
}