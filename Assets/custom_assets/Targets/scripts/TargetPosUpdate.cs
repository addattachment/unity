using UnityEngine;

/// <summary>
/// a class giving positions if we choose rotating objects
/// </summary>
public class TargetPosUpdate : MonoBehaviour
{
    [SerializeField] TargetGroup targetGroup;
    TargetTranslate targetTranslate;

    private Vector3 rotationVector;

    // Start is called before the first frame update
    void Start()
    {
        targetGroup = GetComponentInParent<TargetGroup>();
        rotationVector = targetGroup.GetComponent<TargetGroup>().rotationVector;
        targetTranslate = GetComponent<TargetTranslate>();
    }

    // Update is called once per frame
    void Update()
    {
    }

    public Vector3 GetFuturePositionOfTarget(float time)
    {
        Vector3 result;
        switch (targetGroup.movementMode)
        {
            case TargetGroup.Mode.rotation:
                result = GetFutureRotationPos(time);
                break;
            case TargetGroup.Mode.translation:
                result = GetFutureTranslationPos(time);
                break;
            case TargetGroup.Mode.unknown:
            default:
                Debug.Log("targetgroup unknown should not be used");
                result = new();
                break;
        }
        return result;

    }

    private Vector3 GetFutureTranslationPos(float time)
    {
        Vector3 result = transform.position;
        float resultOrientation = 0.0f;  
        float distance_traveled = targetTranslate.movementSpeed * time;
        float transformPos = 0.0f;
        switch (targetGroup.translateAngle)
        {
            case EnumAngle.horizontal:
                transformPos = transform.position.x;
                break;
            case EnumAngle.vertical:
                transformPos = transform.position.y;
                break;
        }
        Debug.Log("distance to travel " + distance_traveled);
        switch (targetTranslate.direction)
        {
            case EnumDirection.forward:
                if ((transformPos + distance_traveled) > targetGroup.maxBorder)
                {
                    //first we calculate how much we'd be going to far
                    distance_traveled -= (targetGroup.maxBorder - transformPos);
                    // to use this renewed distance going 'back' from the border
                    resultOrientation = targetGroup.maxBorder - distance_traveled;
                }
                else
                {
                    // if we won't be reaching the end, the assumed future position is found by adding the distance traveled
                    resultOrientation += distance_traveled;
                }
                break;
            case EnumDirection.backward:
                if ((transformPos - distance_traveled) < targetGroup.minBorder)
                {
                    //first we calculate how much we'd be going to far
                    distance_traveled -= (transformPos - targetGroup.minBorder);
                    // to use this renewed distance going 'back' from the border
                    resultOrientation = targetGroup.minBorder + distance_traveled;
                }
                else
                {
                    // if we won't be reaching the end, the assumed future position is found by adding the distance traveled
                    resultOrientation -= distance_traveled;
                }
                break;
        }
        switch (targetGroup.translateAngle)
        {
            case EnumAngle.horizontal:
                result.x = resultOrientation;
                break;
            case EnumAngle.vertical:
                result.y = resultOrientation;
                break;
        }
        return result;
    }
    private Vector3 GetFutureRotationPos(float time)
    {
        var angle = time * rotationVector;
        var resultingPos = RotatePointAroundPivot(this.transform.position, targetGroup.transform.position, angle);
        //Debug.Log(resultingPos);
        return resultingPos;
    }

    private Vector3 RotatePointAroundPivot(Vector3 point, Vector3 pivot, Vector3 angles)
    {
        return Quaternion.Euler(angles) * (point - pivot) + pivot;
    }
}
