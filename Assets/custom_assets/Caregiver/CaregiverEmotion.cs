using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
public enum Atmosphere { GOOD, BAD, NEUTRAL };

public class CaregiverEmotion : MonoBehaviour
{
    private SkinnedMeshRenderer rend;
    [SerializeField, Tooltip("Set the min amount of happiness we want to see")] private float minHappy = 10.0f;
    [SerializeField, Tooltip("Set the max amount of happiness we want to see")] private float maxHappy = 90.0f;
    [SerializeField, Tooltip("Set the min amount of angriness we want to see")] private float minAngry = 10.0f;
    [SerializeField, Tooltip("Set the max amount of angriness we want to see")] private float maxAngry = 90.0f;

    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponentInChildren<SkinnedMeshRenderer>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void SetHappiness(float val)
    {
        rend.SetBlendShapeWeight(1, val);
        rend.SetBlendShapeWeight(2, 0.0f);
    }

    private void SetAngriness(float val)
    {
        rend.SetBlendShapeWeight(1, 0.0f);
        rend.SetBlendShapeWeight(2, val);
    }
    private void SetNeutral()
    {
        rend.SetBlendShapeWeight(1, 0.0f);
        rend.SetBlendShapeWeight(2, 0.0f);
    }

    public void SetAtmosphere(Atmosphere atm)
    {
        float _val = 0.0f;
        switch (atm)
        {
            case Atmosphere.GOOD:
                _val = Random.Range(minHappy, maxHappy);
                SetHappiness(_val);
                break;
            case Atmosphere.BAD:
                _val = Random.Range(minAngry, maxAngry);
                SetAngriness(_val);
                break;
            case Atmosphere.NEUTRAL:
            default:
                SetNeutral();
                break;
        }
    }

}
