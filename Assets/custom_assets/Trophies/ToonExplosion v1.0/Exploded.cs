using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Exploded : MonoBehaviour
{
    [SerializeField] private TrophyList trophy;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Didexplode()
    {
        //Debug.Log("boom");
        trophy.didExplode = true;
        //hide the currentTrophy already
        //trophy.currentTrophy.GetComponent<Renderer>().enabled = false;
    }
}
