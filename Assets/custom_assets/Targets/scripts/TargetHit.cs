using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetHit : MonoBehaviour
{
    [SerializeField] private Material material;
    [SerializeField] private AudioSource cheering;
    [SerializeField] private AudioSource booing;
    [SerializeField] private GameObject TargetGO;
    private Target Target;
    public bool activeTarget = false; // if activeTarget is true, this is the target to hit

    private void Start()
    {
        material = GetComponent<Renderer>().material;
        Target = TargetGO.GetComponent<Target>();
    }
    public void SetActiveTarget(bool active)
    {
        activeTarget = active;
    }
    private void OnCollisionEnter(Collision collision)
    {
        Debug.Log("hit by "+collision.gameObject.name);
        Debug.Log(collision.gameObject.GetComponent<Renderer>().material.name+ material.name);
        if (Target.readyForHit)
        {
            Target.readyForHit = false;
            //if (collision.gameObject.GetComponent<Renderer>().material.name == material.name)
            if(activeTarget)
            {
                Debug.Log("correct target touched!");
                cheering.Play();
            }
            else
            {
                Debug.Log("wrong!");
                booing.Play();
            }
        }
    }
}
