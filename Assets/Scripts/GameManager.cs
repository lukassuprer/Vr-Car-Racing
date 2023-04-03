using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    public static GameManager instance;
    public GameObject player;
    public GameObject currentCar;
    public GameObject[] maps;
    public GameObject[] cars;
    public GameObject[] activeCars;
    
    public int currentTimeToWin;
    public int currentLapsToWin;
    public Transform mapToUnlock;
    public TrackCheckpoints currentTrackCheckpoints;
    
    public TextMeshProUGUI timerText;
    public TextMeshProUGUI lapText;
    public GameObject carUI;
    
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

    private void Start()
    {
        GetActiveCars();
    }

    public void GetActiveCars()
    {
        //check scene for gameobjects with tag car that are enabled
        activeCars = GameObject.FindGameObjectsWithTag("car");
        //now remove cars that are not enabled
        for (int i = 0; i < activeCars.Length; i++)
        {
            if (!activeCars[i].activeSelf)
            {
                activeCars[i] = null;
            }
        }
    }
}
