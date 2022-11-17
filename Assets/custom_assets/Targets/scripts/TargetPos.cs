using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetPos : MonoBehaviour
{
    [SerializeField] GameObject _parent;
    private Vector3 rotationVector;
    // Start is called before the first frame update
    void Start()
    {
        _parent = this.transform.parent.gameObject;
        rotationVector = _parent.GetComponent<Target>().rotationVector;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public Vector3 GetFuturePositionOfTarget(float time)
    {
        var angle = time * rotationVector;
        var resultingPos = RotatePointAroundPivot(this.transform.position, _parent.transform.position, angle);
        //Debug.Log(resultingPos);
        return resultingPos;
    }
    
    private Vector3 RotatePointAroundPivot(Vector3 point, Vector3 pivot, Vector3 angles)
    {
        return Quaternion.Euler(angles) * (point - pivot) + pivot;
    }
}
