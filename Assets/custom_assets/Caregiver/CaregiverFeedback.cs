using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using TrialNS;

public class CaregiverFeedback : MonoBehaviour
{
    [SerializeField] private TMP_Text feedbackText;
    //[SerializeField] private SpeechToMouth feedbackSpeech;
    [SerializeField] private CaregiverEmotion caregiverEmotion;
    [SerializeField] private TrialList trialList;
    [SerializeField] private TrialStateManager stateMgr;
    [SerializeField] private Light sun;
    [SerializeField] private Light caregiverSpotLight;
    [SerializeField] private Slingshot playerSlingshot;
    public AudioSource audioSource;
    private bool speechHasStarted = false;
    [SerializeField] private bool testPlay = false;

    [SerializeField] private ReadFeedback feedbackPole;
    // Start is called before the first frame update    
    void Start()
    {
        stateMgr = GameObject.FindGameObjectWithTag("state").GetComponent<TrialStateManager>();
    }

    // Update is called once per frame
    void Update()
    {
        //TESTING//////////
        if (testPlay)
        {
            // in order to test the end of a feedback moment, we first need to make sure we're in end trial state
            stateMgr.endTrial = true;
            testPlay = false;
            audioSource.Play();
        }
        ///////////////////

    }


    public void GiveFeedback()
    {
        feedbackText.SetText(trialList.GetCurrentTrial().Response());
        LoadAudioClip(trialList.currentTrial);
        Atmosphere emotion = trialList.GetCurrentTrial().GetAtmosphere();
        caregiverEmotion.SetAtmosphere(emotion);
        audioSource.Play();
    }

    public void SetEnvironmentForFeedback(bool enabled)
    {
        if (enabled)
        {
            sun.enabled = false;
            playerSlingshot.slingshotLinesEnum = SlingshotLinesEnum.hidden;
            caregiverSpotLight.enabled = true;
        }
        else
        {
            sun.enabled = true;
            playerSlingshot.slingshotLinesEnum = SlingshotLinesEnum.passive;
            caregiverSpotLight.enabled = false;
        }
    }
    public void LoadAudioClip(int index)
    {
        audioSource.clip = trialList.audioClips[index];
    }

}
