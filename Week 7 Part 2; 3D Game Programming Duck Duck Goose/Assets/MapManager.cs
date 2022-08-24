using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapManager : MonoBehaviour
{
    public GameObject plane;
    public Transform player;

    public float chunkWidth;
    public int chunkRenderAmount;
   

    private List<GameObject> spawnedObjects = new List<GameObject>();
    private float lastSpawnedChunkPosition = -20;

    public List<GameObject> obstacles;


    // Update is called once per frame
    void Update()
    {
        if(player.transform.position.z + chunkWidth * chunkRenderAmount > lastSpawnedChunkPosition)
        {
            SpawnPlane();
        }
        //remove object if its too far behind
        for(int i = 0; i < spawnedObjects.Count; i++)
        {
            if(player.transform.position.z - spawnedObjects[i].transform.position.z > chunkWidth * 2)
            {
                Destroy(spawnedObjects[i]);
                spawnedObjects.RemoveAt(i);
                i--;
            }
        }
    }
    private void SpawnPlane()
    {
        //adds spawned object
        spawnedObjects.Add(Instantiate(plane, new Vector3(0, 0, lastSpawnedChunkPosition + chunkWidth), plane.transform.rotation, transform));

        if(lastSpawnedChunkPosition > 10)
        {
            //every plane can have 2 objects spawned in max
            int firstPosition = Random.Range(-1, 2); //row of the first obstacle
            int secondPosition = Random.Range(-1,2); //row of the second obstacle
            //keep on choosing until the two obstacle rows are different
            while (firstPosition == secondPosition) { secondPosition = Random.Range(-1, 2); }

            if (Random.Range(0, 2) == 0) //half chance it spawns in an obstacle
            {
                int objectIndex = Random.Range(0, obstacles.Count);//gets random object from object list
                spawnedObjects.Add(
                    Instantiate(obstacles[objectIndex],//we want to spawn in that random object from list 
                    new Vector3(firstPosition * 3.33333f, 
                        obstacles[objectIndex].transform.position.y, 
                        lastSpawnedChunkPosition + Random.Range(0, chunkWidth / 2)), 
                    obstacles[objectIndex].transform.rotation, transform));
            }

            if(Random.Range(0,2) == 0)
            {
                int objectIndex = Random.Range(0, obstacles.Count);
                spawnedObjects.Add(
                    Instantiate(obstacles[objectIndex],
                    new Vector3(secondPosition * 3.33333f,
                    obstacles[objectIndex].transform.position.y,
                    lastSpawnedChunkPosition + Random.Range(0, chunkWidth / 2)),
                    obstacles[objectIndex].transform.rotation, transform));
            }
        }
        lastSpawnedChunkPosition += chunkWidth;
    }
}
