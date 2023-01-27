using System;
using UnityEngine;
using Random = UnityEngine.Random;

public class TargetGroup : MonoBehaviour
{
    //public float rotationSpeed = 0.4f;
    [Serializable] public enum Mode { rotation = 0, translation = 1, unknown = 2 }
    public Mode movementMode = Mode.translation;
    public Vector3 rotationVector = new(0, 0, 0.4f);
    public float xMinBorder = -4.0f;
    public float xMaxBorder = 6.0f;

    public GameObject[] targetList;
    public GameObject hitTarget;
    public bool readyForHit = false;


    private void Start()
    {
        UnityEngine.Random.InitState(System.DateTime.Now.Millisecond);
        // we can randomize the direction of the rings
        rotationVector = ((float)Random.Range(0, 2) * 2 - 1) * rotationVector;
        //targetList = GameObject.FindGameObjectsWithTag("subTarget");
        hitTarget = targetList[0]; // random starting point
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

    public void UpdateDirections()
    {
        foreach (GameObject target in targetList)
        {
            //give each targets a new speed to move
            target.GetComponent<TargetTranslate>().movementSpeed = Random.Range(0.01f, 0.1f); //todo
            //give each targets a new direction to start moving
            target.GetComponent<TargetTranslate>().direction = (Random.Range(0.0f, 1.0f) > 0.5f) ? TargetTranslate.EnumDirection.forward : TargetTranslate.EnumDirection.backward;
        }
    }
}
