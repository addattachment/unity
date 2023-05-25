using System.Collections;
using UnityEngine;

public class CaregiverEmotion : MonoBehaviour
{
    private SkinnedMeshRenderer rend;
    [SerializeField, Tooltip("Set the min amount of happiness we want to see")] private float minHappy = 10.0f;
    [SerializeField, Tooltip("Set the max amount of happiness we want to see")] private float maxHappy = 90.0f;
    [SerializeField, Tooltip("Set the min amount of angriness we want to see")] private float minAngry = 10.0f;
    [SerializeField, Tooltip("Set the max amount of angriness we want to see")] private float maxAngry = 90.0f;

    [SerializeField] private bool testHappy = false;
    [SerializeField] private bool testAngry = false;
    /*
    This script needs to be placed on the head of the zorgfiguur (with the two or three blend shapes)
    Make sure that the blend shapes are not blocked by the animation baking
     */
    // Start is called before the first frame update
    void Start()
    {
        rend = GetComponentInChildren<SkinnedMeshRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if (testAngry)
        {
            testAngry = false;
            StartCoroutine(TestEmotion(Atmosphere.BAD));
        }

        if (testHappy)
        {
            testHappy = false;
            StartCoroutine(TestEmotion(Atmosphere.GOOD));
        }
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

    private IEnumerator TestEmotion(Atmosphere atm)
    {
        SetAtmosphere(atm);
        yield return new WaitForSeconds(2.0f);
        SetAtmosphere(Atmosphere.NEUTRAL);
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
