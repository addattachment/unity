using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetGender : MonoBehaviour
{

    [SerializeField] private SkinnedMeshRenderer maleHat;
    [SerializeField] private MeshRenderer femaleHat;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetGenderProps(Gender gender)
    {
        switch (gender)
        {
            case Gender.Male:
                maleHat.enabled = true;
                femaleHat.enabled = false;
                break;
            case Gender.Female:
                maleHat.enabled = false;
                femaleHat.enabled = true;
                break;
        }

    }
}
