using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class TrackerScript : MonoBehaviour
{
    public List<GameObject> cars;

    void Start()
    {
        // Get all cars in scene
        cars = new List<GameObject>(GameObject.FindGameObjectsWithTag("car"));
        
        // Create a timer and lap tracker for each car
        foreach (GameObject car in cars)
        {
            car.AddComponent<Timer>();
            car.AddComponent<LapTracker>();   
            car.GetComponent<LapTracker>().car = car;
            car.GetComponent<Timer>().car = car;
        }
    }

    void Update()
    {
        foreach (GameObject car in cars)
        {
            car.GetComponent<Timer>().Update();
            car.GetComponent<LapTracker>().Update();

            // Update UI panel with lap times
        }
    }

    public class Timer : MonoBehaviour
    {
        public GameObject car;
        public float currentTime;
        public int lapCount;
        public TrackCheckpoints trackCheckpoints;
        
        private void Start()
        {
            trackCheckpoints = FindObjectOfType<TrackCheckpoints>();
        }

        public Timer(GameObject car)
        {
            this.car = car;
            lapCount = 0;
        }

        public void Update()
        {
            currentTime += Time.deltaTime;
            // Update UI panel with current lap time
        }

        public void CompleteLap()
        {
            lapCount++;
        }
    }

    public class LapTracker : MonoBehaviour
    {
        public GameObject car;
        public Timer timer;
        public int lapCount;
        public bool lapFinished = false;
        public int numberOfCorrectCheckpoints = 0;
        
        private void Start()
        {
            timer = car.GetComponent<Timer>();
        }

        public LapTracker(GameObject car, Timer timer)
        {
            this.car = car;
            this.timer = timer;
            lapCount = 0;
        }

        public void LapFinished()
        {
            lapCount++;
            timer.CompleteLap();
        }

        public void Update()
        {
            
        }
    }
}
