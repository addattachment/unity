using System;
using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;

public class TargetGroup : MonoBehaviour
{
    [Serializable] public enum Mode { rotation = 0, translation = 1, unknown = 2 }
    public Mode movementMode = Mode.translation;
    public Vector3 rotationVector = new(0, 0, 0.4f);
    [SerializeField] private float xMinBorder = -6.0f;
    [SerializeField] private float xMaxBorder = 6.0f;
    [SerializeField] private float xMinSpeed = 1.0f;
    [SerializeField] private float xMaxSpeed = 10.0f;
    [SerializeField] private float yMinBorder = 1.0f;
    [SerializeField] private float yMaxBorder = 6.0f;
    [SerializeField] private float yMinSpeed = 1.0f;
    [SerializeField] private float yMaxSpeed = 5.0f;

    [HideInInspector] public float minBorder;
    [HideInInspector] public float maxBorder;
    [HideInInspector] public float minSpeed;
    [HideInInspector] public float maxSpeed;
    public GameObject[] targetList;
    public GameObject hitTarget;
    public bool readyForHit = false;
    public EnumAngle translateAngle = EnumAngle.horizontal;


    private void Start()
    {
        Random.InitState(DateTime.Now.Millisecond);
        // we can randomize the direction of the rings
        rotationVector = ((float)Random.Range(0, 2) * 2 - 1) * rotationVector;
        hitTarget = targetList[0]; // random starting point
        SetAngle();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (movementMode == Mode.rotation) { transform.Rotate(rotationVector); }
    }

    public void SetNewHitTarget()
    {
        if (targetList.Length > 0)
        {
            GameObject NewHitTarget = targetList[Random.Range(0, targetList.Length)];
            foreach (GameObject target in targetList)
            {
                //choose the new targets
                if (target == NewHitTarget)
                {
                    target.GetComponent<TargetHit>().SetActiveTarget(true);
                    hitTarget = target;
                }
                else
                {
                    target.GetComponent<TargetHit>().SetActiveTarget(false);
                }
            }
        }
    }

    public void SetAllStartingPos()
    {
        foreach (GameObject target in targetList)
        {
            target.GetComponent<TargetTranslate>().SetStartingPos();
        }
    }

    private void SetAngle()
    {
        //give each targets the same new angle to start moving
        translateAngle = (Random.Range(0.0f, 1.0f) > 0.5f) ? EnumAngle.horizontal : EnumAngle.vertical;
        switch (translateAngle)
        {
            case EnumAngle.horizontal:
                minBorder = xMinBorder;
                maxBorder = xMaxBorder;
                minSpeed = xMinSpeed;
                maxSpeed = xMaxSpeed;
                break;
            case EnumAngle.vertical:
                minBorder = yMinBorder;
                maxBorder = yMaxBorder;
                minSpeed = yMinSpeed;
                maxSpeed = yMaxSpeed;
                break;
        }
    }
    public void SetAllNewTranslateValues()
    {
        SetAngle();
        foreach (GameObject target in targetList)
        {
            target.GetComponent<TargetTranslate>().SetNewStartingValues();
        }
    }

    public void HoldAllTargets()
    {
        foreach (GameObject target in targetList)
        {
            target.GetComponent<TargetTranslate>().movementSpeed = 0.0f;
        }
    }
}
