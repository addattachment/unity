using UnityEngine;

public class TargetGroup : MonoBehaviour
{
    //public float rotationSpeed = 0.4f;
    public Vector3 rotationVector = new(0, 0, 0.4f);


    // Update is called once per frame
    void FixedUpdate()
    {
        transform.Rotate(rotationVector);
    }
}
