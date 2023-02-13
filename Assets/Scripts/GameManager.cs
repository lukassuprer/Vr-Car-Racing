using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public GameObject player;
    public GameObject currentCar;
    public GameObject[] maps;
    
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }
    
    public void SpawnCar()
    {
        Instantiate(currentCar, player.transform.position, player.transform.rotation);
    }
}
