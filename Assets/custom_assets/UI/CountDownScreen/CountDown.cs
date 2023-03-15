using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CountDown : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] List<GameObject> numbers;
    [SerializeField, Tooltip("subdirectory of Resources where trophy gameobjects are stored")] string numbers_directory;
    private List<GameObject> countDownList = new();
    private GameObject numberInst;
    [SerializeField] private bool testCountDown = false;
    private bool loaded = false;
    public bool countDownFinished = false;
    [SerializeField] private Light spotLight;
    void LoadNumbers()
    {
        numbers = new List<GameObject>(Resources.LoadAll<GameObject>(numbers_directory));
        numbers.Reverse();
        loaded = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (testCountDown)
        {
            testCountDown = false;
            StartCountDown();
        }
    }

    public void StartCountDown()
    {
        //make sure numbers are loaded
        if (!loaded)
        {
            LoadNumbers();
        }
        spotLight.enabled = true;
        countDownFinished = false;
        StartCoroutine(LaunchNumber(numbers));
        Debug.Log("Finished countdown");
    }
    private IEnumerator LaunchNumber(List<GameObject> numbers)
    {
        foreach (GameObject number in numbers)
        {
            yield return StartCoroutine(ShowCountdownNumber(number, 1.0f));
        }
        spotLight.enabled = false;
        countDownFinished = true;
    }
    private IEnumerator ShowCountdownNumber(GameObject number, float delay)
    {
        Hashtable countDownHt = iTween.Hash("amount", new Vector3(0.0f, 0.2f, -2.0f), "delay", 0.1f, "time", 1.0f, "easetype", "easeInOutExpo");

        numberInst = Instantiate(number, this.transform);
        //countDownList.Add(numberInst);
        iTween.MoveBy(numberInst, countDownHt);
        yield return new WaitForSeconds(delay);

        Destroy(numberInst, 0.1f);
    }
}
