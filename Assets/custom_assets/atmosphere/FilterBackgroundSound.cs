using UnityEngine;
[RequireComponent(typeof(AudioHighPassFilter), typeof(AudioLowPassFilter))]
public class FilterBackgroundSound : MonoBehaviour
{
    // Start is called before the first frame update
    private AudioLowPassFilter low;
    private AudioHighPassFilter high;
    [SerializeField] private int low_cutoff = 2500;
    [SerializeField] private int high_cutoff = 6500;
    [SerializeField, Range(0.0f, 1.0f)] private float transition_time = 1.0f;
    private float _time = 0.0f;
    public bool enableTransition = false;

    void Start()
    {
        low = GetComponent<AudioLowPassFilter>();
        high = GetComponent<AudioHighPassFilter>();
    }

    // Update is called once per frame
    void Update()
    {
        if (enableTransition)
        {
            if (_time <= transition_time)
            {
                _time += Time.deltaTime;
            }
            float perc = _time / transition_time;
            low.cutoffFrequency = Mathf.Lerp(22000.0f, high_cutoff, perc);
            high.cutoffFrequency = Mathf.Lerp(0.0f, low_cutoff, perc);
        }
        else
        {
            if (_time >= 0.0f)
            {
                _time -= Time.deltaTime;
                float perc = _time / transition_time;
                low.cutoffFrequency = Mathf.Lerp(22000.0f, high_cutoff, perc);
                high.cutoffFrequency = Mathf.Lerp(0.0f, low_cutoff, perc);
            }
            else
            {
                enableTransition = false;
            }
        }
    }


}
