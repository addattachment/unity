using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class CaregiverFeedback : MonoBehaviour
{
    [SerializeField] private TMP_Text feedbackText;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void UpdateText(string text)
    {
        feedbackText.SetText(text);
    }
}
