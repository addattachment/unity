using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GazePointHover : MonoBehaviour
{
    private Hashtable ht;
    [SerializeField] private Vector3 moveDist = new(0, 0.4f, 0);
    // Start is called before the first frame update
    void Start()
    {
        ht = iTween.Hash("position", transform.position + moveDist,  "time", 1.0f, "easetype", "easeInOutSine", "looptype", "pingpong");

        iTween.MoveFrom(gameObject, ht);


    }

    // Update is called once per frame
    void Update()
    {
    }
}
