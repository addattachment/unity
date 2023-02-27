using TMPro;
using TrialNS;
using UnityEngine;

[RequireComponent(typeof(TMP_Text))]
public class ShowTrialState : MonoBehaviour
{
    [SerializeField]
    private TrialStateManager stateManager;

    [SerializeField]
    private TrialList trialList;

    [SerializeField]
    private TextMeshProUGUI _text;

    private string stateMgrName = "stateManagerPrefab";

    private string trialListName = "trialListPrefab";

    // Start is called before the first frame update
    void Start()
    {
        stateManager =
            GameObject.Find(stateMgrName).GetComponent<TrialStateManager>();
        trialList = GameObject.Find(trialListName).GetComponent<TrialList>();
        _text = GetComponent<TextMeshProUGUI>();
        var currentTrial = trialList.GetCurrentTrial();
        string _updatedText =
            "state: " +
            stateManager.trialPhase.ToString() +
            "\r\n" +
            currentTrial.GetTrialNumber().ToString() +
            "\r\n good trial? " +
            currentTrial.IsGoodTrial().ToString() +
            "\r\n Response? " +
            currentTrial.Response().ToString();
        _text.text = _updatedText;
    }

    // Update is called once per frame
    // void Update()
    // {
    //     _text.text = stateManager.trialPhase;
    // }
    public void UpdateText()
    {
        var currentTrial = trialList.GetCurrentTrial();
        string _updatedText =
            "state: " +
            stateManager.trialPhase.ToString() +
            "\r\n" +
            currentTrial.GetTrialNumber().ToString() +
            "\r\n good trial? " +
            currentTrial.IsGoodTrial().ToString() +
            "\r\n Response? " +
            currentTrial.Response().ToString();
        _text.text = _updatedText;
    }
}
