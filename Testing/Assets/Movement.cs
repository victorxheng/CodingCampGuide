using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        //looks for the rigidbody component attached to the gameobject this script is attached to
        rb = gameObject.GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {

        grounded = Physics.Raycast(transform.position, Vector3.down, playerHeight * 0.5f + 0.3f);
       
        //calls player input method
        PlayerInput();
    }

    float horizontalInput;
    float verticalInput;
    bool grounded; //whether or not we are touching the ground
    float playerHeight = 1; //height of the player
    bool readyToJump = true;
    public float jumpForce;
    float sprintMultiplier = 1;

    void PlayerInput(){
        //horizontal input gets the A and D keys, vertical input is W and S keys
        horizontalInput = Input.GetAxis("Horizontal");
        verticalInput = Input.GetAxis("Vertical");

        if(Input.GetKey(KeyCode.Space) && grounded && readyToJump)
        {
            readyToJump = false;
            Jump();
            Invoke(nameof(ResetJump), 0.3f);
        }

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
    }

    private Rigidbody rb;
    public Transform orientation;
    float moveSpeed = 30;
    void MovePlayer(){
        //determine the move direction. Vector3s are Unity's way of storing 3-dimensional vectors (x, y, z)
        Vector3 moveDirection = orientation.forward * verticalInput + orientation.right * horizontalInput;
        
        //apply the force to the rigidbody
        rb.AddForce(moveDirection.normalized * moveSpeed * sprintMultiplier, ForceMode.Force);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Checkpoint"))
        {
            //set new spawn point
        }
    }
}
