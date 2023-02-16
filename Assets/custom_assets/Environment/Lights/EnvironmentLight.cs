using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnvironmentLight : MonoBehaviour
{
    [SerializeField] private GameObject sun;

    public void EnableSunlight(bool enabled)
    {
        sun.SetActive(enabled);
    }
}
