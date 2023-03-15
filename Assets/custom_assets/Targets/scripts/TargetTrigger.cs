using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

public class TargetTrigger : MonoBehaviour
{
    [SerializeField] private Collider coll;

    public void ResetTrigger()
    {
        coll.enabled = true;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("simBall"))
        {
            Debug.Log("simBall loc: " + collision.gameObject.transform.position);
            Debug.Log("ring center: " + transform.position);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("simBall"))
        {
            Debug.Log("simBall loc: " + other.transform.position);
            Debug.Log("ring center: " + transform.position);
        }
    }
}

