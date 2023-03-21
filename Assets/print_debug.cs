using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class print_debug : MonoBehaviour
{
    private bool selected = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (selected)
        {
            Debug.Log(transform.position);
        }
    }

    public void Print(string text)
    {
        Debug.Log(text);
        //var controller = GetComponent<XRDirectInteractor>();
        //if (controller.selectTarget.CompareTag("ball"))
        //{

        //}
        //if (controller.selectingInteractor.tag.Equals("HandLeft"))
        //{
        //    isLeftHandHoldingGun = true;
        //}
        //else if (controller.selectingInteractor.tag.Equals("HandRight"))
        //{
        //    isRightHandHoldingGun = true;
        //}
    }

    public void Select(bool enabled)
    {
        selected = enabled;
    }
}
