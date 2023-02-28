using UnityEngine;
public enum Atmosphere { GOOD, BAD, NEUTRAL };

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

    /// <summary>
    /// Get the index of the current trial
    /// </summary>
    /// <returns></returns>
    public int GetTrialNumber() { return this.trialNumber; }
    /// <summary>
    /// Depicts whether the player may win or not
    /// </summary>
    /// <returns></returns>
    public bool IsGoodTrial() { return this.isGoodTrial; }
    /// <summary>
    /// Returns the response that needs to be given to the child
    /// </summary>
    /// <returns></returns>
    public string Response() { return this.response; }
    /// <summary>
    /// returns the emotion/atmosphere of the caregiver
    /// </summary>
    /// <returns></returns>
    public Atmosphere GetAtmosphere() { return this.atmosphere; }
}

