using UnityEngine;

public class Target : MonoBehaviour
{
    //public float rotationSpeed = 0.4f;
    public Vector3 rotationVector = new(0, 0, 0.4f);
    public bool readyForHit = false;


    // Update is called once per frame
    void FixedUpdate()
    {
        transform.Rotate(rotationVector);
    }
}
