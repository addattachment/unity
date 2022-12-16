using System;
using UnityEngine;

/// <summary>
/// a class giving area's in which we'd hit the target
/// </summary>
public class TargetMouthArea : MonoBehaviour
{
    [SerializeField, Range(0.0f, 2.0f)] private float scaleMax = 1.8f;
    [SerializeField, Range(0.0f, 2.0f)] private float scaleMin = 0.4f;
    [SerializeField, Range(0.0f, 2.0f), Tooltip("must be larger than startTime!")] private float scaleDuration = 1.4f;
    [SerializeField, Range(0.0f, 2.0f)] private float startTime = 0.2f;
    [SerializeField] private bool adaptX;
    [SerializeField] private bool adaptY;
    [SerializeField] private bool adaptZ;
    private bool countUp = true;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        float perc = (scaleDuration - startTime) / scaleDuration;
        if (countUp)
        {
            startTime += Time.deltaTime;
            if (startTime >= scaleDuration)
            {
                countUp = false;
            }
        }
        else 
        {
            startTime -= Time.deltaTime;
            if (startTime <= 0.0f)
            {
                countUp = true;
            }
        }

        float _factor = Mathf.Lerp(scaleMin, scaleMax, perc);
        var x = adaptX ? _factor : transform.localScale.x;
        var y = adaptY ? _factor : transform.localScale.y;
        var z = adaptZ ? _factor : transform.localScale.z;
        transform.localScale = new Vector3(x, y, z);
    }

    //public Vector3 GetFuturePositionOfTarget(float time)
    //{
    //    var angle = time * rotationVector;
    //    var resultingPos = RotatePointAroundPivot(this.transform.position, rotationGroup.transform.position, angle);
    //    //Debug.Log(resultingPos);
    //    return resultingPos;
    //}

    //private Vector3 RotatePointAroundPivot(Vector3 point, Vector3 pivot, Vector3 angles)
    //{
    //    return Quaternion.Euler(angles) * (point - pivot) + pivot;
    //}
}
