using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class print_debug : MonoBehaviour
{
    private bool selected = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (selected)
        {
            Debug.Log(transform.position);
        }
    }

    public void Print(string text)
    {
        Debug.Log(text);
    }

    public void Select(bool enabled)
    {
        selected = enabled;
    }
}
