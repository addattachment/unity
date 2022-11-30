using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class transparency_changer : MonoBehaviour
{
    private CanvasRenderer cr;
    private float time = 0.0f;
    private float pingpongtime = 3.0f;
    private float transp_interpol = 0.0f;
    private Color x;
    private bool up = true;
    void Start()
    {
        cr = GetComponent<CanvasRenderer>();
        x = cr.GetColor();
    }

    void FixedUpdate()
    {
        if (time >= pingpongtime) up = false;
        if (time <= 0.0f) up = true;
        if(up)
        {
            time += Time.deltaTime;
        }
        else
        {
            time -= Time.deltaTime;
        }
        transp_interpol = Mathf.Lerp(0.0f, 1.0f, time / pingpongtime);
        x.a = transp_interpol;
        cr.SetColor(x);
    }
}
