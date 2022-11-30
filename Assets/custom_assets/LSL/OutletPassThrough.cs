using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LSL;
using static LSL.liblsl;

namespace LSL
{
    public class OutletPassThrough : MonoBehaviour
    {
        /*
         * This is a simple example of an LSL Outlet to stream out irregular events occurring in Unity.
         * This uses only LSL.cs and is intentionally simple. For a more robust version, see another sample.
         * 
         * We stream out the trigger event during OnTriggerEnter which is, in our opinison, the closest
         * time to when the trigger actually occurs (i.e., independent of its rendering).
         * A simple way to print the events is with pylsl: `python -m pylsl.examples.ReceiveStringMarkers`
         *
         * If you are instead trying to log a stimulus event then there are better options. Please see the 
         * LSL4Unity SimpleStimulusEvent Sample for such a design.
         */
        [SerializeField] private string StreamName = "DataSyncMarker";
        [SerializeField] private string ContentType = "Markers";
        [SerializeField] private string StreamId = "12345";

        private StreamOutlet outlet;
        private int[] sample = { 0 };
        //private float i = 0.0f;

        void Start()
        {
            StreamInfo streamInfo = new StreamInfo(StreamName, ContentType, 1, IRREGULAR_RATE,
                channel_format_t.cf_int8, StreamId); //int8 should be more than enough for coding the differing signals
            outlet = new StreamOutlet(streamInfo);
        }

        public void SendMarker(string marker)
        {
            switch (marker)
            {
                case "ball shot":
                    SendMarker(1);
                    break;
                case "ball impact":
                    SendMarker(2);
                    break;
                default:
                    Debug.Log("unknown command");
                    break;
            }
        }

        private void SendMarker(int marker)
        {
            if (outlet != null)
            {
                sample[0] = marker;
                outlet.push_sample(sample);
                Debug.Log("LSL stream: " + sample);
            }
        }
    }
}