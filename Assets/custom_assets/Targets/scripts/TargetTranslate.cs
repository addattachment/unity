using System;
using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;
[Serializable] public enum EnumDirection { forward = 1, backward = -1 }
[Serializable] public enum EnumAngle { vertical = 1, horizontal = -1 }
public class TargetTranslate : MonoBehaviour
{
    [Range(0.0f, 10.0f)] public float movementSpeed = 0.5f;
    [SerializeField] private Vector3 movementVector;


    public EnumDirection direction = EnumDirection.forward;
    //[SerializeField] private TargetGroup targetGroup;
    public EnumAngle translateAngle;
    public float xMaxBorder;
    public float xMinBorder;
    public float yMaxBorder;
    public float yMinBorder;
    public TargetGroup.Mode movementMode;
    public Vector3 TargetGroupPivotPoint;

    private bool dirHasChanged = false;
    //[SerializeField] private Vector3 velocityVector;
    // Start is called before the first frame update
    void Start()
    {
        movementVector = new();
    }

    // Update is called once per frame
    void Update()
    {
        UpdatePositions();
        if (dirHasChanged)
        {
            dirHasChanged = false;
            SetMovement();
        }
        //transform.Translate(movementVector * Time.deltaTime);

    }


    public void UpdateTranslateSettings(TargetGroup.Mode movement, EnumAngle angle, float xMin, float xMax, float yMin, float yMax, Vector3 pivotPoint)
    {
        movementMode = movement;
        translateAngle = angle;
        xMaxBorder = xMax;
        yMaxBorder = yMax;
        xMinBorder = xMin;
        yMinBorder = yMin;
        TargetGroupPivotPoint = pivotPoint;
    }
    public void StartMovement()
    {
        movementVector = Vector3.zero;
        switch (translateAngle)
        {
            case EnumAngle.horizontal:
                movementVector.x = ((int)direction) * movementSpeed;
                break;
            case EnumAngle.vertical:
                movementVector.y = ((int)direction) * movementSpeed;
                break;
        }
        SetMovement();
    }

    private void SetMovement()
    {
        GetComponent<Rigidbody>().isKinematic = false;
        GetComponent<Rigidbody>().velocity = movementVector;
    }

    private void UpdatePositions()
    {
        switch (translateAngle)
        {
            case EnumAngle.horizontal:
                if (transform.position.x >= xMaxBorder)
                {
                    direction = EnumDirection.backward;
                    dirHasChanged = true;
                }
                if (transform.position.x <= xMinBorder)
                {
                    direction = EnumDirection.forward;
                    dirHasChanged = true;
                }
                movementVector.x = ((int)direction) * movementSpeed;
                break;
            case EnumAngle.vertical:
                if (transform.position.y >= yMaxBorder)
                {
                    direction = EnumDirection.backward;
                    dirHasChanged = true;
                }
                if (transform.position.y <= yMinBorder)
                {
                    direction = EnumDirection.forward;
                    dirHasChanged = true;
                }
                movementVector.y = ((int)direction) * movementSpeed;
                break;
        }
    }
    public void SetStartingPos()
    {
        //give each target a random starting point
        Vector3 currentPos = transform.position;
        Vector3 futurePos = currentPos;
        //Random.InitState((int)DateTime.Now.Ticks);
        futurePos.x = Random.Range(xMinBorder, xMaxBorder);
        futurePos.y = Random.Range(yMinBorder, yMaxBorder);
        Hashtable startPosHt = iTween.Hash("position", futurePos, "delay", 0.1f, "time", 1.0f, "easetype", "easeOutBounce");
        iTween.MoveTo(gameObject, startPosHt);
    }

    public void SetNewStartingValues(float minSpeed, float maxSpeed)
    {
        //give each targets a new speed to move
        movementSpeed = Random.Range(minSpeed, maxSpeed);
        //give each targets a new direction to start moving
        direction = (Random.Range(0.0f, 1.0f) > 0.5f) ? EnumDirection.forward : EnumDirection.backward;
    }
}
