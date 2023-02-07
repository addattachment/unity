using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CountDown : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] GameObject[] numbers;
    [SerializeField] string numbers_dir;
    private List<GameObject> countDownList = new();

    [SerializeField] private bool testCountDown = false;
    void Start()
    {
        numbers = Resources.LoadAll<GameObject>(numbers_dir);
        
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

    public bool StartCountDown()
    {
        int i = numbers.Length;

        foreach (GameObject number in numbers)
        {
            var _number = i - 1;
            var delay = (numbers.Length- i) * 1.0f;
            StartCoroutine(ShowCountdownNumber(numbers[_number], delay ));
            i--;
        }
        return true;
    }

    private IEnumerator ShowCountdownNumber(GameObject number, float delay)
    {
        Hashtable countDownHt = iTween.Hash("amount", new Vector3(0.0f, 0.0f, 2.0f), "delay", 0.1f, "time", 1.0f, "easetype", "easeInOutExpo");

        yield return new WaitForSeconds(delay);
        countDownList.Add(Instantiate(number, this.transform));
        iTween.MoveBy(number, countDownHt);
        //Destroy(number, 1.0f);
    }
}
