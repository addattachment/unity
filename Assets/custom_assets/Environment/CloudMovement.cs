using UnityEngine;

public class CloudMovement : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] private Vector3 cloudMovement;

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        this.transform.Translate(cloudMovement);
    }
}
