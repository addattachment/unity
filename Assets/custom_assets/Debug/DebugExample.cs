using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace Assets.Scripts
{
    public class DebugExample : MonoBehaviour
    {
        [SerializeField] private TMP_Text debug;
        [SerializeField] bool testDebug = false;
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
            if(testDebug) debug.SetText("Debugger present");
        }

        public void UpdateMixBullet(float newVal)
        {
            var bullet = GameObject.FindGameObjectWithTag("Bullet");
            Debug.Log("found bullet and updating with val" + newVal);
            bullet.GetComponent<Bullet>().mixHitTrajectory = newVal;

            debug.SetText("new val: "+newVal);
        }

        public void SetDebugText(string text)
        {
            if(debug_array.Count <= debug_arr_max_len)
            {
                debug_array.Add(text);
            }
            else
            {
                debug_array.RemoveAt(0);
                debug_array.Add(text);
            }
            debug.SetText(string.Join("\r\n",debug_array));
        }
    }
}