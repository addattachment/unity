using UnityEngine;
using LSL;
public class TargetHit : MonoBehaviour
{
    public bool activeTarget = false; // if activeTarget is true, this is the target to hitSuccesGuid

    private void Start()
    {
    }
    public void SetActiveTarget(bool active)
    {
        activeTarget = active;
    }
   
}
