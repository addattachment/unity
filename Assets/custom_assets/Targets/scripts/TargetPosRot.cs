using UnityEngine;

/// <summary>
/// a class giving positions if we choose rotating objects
/// </summary>
public class TargetPosRot : MonoBehaviour
{
    [SerializeField] GameObject rotationGroup;
    private Vector3 rotationVector;
    // Start is called before the first frame update
    void Start()
    {
        rotationVector = rotationGroup.GetComponent<TargetGroup>().rotationVector;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public Vector3 GetFuturePositionOfTarget(float time)
    {
        var angle = time * rotationVector;
        var resultingPos = RotatePointAroundPivot(this.transform.position, rotationGroup.transform.position, angle);
        //Debug.Log(resultingPos);
        return resultingPos;
    }

    private Vector3 RotatePointAroundPivot(Vector3 point, Vector3 pivot, Vector3 angles)
    {
        return Quaternion.Euler(angles) * (point - pivot) + pivot;
    }
}
