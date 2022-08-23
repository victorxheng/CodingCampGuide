using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DetectCollision : MonoBehaviour
{
    public Transform player;

    private void OnCollisionEnter(Collision collision)
    {
        player.GetComponent<Movement>().OnDeath();
    }
    private void Update()
    {
        transform.position = player.transform.position;
    }
}
