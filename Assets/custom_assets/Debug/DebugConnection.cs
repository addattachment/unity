﻿using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Assets.Scripts
{
    public class DebugConnection : MonoBehaviour
    {
        [SerializeField] private TMP_Text debug;
        [SerializeField] bool testDebug = false;
        [Header("toggle for reach of slingshot")]
        [SerializeField] Toggle toggleMayPlayer;
        [SerializeField] Toggle toggleMustPlayer;
        [SerializeField] Toggle toggleMusntPlayer;
        [SerializeField] Toggle toggleMayNPC;
        [SerializeField] Toggle toggleMustNPC;
        [SerializeField] Toggle toggleMusntNPC;
        [SerializeField] Player Player;
        [SerializeField] Player NPC;
        private List<string> debug_array;
        private int debug_arr_max_len = 8;

        // Use this for initialization
        void Start()
        {
            debug = GameObject.FindGameObjectWithTag("debug").GetComponentInChildren<TMPro.TMP_Text>();
            debug_array = new();
        }

        // Update is called once per frame
        void Update()
        {
            if (testDebug) debug.SetText("Debugger present");
        }


        /// <summary>
        /// Function to be able to display in game debug logs.
        /// a maximum amount of text is presented
        /// </summary>
        /// <param name="text"></param>
        public void SetDebugText(string text)
        {
            if (debug_array.Count <= debug_arr_max_len)
            {
                debug_array.Add(text);
            }
            else
            {
                debug_array.RemoveAt(0);
                debug_array.Add(text);
            }
            debug.SetText(string.Join("\r\n", debug_array));
        }


        public void SetToggleReach(ReachTargetEnum reach, Player activeP)
        {
            if(activeP == Player)
            {
                switch (reach)
                {
                    case ReachTargetEnum.may:
                        toggleMayPlayer.isOn = true;
                        break;
                    case ReachTargetEnum.must:
                        toggleMustPlayer.isOn = true;
                        break;
                    case ReachTargetEnum.musnt:
                        toggleMusntPlayer.isOn = true;
                        break;
                    default:
                        break;
                }
            }
            else
            {
                switch (reach)
                {
                    case ReachTargetEnum.mayNPC:
                        toggleMayNPC.isOn = true;
                        break;
                    case ReachTargetEnum.must:
                        toggleMustNPC.isOn = true;
                        break;
                    case ReachTargetEnum.musnt:
                        toggleMusntNPC.isOn = true;
                        break;
                    default:
                        break;
                }
            }
        }
        /// <summary>
        /// snippet to use when implementing a slider in the UI, make sure the slider is not a child of other UI elements, as for some reason you can't interact anymore then.
        /// </summary>
        /// <param name="newValue"></param>
        public void ChangeSlider(float newValue)
        {
            Debug.Log("updating ChangeSlider" + newValue);

        }
    }
}