using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class TwoHandedGrab : XRGrabInteractable
{
    // Start is called before the first frame update
    void Start()
    {
        //XRBaseInteractor interactor = interactorsSelecting;
        //IXRSelectInteractor newInteractor = firstInteractorSelecting;
        //List<IXRSelectInteractor> moreInteractors =  interactorsSelecting;
    }

    // Update is called once per frame
    void Update()
    {
        //XRGrabInteractable.
    }

    public override bool IsSelectableBy(XRBaseInteractor interactor)
    {

        return base.IsSelectableBy(interactor);
    }
}
