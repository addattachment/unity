using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TutorialMgr : MonoBehaviour
{
    [SerializeField] private GameObject ShootTutorialScreens;
    [SerializeField] private TMP_Text ShootTutorialScreensText;
    [SerializeField] private GameObject NextLevelArrow;
    [SerializeField] private TrialStateManager trialState;
    [SerializeField] private Appear nextLevelButton;

    private GameManager gameManager;
    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameManager.Instance;
        StartCoroutine(ShowTutorialScreen());
    }

    // Update is called once per frame
    void Update()
    {
        if (gameManager.currentTrial > 0 && trialState.currentState == trialState.trialState && !NextLevelArrow.GetComponent<MeshRenderer>().enabled)
        {
            nextLevelButton.Raise();
            NextLevelArrow.GetComponent<MeshRenderer>().enabled = true;
            ShootTutorialScreensText.text = "Als je gereed bent, duw links op de knop om verder te gaan";
        }
    }

    private IEnumerator ShowTutorialScreen()
    {
        yield return new WaitForSeconds(1.5f);
        ShootTutorialScreens.GetComponent<Appear>().Raise();
    }
}
