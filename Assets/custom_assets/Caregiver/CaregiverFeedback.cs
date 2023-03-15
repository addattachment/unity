using TMPro;
using UnityEngine;

public class CaregiverFeedback : MonoBehaviour
{
    [SerializeField] private TMP_Text feedbackText;
    //[SerializeField] private SpeechToMouth feedbackSpeech;
    [SerializeField] private CaregiverEmotion caregiverEmotion;
    [SerializeField] private TrialList trialList;
    [SerializeField] private GameManager gameManager;
    [SerializeField] private Light sun;
    public Light caregiverSpotLight;
    //[SerializeField] private Slingshot playerSlingshot;
    //[SerializeField] private GameObject playerSlingshot;
    public AudioSource audioSource;
    //private bool speechHasStarted = false;
    [SerializeField] private bool testPlay = false;

    [SerializeField] private ReadFeedback feedbackPole;
    [SerializeField] private bool enableText = false;
    // Start is called before the first frame update    
    void Start()
    {
        gameManager = GameManager.Instance;
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