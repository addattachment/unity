using LSL;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CaregiverFeedback : MonoBehaviour
{
    [SerializeField] private TMP_Text feedbackText;
    //[SerializeField] private SpeechToMouth feedbackSpeech;
    [SerializeField] private CaregiverEmotion caregiverEmotion;
    [SerializeField] private TrialList trialList;
    private GameManager gameManager;
    public SetCaregiverGaze setCaregiverGaze;
    public GameObject feedbackCamera;
    [SerializeField] private Light sun;
    public Light caregiverSpotLight;
    public bool feedbackIsStarted;
    //[SerializeField] private Slingshot playerSlingshot;
    //[SerializeField] private GameObject playerSlingshot;
    public AudioSource audioSource;
    //private bool speechHasStarted = false;
    [SerializeField] private bool testPlay = false;

    [SerializeField] private ReadFeedback feedbackPole;
    [SerializeField] private bool enableText = false;
    [SerializeField] private List<GameObject> blackbox;
    [SerializeField] private bool testFade;
    public bool fadedToBlack = false;
    public GameObject screenSetup;
    private OutletPassThrough LSLOutlet;


    // Start is called before the first frame update    
    void Awake()
    {
        gameManager = GameManager.Instance;
        LSLOutlet = OutletPassThrough.Instance;
    }

    // Update is called once per frame
    void Update()
    {
        //TESTING//////////
        if (testPlay)
        {
            // in order to test the end of a feedback moment, we first need to make sure we're in end trial state
            gameManager.toPostTrial = true;
            testPlay = false;
            audioSource.Play();
        }
        ///////////////////
        if (!enableText)
        {
            feedbackText.enabled = false;
        }
        if (testFade)
        {
            testFade = false;
            FadeBlackBox(true);
        }
    }

    public void FadeBlackBox(bool fade_in)
    {
        Hashtable fadeHT;
        if (fade_in)
        {
            fadeHT = iTween.Hash("from", 0.0f, "to", 1.0f, "delay", 0.1f, "time", 1.0f, "easetype", "easeInOutExpo", "onupdate", "SetTransparency", "oncomplete", "FadedToBlack");
        }
        else
        {
            screenSetup.SetActive(false);
            fadeHT = iTween.Hash("from", 1.0f, "to", 0.0f, "delay", 0.1f, "time", 1.0f, "easetype", "easeInOutExpo", "onupdate", "SetTransparency", "oncomplete","FadedToTransp");
        }
        iTween.ValueTo(this.gameObject, fadeHT);

    }

    private void SetTransparency(float transparancy)
    {
        foreach (GameObject wall in blackbox)
        {
            Color c = wall.GetComponent<Renderer>().material.color;
            c.a = transparancy;
            wall.GetComponent<Renderer>().material.color = c;
        }
    }
    private void FadedToBlack()
    {
        feedbackCamera.SetActive(true);
        screenSetup.SetActive(true);
        fadedToBlack = true;
    }    
    private void FadedToTransp()
    {
        feedbackCamera.SetActive(false);

        fadedToBlack = false;
    }
    public void EnableScreenSetup(bool enable)
    {
        screenSetup.SetActive(enable);
    }

    public void GiveFeedback()
    {
        if (enableText)
        {
            feedbackText.SetText(trialList.GetCurrentTrial().Response());
        }
        LoadAudioClip(gameManager.currentTrial);
        Atmosphere emotion = trialList.GetCurrentTrial().GetAtmosphere();
        caregiverEmotion.SetAtmosphere(emotion);
        audioSource.Play();
        LSLOutlet.SendMarker(Marker.caregiver_starts_feedback);
        feedbackIsStarted = true;
    }

    //public void SetSlingshotForFeedback(bool enabled)
    //{

    //    //if (enabled)
    //    //{
    //    //    playerSlingshot.GetComponent<Slingshot>().slingshotLinesEnum = SlingshotLinesEnum.hidden;
    //    //}
    //    //else
    //    //{
    //    //    playerSlingshot.GetComponent<Slingshot>().slingshotLinesEnum = SlingshotLinesEnum.passive;
    //    //}
    //}
    public void LoadAudioClip(int index)
    {
        audioSource.clip = trialList.audioClips[index];
    }

}
public class CaregiverFeedbackEvent
{
    public int trialNumber;
    public string websocketMessage = "caregiverFeedback";
    public bool started;
    public float _time;
    public CaregiverFeedbackEvent()
    {
    }
    public void Set(int currentTrial, bool didStart)
    {
        trialNumber = currentTrial;
        started = didStart;
    }
    public string SaveToString()
    {
        _time = Time.time;
        return JsonUtility.ToJson(this);
    }
}