using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TrajectoryManager : MonoBehaviour
{
    //*************************************INSTRUCTIONS***************************//
    //1. Attatch Script To an Empty Called TrajectoryManager. Trajectory manager MUST be in scene at all times
    //2. Create a Line Renderer, as a child of TrajectoryManager ---Assign Line Renderer to this script in Inspector
    //3. Create a Simulated Object that has the exact same Rigid Body Parameters as the Object you are launching --- Assign Simulated Object to this script in Inspector
    //4. Tag Any Collision you want interaction with as "Collidable"
    //5. When you want Trajectory line to appear/disappear, call TrajectoryManager.Instance.EnableLine(true/false) /// 
    //6. Use TrajectoryManager.Instance.SimulateLaunch(transform,force) in your launched objects script to update trajectory

    #region SingletonPattern
    private static TrajectoryManager _instance;
    public static TrajectoryManager Instance
    {
        get
        {
            if (_instance == null)
            {
                Debug.Log("The TrajectoryManager is Null");
            }
            return _instance;
        }
    }
    private void Awake()
    {
        _instance = this;
    }
    #endregion
    [SerializeField] private string ColliderTag = "Collidable";
    private PhysicsScene scenePredictionPhysics;
    [SerializeField] private GameObject _simulatedObject; //drag your simulated player into the inspector
    private GameObject _InstSimulatedObject; //holds the instantiated gameobject
    [SerializeField] LineRenderer line;//drag your lineRenderer into the inspector 
    Scene scenePrediction;
    [SerializeField] int _steps = 20; //how long we will be simulating for. More steps, more lenghth but also less performance
    Vector3[] points;
    private GameObject[] _collidables;
    private List<GameObject> _Instcollidables = new();

    private void Start()
    {
        CreateSceneParameters sceneParam = new(LocalPhysicsMode.Physics3D); //define the parameters of a new scene, this lets us have our own separate physics 
        scenePrediction = SceneManager.CreateScene("Simulation", sceneParam); // create a new scene and implement the parameters we just created
        scenePredictionPhysics = scenePrediction.GetPhysicsScene(); // assign the physics of the scene so we can simulate on our own time. 
        CreateSimObject(); // send over simulated objects (see method below for details)
        line.positionCount = _steps; // set amount of points our drawn line will have
        points = new Vector3[_steps]; // set amount of points our simulation will record, these will later be passed into the line.
        //Material whiteDiffuseMat = new Material(Shader.Find("Unlit/Color"));
        //line.material = whiteDiffuseMat;
        //line.material.color = Color.green;
        //line.startColor = Color.green;
        //line.endColor = Color.green;
        EnableLine(true);
    }

    private void CreateSimObject()  //all objects start in regulare scene, and get sent over on start. this way colliders are dynamic and we can grab refrence to simulated player in first scene.
    {
        _InstSimulatedObject = Instantiate(_simulatedObject);
        SceneManager.MoveGameObjectToScene(_InstSimulatedObject, scenePrediction); // move the simulated player to the sim scene
        _InstSimulatedObject.transform.position = transform.position;
        
    }

    public void SetCollidables()
    {
        _collidables = GameObject.FindGameObjectsWithTag(ColliderTag);      //check for all objects tagged collidable in scene. More optimal routes but this is most user friendly
        foreach (GameObject GO in _collidables)   //duplicate all collidables and move them to the simulation
        {
            GameObject newGO = Instantiate(GO, GO.transform.position, GO.transform.rotation);
            SceneManager.MoveGameObjectToScene(newGO, scenePrediction);
            newGO.GetComponent<Rigidbody>().velocity = GO.GetComponent<Rigidbody>().velocity;
            _Instcollidables.Add(newGO);
        }
    }

    public void DeleteCollidables()
    {
        foreach(GameObject x in _Instcollidables)
        {
            Destroy(x, 1f);
        }
        _Instcollidables.Clear();
    }

    public void EnableLine(bool enabled)  //call this from player to turn the projection line on/off
    {
        line.gameObject.SetActive(enabled);
    }


    Vector3 _lastForce = Vector3.zero; //used to track what the last force input was 
    public void SimulateLaunch(Transform player, Vector3 force)   //call this every frame while player is grabbed;
    {
        if (!scenePredictionPhysics.IsValid())
            return;
        EnableLine(true);
        _InstSimulatedObject.transform.position = player.position; //set sim object to player position ;
        _InstSimulatedObject.transform.rotation = player.rotation; // set sim object to player rotation;
        _InstSimulatedObject.GetComponent<Rigidbody>().velocity = Vector3.zero; // resets sim objects velocity to 0;
        if (_lastForce != force) //if force hasnt changed, skip simulation;
        {
            _InstSimulatedObject.GetComponent<Rigidbody>().AddForce(force, ForceMode.Impulse); //simulate the objects path
            for (int i = 0; i < _steps; i++) // steps is how many physics steps will be done in a frame 
            {
                scenePredictionPhysics.Simulate(0.05f); // move the physics, one step ahead. (anymore than 1 step creates irregularity in the trajectory) Time.fixedDeltaTime
                points[i] = _InstSimulatedObject.transform.position; //record the simulated objects position for that step
                line.SetPosition(i, points[i]); //let the line render know where to plot a point
            }
        }
        _lastForce = force;
    }
}