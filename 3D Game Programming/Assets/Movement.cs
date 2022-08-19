using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Movement : MonoBehaviour
{
    private Rigidbody rb;

    float horizontalInput;
    float verticalInput;
    bool grounded; //whether or not we are touching the ground
    bool collidingWithGround = false;
    bool readyToJump = true;
    float sprintMultiplier = 1;
    float airMultiplier = 1;

    public float playerHeight; //height of the player
    public float jumpForce;
    public float groundDrag;
    public float airDrag;
    public float airReduction;

    public Transform orientation;
    public TextMeshProUGUI levelText;
    public float moveSpeed;
    public float maxSpeed;


    // Start is called before the first frame update
    void Start()
    {
        //write the level to the text
        levelText.text = "Level " + PlayerPrefs.GetInt("level", 1);

        //looks for the rigidbody component attached to the gameobject this script is attached to
        rb = gameObject.GetComponent<Rigidbody>();

        //gets the spawnpoint from player prefs
        spawnPoint = new Vector3(
            PlayerPrefs.GetFloat("spawnX", 0),
            PlayerPrefs.GetFloat("spawnY", 1),
            PlayerPrefs.GetFloat("spawnZ", 0));

        //sets the spawn point
        transform.position = spawnPoint;
    }

    public void ResetGame()
    {
        PlayerPrefs.SetFloat("spawnX", 0);
        PlayerPrefs.SetFloat("spawnY", 1);
        PlayerPrefs.SetFloat("spawnZ", 0);
        PlayerPrefs.SetInt("level", 0);
        Start();
    }

    Vector3 spawnPoint;

    // Update is called once per frame
    void Update()
    {
        //checks for death
        if(transform.position.y < -10){
            transform.position = spawnPoint;
            rb.velocity = new Vector3(0, 0, 0);
        }

        //checks if touching the ground
        grounded = Physics.Raycast(transform.position, Vector3.down, playerHeight * 0.5f + 0.3f) && numberOfCollisions > 0;

        //if touching ground, increase drag, if not touching ground, decrease drag
        if (grounded)
        {
            rb.drag = groundDrag;
            airMultiplier = 1;
        }
        else
        {
            rb.drag = airDrag;
            airMultiplier = airReduction;
        }
        //calls player input method
        PlayerInput();
    }


    void PlayerInput(){
        //horizontal input gets the A and D keys, vertical input is W and S keys
        horizontalInput = Input.GetAxis("Horizontal");
        verticalInput = Input.GetAxis("Vertical");

        //jumping
        if(Input.GetKey(KeyCode.Space) && grounded && readyToJump)
        {
            readyToJump = false;
            Jump();
            Invoke(nameof(ResetJump), 0.3f);
        }

        //sprinting
        if (Input.GetKey(KeyCode.LeftShift))
        {
            sprintMultiplier = 1.5f;
        }
        else
        {
            sprintMultiplier = 1;
        }
    }
    void ResetJump()
    {
        readyToJump = true;
    }
    private void Jump()
    {
        rb.velocity = new Vector3(rb.velocity.x, 0, rb.velocity.z);
        rb.AddForce(orientation.up * jumpForce, ForceMode.Impulse);
    }
    void FixedUpdate(){
        //call the move player. Fixed Update is run a fixed number of times per second, useful for constant operations like force
        MovePlayer();
        LimitSpeed();
    }
    void MovePlayer(){
        //determine the move direction. Vector3s are Unity's way of storing 3-dimensional vectors (x, y, z)
        Vector3 moveDirection = orientation.forward * verticalInput + orientation.right * horizontalInput;
        
        //apply the force to the rigidbody
        rb.AddForce(moveDirection.normalized * moveSpeed * sprintMultiplier * airMultiplier * 10f, ForceMode.Force);
    }
    void LimitSpeed()
    {
        Vector3 speed = new Vector3(rb.velocity.x, 0, rb.velocity.z);
        if(speed.magnitude > maxSpeed * sprintMultiplier)
        {
            Vector3 limitedSpeed = speed.normalized * maxSpeed * sprintMultiplier;
            rb.velocity = new Vector3(limitedSpeed.x, rb.velocity.y, limitedSpeed.z);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        //checks if the trigger is a checkpoint. requires checkpoint tag
        if (other.gameObject.CompareTag("Checkpoint") 
            && PlayerPrefs.GetInt("level", 0) < other.GetComponent<Checkpoint>().level) //also checks if the level plate is the next level
        {
            spawnPoint = other.transform.position + new Vector3(0, 1, 0);
            PlayerPrefs.SetFloat("spawnX", spawnPoint.x);
            PlayerPrefs.SetFloat("spawnY", spawnPoint.y);
            PlayerPrefs.SetFloat("spawnZ", spawnPoint.z);

            //set level to the level on the checkpoint plate object
            PlayerPrefs.SetInt("level", other.gameObject.GetComponent<Checkpoint>().level);//sets new level

            levelText.text = "Level " + PlayerPrefs.GetInt("level", 1);
        }
    }

    private int numberOfCollisions = 0;
    private void OnCollisionEnter(Collision collision)
    {
        //adds to the number of objects the player is touching
        numberOfCollisions++;
        collidingWithGround = true;
    }
    private void OnCollisionExit(Collision collision)
    {
        //decreases the number of objects that the player is touching
        numberOfCollisions--;
    }


}
