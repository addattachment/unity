using UnityEngine;

/// <summary>
/// a class giving positions if we choose rotating objects
/// </summary>
public class TargetPosUpdate : MonoBehaviour
{
    [SerializeField] TargetGroup targetGroup;
    TargetTranslate targetTranslate;

    private Vector3 rotationVector;

    [SerializeField] Vector3 globalPos;
    private string _name;
    // Start is called before the first frame update
    void Start()
    {
        targetGroup = GetComponentInParent<TargetGroup>();
        rotationVector = targetGroup.GetComponent<TargetGroup>().rotationVector;
        targetTranslate = GetComponent<TargetTranslate>();
        _name = "" + Time.time;
    }

    // Update is called once per frame
    void Update()
    {
        globalPos = this.transform.position;
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
                //PLACE TEMP OBJECT
#if DEBUGCUBE
                GameObject temp = GameObject.CreatePrimitive(PrimitiveType.Cube);
                temp.GetComponent<Renderer>().material.color = GetComponent<Renderer>().material.color; // set to the color of the ring
                temp.GetComponent<BoxCollider>().enabled = false;
                Destroy(temp, 1.0f);
                temp.transform.position = result;
                temp.name = "standin";
#endif
                //TODO check why the must isn't working correctly
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
        //temp
#if DEBUGCUBE
        GameObject temp = GameObject.CreatePrimitive(PrimitiveType.Cube);
        temp.GetComponent<Renderer>().material.color = Color.yellow; // set to the color of the ring
        temp.GetComponent<BoxCollider>().enabled = false;
        temp.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
        temp.transform.position = this.transform.position;
        temp.name = "startlocation"+_name;
#endif

        float distance_traveled = targetTranslate.movementSpeed * time;
        Debug.Log("distance to travel " + distance_traveled);
        if(targetTranslate.direction == TargetTranslate.EnumDirection.forward)
        {   
           if( (transform.position.x + distance_traveled) > targetGroup.xMaxBorder)
            {
                //first we calculate how much we'd be going to far
                distance_traveled -= (targetGroup.xMaxBorder - transform.position.x);
                // to use this renewed distance going 'back' from the border
                result.x = targetGroup.xMaxBorder - distance_traveled;
            }
           else
            {
                // if we won't be reaching the end, the assumed future position is found by adding the distance traveled
                result.x += distance_traveled;
            }
        }
        if (targetTranslate.direction == TargetTranslate.EnumDirection.backward)
        {
            if ((transform.position.x - distance_traveled) < targetGroup.xMinBorder)
            {
                //first we calculate how much we'd be going to far
                distance_traveled -= (transform.position.x - targetGroup.xMinBorder);
                // to use this renewed distance going 'back' from the border
                result.x = targetGroup.xMinBorder + distance_traveled;
            }
            else
            {
                // if we won't be reaching the end, the assumed future position is found by adding the distance traveled
                result.x -= distance_traveled;
            }
        }
#if DEBUGCUBE
        GameObject temp2 = GameObject.CreatePrimitive(PrimitiveType.Cube);
        temp2.GetComponent<Renderer>().material.color = Color.cyan;
        temp2.GetComponent<BoxCollider>().enabled = false;
        temp2.transform.localScale = new Vector3(0.3f, 0.3f, 0.3f);
        temp2.transform.position = result;
        temp2.name = "transplacelocation"+_name;
#endif
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
