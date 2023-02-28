using UnityEngine;

public class SwitchStateMgrManual : MonoBehaviour
{
    private TrialStateManager statemgr;
    private string stateMgrName = "trialStateManagerPrefab";
    void Start()
    {
        statemgr = GameObject.Find(stateMgrName).GetComponent<TrialStateManager>();
    }

    // Update is called once per frame
    void Update()
    {
    }

    public void StartTrial()
    {
        statemgr.SwitchState(statemgr.trialState);
    }
    public void EndTrial()
    {
        statemgr.SwitchState(statemgr.postTrialState);
    }

    public void RestartTrial()
    {
        statemgr.SwitchState(statemgr.preTrialState);
    }
}
