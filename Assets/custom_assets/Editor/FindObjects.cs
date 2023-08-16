using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class FindObjects : Editor
{
    [MenuItem("Tools/FindFarObjects")]
    public static void FindFarObjects()
    {
        List<GameObject> farObjs = new List<GameObject>();
        var allObjs = GameObject.FindObjectsOfType<GameObject>();
        for (var i = 0; i < allObjs.Length; i++)
        {
            if ((Mathf.Abs(allObjs[i].transform.position.x) > 1000) ||
                (Mathf.Abs(allObjs[i].transform.position.y) > 500) ||
                (Mathf.Abs(allObjs[i].transform.position.z) > 1000)
            )
            {
                farObjs.Add(allObjs[i]);
            }
        }

        if (farObjs.Count > 0)
        {
            for (var i = 0; i < farObjs.Count; i++)
            {
                Debug.LogError($"Found object {farObjs[i].name} at location {farObjs[i].transform.position}");
            }
        }
        else
        {
            Debug.Log("No Far objects");
        }
    }

    [MenuItem("Tools/FindLargeObjects")]
    public static void FindLargeObjects()
    {
        List<GameObject> largeObjs = new List<GameObject>();
        var allObjs = GameObject.FindObjectsOfType<GameObject>();
        for (var i = 0; i < allObjs.Length; i++)
        {
            if ((Mathf.Abs(allObjs[i].transform.localScale.x) > 1000) ||
                (Mathf.Abs(allObjs[i].transform.localScale.y) > 1000) ||
                (Mathf.Abs(allObjs[i].transform.localScale.z) > 1000)
            )
            {
                largeObjs.Add(allObjs[i]);
            }
        }

        if (largeObjs.Count > 0)
        {
            for (var i = 0; i < largeObjs.Count; i++)
            {
                Debug.LogError($"Found large object {largeObjs[i].name} at location {largeObjs[i].transform.position}");
            }
        }
        else
        {
            Debug.Log("No Large objects");
        }
    }

    public class EditorFindInvalidAABB
    {
        [MenuItem("Tools/FindInvalidAABB")]
        public static void FindInvalidAABB()
        {
            var invalidObjects = GetInvalidAABB();
            if (invalidObjects.Count > 0)
                Debug.LogError($"Found invalidAABB: objects count {invalidObjects.Count}");
            else
                Debug.Log("Not found invalidAABB");
        }

        // Returns invalid objects with wrong scale: for example like -4.019843e-11 or +6.26252e+29
        private static List<GameObject> GetInvalidAABB()
        {
            var result = new List<GameObject>();
            var allObjects = Object.FindObjectsOfType<GameObject>(true);

            foreach (var obj in allObjects)
            {
                var rectTransform = obj.GetComponent<RectTransform>();
                if (rectTransform != null)
                    continue;

                var position = obj.transform.position;
                var scale = obj.transform.localScale;

                if (IsValueInvalid(scale.x) || IsValueInvalid(scale.y) || IsValueInvalid(scale.z) || IsObjectTooFar(position.x) || IsObjectTooFar(position.y) || IsObjectTooFar(position.z)) //IsValueInvalid(position.x) || IsValueInvalid(position.y) || IsValueInvalid(position.z) ||
                {
                    result.Add(obj);
                    Debug.LogError($"Found invalidAABB object {GetObjectPath(obj.transform)}");
                }
            }

            return result;
        }

        private static bool IsValueInvalid(float value)
        {
            bool res = value < 0f && value > 1000f;
            return res;
        }

        private static bool IsObjectTooFar(float value)
        {
            return value > 1000f;
        }

        private static string GetObjectPath(Transform transform)
        {
            var result = "";
            while (transform != null)
            {
                result = transform.gameObject.name + "/" + result;
                transform = transform.parent;
            }

            return result;
        }
    }
}
