using UnityEngine;

public class ScoreDot : MonoBehaviour
{

    [SerializeField] private Color Neutral;
    [SerializeField] private Color Score;
    [SerializeField] private Color Miss;
    [SerializeField] private Material _mat;


    // Start is called before the first frame update
    void Start()
    {
        _mat = this.GetComponent<MeshRenderer>().material;
        _mat.SetColor("_EmissionColor", Neutral);
        _mat.SetColor("_BaseColor", Neutral);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void SetScore(bool hit)
    {
        if (hit)
        {
            _mat.SetColor("_EmissionColor", Score);
            _mat.SetColor("_BaseColor", Score);

        }
        else
        {
            _mat.SetColor("_EmissionColor", Miss);
            _mat.SetColor("_BaseColor", Miss);
        }
    }
    public void CleanScore()
    {
        _mat.SetColor("_EmissionColor", Neutral);
        _mat.SetColor("_BaseColor", Neutral);

    }
}
