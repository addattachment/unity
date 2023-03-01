using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SwitchScene : MonoBehaviour
{
    [SerializeField] private GameManager gameManager;
    [SerializeField] private TMP_Text buttonText;
    [SerializeField] private string nextScene = "Basescene";

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Hand"))
        {
            StartCoroutine(SwitchToScene());
        }
    }

    private IEnumerator SwitchToScene()
    {
        gameObject.GetComponent<Renderer>().material.SetColor("_BaseColor", Color.red);
        buttonText.SetText("op naar het volgende!");
        yield return new WaitForSeconds(1.5f);
        gameManager.SwitchScene(nextScene);
    }
}
