using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using TrialNS;

public class CaregiverFeedback : MonoBehaviour
{
    [SerializeField] private TMP_Text feedbackText;
    [SerializeField] private AudioSource feedbackSpeech;
    [SerializeField] private TrialList trialList;
    // Start is called before the first frame update    
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void GiveFeedback()
    {
        feedbackText.SetText(trialList.GetCurrentTrial().Response());
        LoadAudioClip(trialList.currentTrial);
        feedbackSpeech.Play();
    }

    public void LoadAudioClip(int index)
    {
        feedbackSpeech.clip = trialList.audioClips[index];
    }


}
