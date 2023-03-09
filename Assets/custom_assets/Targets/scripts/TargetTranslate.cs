using System;
using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;
[Serializable] public enum EnumDirection { forward = 1, backward = -1 }
[Serializable] public enum EnumAngle { vertical = 1, horizontal = -1 }
public class TargetTranslate : MonoBehaviour
{
    [Range(0.0f, 10.0f)] public float movementSpeed = 0.5f;
    private Vector3 movementVector;


    public EnumDirection direction = EnumDirection.forward;
    [SerializeField] private TargetGroup targetGroup;
    private bool dirHasChanged = false;
    //[SerializeField] private Vector3 velocityVector;
    // Start is called before the first frame update
    void Start()
    {
        targetGroup = GetComponentInParent<TargetGroup>();
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

    public void StartMovement()
    {
        switch (targetGroup.translateAngle)
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
        GetComponent<Rigidbody>().velocity = movementVector;
        GetComponent<Rigidbody>().isKinematic = false;
    }

    private void UpdatePositions()
    {
        switch (targetGroup.translateAngle)
        {
            case EnumAngle.horizontal:
                if (transform.position.x >= targetGroup.maxBorder)
                {
                    direction = EnumDirection.backward;
                    dirHasChanged = true;
                }
                if (transform.position.x <= targetGroup.minBorder)
                {
                    direction = EnumDirection.forward;
                    dirHasChanged = true;
                }
                movementVector.x = ((int)direction) * movementSpeed;
                break;
            case EnumAngle.vertical:
                if (transform.position.y >= targetGroup.maxBorder)
                {
                    direction = EnumDirection.backward;
                    dirHasChanged = true;
                }
                if (transform.position.y <= targetGroup.minBorder)
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
        //give each target a random starting point (only change x axis)
        Vector3 currentPos = transform.position;
        Vector3 futurePos = currentPos;
        //switch (targetGroup.translateAngle)
        //{
        //    case EnumAngle.horizontal:
        //        futurePos.x = Random.Range(targetGroup.minBorder, targetGroup.maxBorder);
        //        break;
        //    case EnumAngle.vertical:
        //        futurePos.y = Random.Range(targetGroup.minBorder, targetGroup.maxBorder);
        //        break;
        //}
        futurePos.x = Random.Range(targetGroup.xMinBorder, targetGroup.xMaxBorder);
        futurePos.y = Random.Range(targetGroup.yMinBorder, targetGroup.yMaxBorder);
        Hashtable startPosHt = iTween.Hash("position", futurePos, "delay", 0.1f, "time", 1.0f, "easetype", "easeOutBounce");
        iTween.MoveTo(gameObject, startPosHt);
    }

    public void SetNewStartingValues()
    {
        //give each targets a new speed to move
        movementSpeed = Random.Range(targetGroup.minSpeed, targetGroup.maxSpeed);
        //give each targets a new direction to start moving
        direction = (Random.Range(0.0f, 1.0f) > 0.5f) ? EnumDirection.forward : EnumDirection.backward;
    }
}
