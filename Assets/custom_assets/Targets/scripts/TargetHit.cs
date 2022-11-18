using UnityEngine;

public class TargetHit : MonoBehaviour
{
    [SerializeField] private Material material;
    [SerializeField] private AudioSource hitSound;
    [SerializeField] private AudioSource missSound;
    [SerializeField] private GameObject TargetGO;
    private Target Target;
    public bool activeTarget = false; // if activeTarget is true, this is the target to hitSuccesGuid

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
        if (Target.readyForHit)
        {
            Target.readyForHit = false;
            //if (collision.gameObject.GetComponent<Renderer>().material.name == material.name)
            if (activeTarget)
            {
                Debug.Log("correct target touched!");
                hitSound.Play();
            }
            else
            {
                Debug.Log("wrong!");
                missSound.Play();
            }
        }
        // we tell the bullet that it did hitSuccesGuid a target, so we don't have to play a sound anymore.
        collision.gameObject.GetComponent<Ball>().didHitATarget = true;
    }
}
