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
    public Light caregiverSpotLight;
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

    public void SetSlingshotForFeedback(bool enabled)
    {
        if (enabled)
        {
            playerSlingshot.slingshotLinesEnum = SlingshotLinesEnum.hidden;
        }
        else
        {
            playerSlingshot.slingshotLinesEnum = SlingshotLinesEnum.passive;
        }
    }
    public void LoadAudioClip(int index)
    {
        audioSource.clip = trialList.audioClips[index];
    }

}
