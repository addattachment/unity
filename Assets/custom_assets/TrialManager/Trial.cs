using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace TrialNS
{
    [System.Serializable]
    public class Trial
    {
        [SerializeField] private int trialNumber; // the number of the trial
        [SerializeField] private bool isGoodTrial; // true if the trial is a good trial, false if it is a bad trial
        [SerializeField] private string response; // true if the caregiver must give a supportive/useful feedback, false if negative feedback.
        [SerializeField] private Atmosphere atmosphere; // atmosphere to give to the caregiver
        public void CreateTrial(int trialNumber, bool isGoodTrial, string response, Atmosphere atmosphere)
        {
            this.trialNumber = trialNumber;
            this.isGoodTrial = isGoodTrial;
            this.response = response;
            this.atmosphere = atmosphere;
        }

        public int GetTrialNumber() { return this.trialNumber; }
        public bool IsGoodTrial() { return this.isGoodTrial; }
        public string Response() { return this.response; }
        public Atmosphere GetAtmosphere() { return this.atmosphere; }
    }

}