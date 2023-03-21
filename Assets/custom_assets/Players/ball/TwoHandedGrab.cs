using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Transformers;

public class TwoHandedGrab : XRGrabInteractable
{
    private bool isAlreadyGrabbing = false;
    [SerializeField] private Transform LeftAttach;
    [SerializeField] private Transform RightAttach;
    // Start is called before the first frame update
    void Start()
    {
        //XRBaseInteractor interactor = interactorsSelecting;
        //IXRSelectInteractor newInteractor = firstInteractorSelecting;
        //List<IXRSelectInteractor> moreInteractors =  interactorsSelecting;
        //attachTransform = LeftAttach;
        //secondaryAttachTransform = RightAttach;
    }

    // Update is called once per frame
    void Update()
    {

    }
    protected override void OnSelectExiting(SelectExitEventArgs args)
    {
        base.OnSelectExiting(args);
        if (HasNoInteractors())
        {
            Debug.Log("No more");
        }
    }
    private bool HasMultipleInteractors()
    {
        return interactorsSelecting.Count > 1;
    }    
    private bool HasNoInteractors()
    {
        return interactorsSelecting.Count == 0 ;
    }
    protected override void OnSelectEntering(SelectEnterEventArgs args)
    {
        base.OnSelectEntering(args);
        if(HasMultipleInteractors())
        {
            Debug.Log("multiple");
        }
        //if (isSelected)
        //{
        //    Debug.Log("already selected");
        //    attachTransform = LeftAttach;
        //    secondaryAttachTransform = RightAttach;
        //}
        //else
        //{
            //if (args.interactorObject.transform.CompareTag("left"))
            //{
            //    Debug.Log("selecting by left");
            //    attachTransform = LeftAttach;
            //}
            //else
            //{
            //    Debug.Log("selecting by right");
            //    attachTransform = RightAttach;
            //}
        //}
    }


    //public override bool IsSelectableBy(XRBaseInteractor interactor)
    //{

    //    return base.IsSelectableBy(interactor);
    //}
}
