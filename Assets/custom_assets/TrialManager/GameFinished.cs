using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameFinished : MonoBehaviour
{
    [SerializeField] private GameObject gfUI;
    [SerializeField] private TMP_Text nameTMP;
    // Start is called before the first frame update
    public void SetNextNPC(string name)
    {
        nameTMP.text = "Straks speel je tegen "+name;
    }
    public void ShowGameFinishedCanvas()
    {
        gfUI.SetActive(true);
    }

    public void HideGameFinishedCanvas()
    {
        gfUI.SetActive(false);
        SetNextNPC("");
    }
}
