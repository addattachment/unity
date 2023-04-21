using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

public class StateMgrEvent
{
    public string websocketMessage = "Trialstates";
    public string newState;
    public float _time;
    public StateMgrEvent(string stateMgr)
    {
        websocketMessage = stateMgr;
    }

    public void Set(string states)
    {
        newState = states;
    }
    public string SaveToString()
    {
        _time = Time.time;
        return JsonUtility.ToJson(this);
    }
}
