using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class announceWinner : MonoBehaviour
{
    [SerializeField] private GameObject winnerUI;
    [SerializeField] private TMP_Text nameTMP;

    public void SetWinner(string name)
    {
        nameTMP.text = name;
    }
    public void ShowWinnerCanvas(string name)
    {
        winnerUI.SetActive(true);
        SetWinner(name);
    }

    public void HideWinnerCanvas() {
        winnerUI.SetActive(false);
        SetWinner("");
    }
}
