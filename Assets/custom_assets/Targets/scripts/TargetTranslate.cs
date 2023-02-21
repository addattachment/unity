using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetTranslate : MonoBehaviour
{
    [Range(0.0f, 10.0f)] public float movementSpeed = 0.5f;
    private Vector3 movementVector;
    [Serializable] public enum EnumDirection { forward = 1, backward = -1}
    public EnumDirection direction = EnumDirection.forward;
    private TargetGroup targetGroup;
    // Start is called before the first frame update
    void Start()
    {
        targetGroup = this.GetComponentInParent<TargetGroup>();
        movementVector = new(); 
    }

    // Update is called once per frame
    void Update()
    {
        UpdatePositions();
        transform.Translate(movementVector*Time.deltaTime);
    }

    private void UpdatePositions()
    {
        movementVector.x = ((int)direction) * movementSpeed;
        // alter the direction if we're go
        // TODO this is an approximation, I should take the turning into account?
        if (transform.position.x >= targetGroup.xMaxBorder)
        {
            direction = EnumDirection.backward;
        }
        if (transform.position.x <= targetGroup.xMinBorder)
        {
            direction = EnumDirection.forward;
        }
    }
}
