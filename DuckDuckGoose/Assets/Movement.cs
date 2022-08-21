using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Movement : MonoBehaviour
{

    private Rigidbody rb;

    public GameObject explosion;
    public TextMeshProUGUI scoreText;
    public TextMeshProUGUI highScoreText;

    public void OnDeath()
    {
        //player dies
        Instantiate(explosion, transform.position, Quaternion.identity);
        alive = false;
    }
   

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }
    void Start()
    {
        OnSpawn();
        Invoke(nameof(IncreaseScore), delayBetweenScoreIncrease);
    }

    public float delayBetweenScoreIncrease;
    private void IncreaseScore()
    {
        score++;
        if (alive) Invoke(nameof(IncreaseScore), delayBetweenScoreIncrease);
    }

    private void OnSpawn()
    {
        alive = true;
    }

    private int score;
    private bool alive;
    private bool grounded = false;

    void Update()
    {
        grounded = Physics.Raycast(transform.position + new Vector3(0, 0.15f, 0), Vector3.down, 0.2f);
        if(alive) rb.velocity = new Vector3(0,Input.GetKey(KeyCode.Space) || !grounded ? rb.velocity.y : 0, CalculateSpeed(score));

        ComputerInput();

        transform.position = new Vector3(Mathf.Lerp(transform.position.x, targetX, 0.04f), Mathf.Clamp( transform.position.y, -0.1f, 100), transform.position.z);

        scoreText.text = "Score: " + score;
        
    }

    public void ComputerInput()
    {
        if (Input.GetKeyDown(KeyCode.LeftArrow) || Input.GetKeyDown(KeyCode.A)) moveLeft();
        else if (Input.GetKeyDown(KeyCode.RightArrow) || Input.GetKeyDown(KeyCode.D)) moveRight();

        if (Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.W)) TryJump();

        if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow)) Slide();
        else transform.localScale = new Vector3(1, 1, Mathf.Lerp(transform.localScale.z, 1, 0.1f));
    }

    public float slideScale;
    private void Slide()
    {
        transform.localScale = new Vector3(1, 1, Mathf.Lerp(transform.localScale.z, slideScale, 0.1f));
        rb.AddForce(Vector3.down * 4);
    }


    public float jumpForce;
    private void TryJump()
    {
        if(grounded)
        {
            rb.AddForce(new Vector3(0, jumpForce, 0), ForceMode.Impulse);
        }
    }

    private float spacing = 3.3333f;
    private float targetX = 0;

    private void moveLeft()
    {
        targetX = Mathf.Clamp(targetX - spacing, -spacing, spacing);
    }

    private void moveRight()
    {
        targetX = Mathf.Clamp(targetX + spacing, -spacing, spacing);
    }

    
    private float CalculateSpeed(int score)
    {
        //these values modify speeds
        float power = 1f / 4f;
        float scale = 10;
        float horizontalOffset = 1;
        float verticalOffset = 1;

        return scale * Mathf.Pow(score + horizontalOffset, power) + verticalOffset;

    }

}
