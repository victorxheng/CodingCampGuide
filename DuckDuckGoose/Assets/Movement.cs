using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{

    Rigidbody rb;

    private void Awake()
    {
        rb = GetComponent<Rigidbody>();
    }
    void Start()
    {
        OnSpawn();
    }

    private void OnSpawn()
    {
        alive = true;
    }

    private float score;
    private bool alive;

    void Update()
    {
        if (alive) score += Time.deltaTime;
        rb.velocity = new Vector3(rb.velocity.x, rb.velocity.y, )
    }
}
