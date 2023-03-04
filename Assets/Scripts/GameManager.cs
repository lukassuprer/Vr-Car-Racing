using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public GameObject player;
    public GameObject currentCar;
    public GameObject[] maps;
    public GameObject[] cars;
    
    public int currentTimeToWin;
    public int currentLapsToWin;
    public Transform mapToUnlock;
    
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
        maps[0].gameObject.SetActive(true);
    }
}
