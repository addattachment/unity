using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

public class SpeechToMouth : MonoBehaviour
{
    [SerializeField] private AudioSource AudioClip;
    [SerializeField] private CaregiverFeedback caregiverFeedback;
    [SerializeField] private SkinnedMeshRenderer rend;
    public float updateStep = 0.1f;
    public int sampleDataLength = 1024;
    [SerializeField, Tooltip("amplify the mouthmovement")] float gain = 90.0f;
    private float currentUpdateTime = 0f;

    private float clipLoudness = 0.0f;
    private float[] clipSampleData;


    private void Start()
    {
        clipSampleData = new float[sampleDataLength];
        AudioClip = caregiverFeedback.audioSource;
        caregiverFeedback = GetComponent<CaregiverFeedback>();
    }

    private void Update()
    {

        if (AudioClip.isPlaying)
        {
            CalcAmplitude();
            rend.SetBlendShapeWeight(0, clipLoudness);
            //Debug.Log("clip " + clipLoudness);
        }
    }

    private void CalcAmplitude()
    {
        currentUpdateTime += Time.deltaTime;
        if (currentUpdateTime >= updateStep)
        {
            currentUpdateTime = 0f;
            AudioClip.clip.GetData(clipSampleData, AudioClip.timeSamples); //I read 1024 samples, w$$anonymous$$ch is about 80 ms on a 44khz stereo clip, beginning at the current sample position of the clip.
            clipLoudness = 0f;
            foreach (var sample in clipSampleData)
            {
                clipLoudness += Mathf.Abs(sample);
            }
            clipLoudness /= sampleDataLength; //clipLoudness is what you are looking for
            clipLoudness *= gain;
        }
    }

 
}

