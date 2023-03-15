using System.Collections;
using System.Collections.Generic;
using UnityEngine;
class NPC : MonoBehaviour
{
    [SerializeField] private Transform NPCHandLocation;
    public GameObject instBall;
    private GameManager gameManager;
    private Player player;
    [SerializeField] private Animator m_Animator;
    private void Start()
    {
        gameManager = GameManager.Instance;
        m_Animator = gameObject.GetComponentInChildren<Animator>();
        player = GetComponent<Player>();
    }
    /// <summary>
    /// ShootBall shoots a ball after a random time
    /// </summary>
    /// <returns></returns>
    public IEnumerator ShootBall(GameObject ball)
    {
        Ball ballScript = ball.GetComponent<Ball>();

        float wait_time = Random.Range(0.2f, 1.5f);
        ballScript.ballIsGrabbed = true;
        yield return new WaitForSeconds(wait_time);
        ballScript.FakeLaunch(ballScript.slingShot._fakeBallStartPointDebug.transform.position);
    }
    /// <summary>
    /// DirectShootBall needs to be used when shooting the ball via animation. We wait until a bool is set true and shoot the ball
    /// </summary>
    public IEnumerator DirectShootBall(GameObject ball)
    {
        m_Animator.SetTrigger("ShootBall");
        ball.transform.parent = NPCHandLocation;
        ball.GetComponent<Rigidbody>().isKinematic = true;
        ball.transform.localPosition = NPCHandLocation.localPosition;
        Ball ballScript = ball.GetComponent<Ball>();
        ballScript.ballIsGrabbed = true;
        yield return new WaitUntil(() => gameManager.NPCShootsBall);
        ball.transform.parent = null;
        ball.GetComponent<Rigidbody>().isKinematic = false;

        gameManager.NPCShootsBall = false;
        ballScript.FakeLaunch(ball.transform.position);
        //ballScript.FakeLaunch(ballScript.slingShot._fakeBallStartPointDebug.transform.position);

    }
}

