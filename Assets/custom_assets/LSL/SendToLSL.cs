using LSL;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SendToLSL : MonoBehaviour
{
    [SerializeField] private OutletPassThrough outletPassThrough;
    [SerializeField] private bool repeatedExec = false;
    private float _time = 0.0f;
    [SerializeField] private float _exec_time = 5.0f;
    // Start is called before the first frame update
    void Start()
    {
        outletPassThrough = FindObjectOfType<OutletPassThrough>();
    }

    // Update is called once per frame
    void Update()
    {
        if (repeatedExec)
        {
            _time += Time.deltaTime;
            if(_time >= _exec_time)
            {
                _time = 0.0f;
                outletPassThrough.SendMarker(Marker.test) ;
            }
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        outletPassThrough.SendMarker(Marker.test);
    }
}
