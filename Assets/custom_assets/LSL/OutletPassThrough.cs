using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LSL;
using static LSL.liblsl;
using UnityEngine.Events;

namespace LSL
{
    [System.Serializable]
    public class m_LSL_Event : UnityEvent<string>
    {
    }
    public enum Marker { ball_release = 0, ball_good_hit = 1, ball_bad_hit = 2, score = 3, test = 4 };

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
        [SerializeField] private string StreamName_1 = "DataSyncMarker_emotibit";
        [SerializeField] private string StreamName_2 = "DataSyncMarker_eeg";
        [SerializeField] private string ContentType = "Markers";
        [SerializeField] private string StreamId_1 = "LSL1";
        [SerializeField] private string StreamId_2 = "LSL2";
        [SerializeField] private channel_format_t channel_format_type = channel_format_t.cf_int8;

        private StreamOutlet outlet_1;
        private StreamOutlet outlet_2;
        private int[] sample = { 0 };
        //private float i = 0.0f;

        void Start()
        {
            StreamInfo streamInfo1 = new StreamInfo(StreamName_1, ContentType, 1, IRREGULAR_RATE,
                channel_format_type, StreamId_1); //int8 should be more than enough for coding the differing signals
            outlet_1 = new StreamOutlet(streamInfo1);
            StreamInfo streamInfo2 = new StreamInfo(StreamName_2, ContentType, 1, IRREGULAR_RATE,
                channel_format_type, StreamId_2); //int8 should be more than enough for coding the differing signals
            outlet_2 = new StreamOutlet(streamInfo2);
        }
        public void SendMarker(Marker marker)
        {
            Debug.Log(Time.time + (int)marker);
            switch (marker)
            {
                case Marker.ball_release:
                case Marker.ball_good_hit:
                case Marker.ball_bad_hit:
                case Marker.score:
                    SendMarker((int)marker);
                    break;
                case Marker.test:
                    SendMarker((int)marker);
                    break;
                default:
                    Debug.Log("unknown command");
                    break;
            }
        }

        private void SendMarker(int marker)
        {
            sample[0] = marker;
            if (outlet_1 != null)
            {
                outlet_1.push_sample(sample);
            }
            if (outlet_2 != null)
            {
                outlet_2.push_sample(sample);
            }
            Debug.Log("LSL stream: " + Time.time + " " + sample);

        }
    }
}