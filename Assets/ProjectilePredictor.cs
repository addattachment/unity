using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ProjectilePredictor : MonoBehaviour
{
    public Vector3 applyForce = new Vector3(0f, 20f, 15f);

    [SerializeField] private Scene sceneMain;
    private Scene scenePrediction;
    private PhysicsScene scenePredictionPhysics;
    [SerializeField]
    LineRenderer line;//drag your lineRenderer into the inspector 
    [SerializeField]
    int _steps = 20; //how long we will be simulating for. More steps, more lenghth but also less performance
    Vector3[] points;
    [SerializeField] private bool usePrimitive = false;
    [SerializeField] private GameObject instObject;
    private void Start()
    {
        sceneMain = SceneManager.GetActiveScene();
        CreateSceneParameters sceneParam = new(LocalPhysicsMode.Physics3D);
        scenePrediction = SceneManager.CreateScene("ScenePredicitonPhysics", sceneParam);
        scenePredictionPhysics = scenePrediction.GetPhysicsScene();
        line.positionCount = _steps; // set amount of points our drawn line will have
        points = new Vector3[_steps]; // set amount of points our simulation will record, these will later be passed into the line.
        Material whiteDiffuseMat = new Material(Shader.Find("Unlit/Color"));
        line.material = whiteDiffuseMat;
        line.material.color = Color.red;
        line.startColor = Color.red;
        line.endColor = Color.red;


    }
    public void EnableLine(bool enabled)  //call this from player to turn the projection line on/off
    {
        line.gameObject.SetActive(enabled);
    }

    public IEnumerator EnableLineAfter(bool enabled, float time)
    {
        yield return new WaitForSeconds(time);
        EnableLine(enabled);
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
            ShootBall();
        if (Input.GetMouseButtonDown(1))
            TrajectoryManager.Instance.SimulateLaunch(transform, applyForce);

    }
    public void DrawTrajectory(Transform startLocation, GameObject simObject, Vector3 force)
    {
        if (!scenePredictionPhysics.IsValid())
            return;
        EnableLine(true);
        GameObject predictionBall;
        if (usePrimitive)
        {
            predictionBall = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            SceneManager.MoveGameObjectToScene(predictionBall, scenePrediction);
            predictionBall.transform.position = startLocation.position;
            predictionBall.AddComponent<Rigidbody>().AddForce(applyForce, ForceMode.Impulse);
        }
        else
        {
            predictionBall = Instantiate(simObject);
            SceneManager.MoveGameObjectToScene(predictionBall, scenePrediction);
            predictionBall.transform.position = startLocation.position;
            predictionBall.GetComponent<Rigidbody>().AddForce(force, ForceMode.Impulse);
        }
        //Material redMaterial = new Material(Shader.Find("Diffuse"));
        //redMaterial.color = Color.red;

        for (int i = 0; i < _steps; i++)
        {
            scenePredictionPhysics.Simulate(Time.fixedDeltaTime);
            points[i] = predictionBall.transform.position; //record the simulated objects position for that step
            line.SetPosition(i, points[i]); //let the line render know where to plot a point
        }

        Destroy(predictionBall);
        Debug.Break();
    }
    private void ShootBall()
    {
        if (!scenePredictionPhysics.IsValid())
            return;
        DrawTrajectory(transform, instObject, applyForce);
        GameObject ball;
        if (usePrimitive)
        {
            ball = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            SceneManager.MoveGameObjectToScene(ball, sceneMain);
            ball.AddComponent<Rigidbody>().AddForce(applyForce, ForceMode.Impulse);
        }
        else
        {
            ball = Instantiate(instObject);
            SceneManager.MoveGameObjectToScene(ball, sceneMain);
            ball.GetComponent<Rigidbody>().AddForce(applyForce, ForceMode.Impulse);
        }
    }
}