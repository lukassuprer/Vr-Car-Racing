using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class TrackCheckpoints : MonoBehaviour
{
    [SerializeField]private List<Transform> carTransformList;
    private List<CheckpointSingle> checkpointSingleList;
    private List<int> nextCheckPointIndexList;
    
    private CheckpointSingle previousCheckpoint;

    public TextMeshProUGUI text;
    public TextMeshProUGUI timerText;
    public TextMeshProUGUI lapText;
    public ParticleSystem finishParticles;
    
    private bool raceStarted = false;
    private int numberOfCorrectCheckpoints = 0;
    private float currentTime = 0f;
    private int currentLap = 1;
    
    public int lapsToWin = 3;
    public int timeToWin = 60;
    public Transform mapToUnlock;

    private void Awake()
    {
        checkpointSingleList = new List<CheckpointSingle>();
        
        Transform checkPointsTransform = transform;
        foreach (Transform checkpointSingleTransform in checkPointsTransform)
        {
            CheckpointSingle checkpointSingle = checkpointSingleTransform.GetComponent<CheckpointSingle>();
            
            checkpointSingle.SetTrackCheckpoints(this);
            
            checkpointSingleList.Add(checkpointSingle);
        }
        nextCheckPointIndexList = new List<int>();
        foreach (Transform carTransform in carTransformList)
        {
            nextCheckPointIndexList.Add(0);
        }
    }

    private void Update()
    {
        if (raceStarted)
        {
            currentTime += Time.deltaTime;
            timerText.text = currentTime.ToString("F2") + " / " + timeToWin;
        }

        if (currentLap > lapsToWin && currentTime <= timeToWin && mapToUnlock.gameObject.activeSelf == false)
        {
            mapToUnlock.gameObject.SetActive(true);
            ParticleSystem particles = Instantiate(finishParticles, checkpointSingleList[0].transform.position, Quaternion.identity);
            particles.startColor = new Color(255, 215, 0);
            particles.Play();
        }
        else if (currentLap > lapsToWin && currentTime > timeToWin && lapText.text != "You Lost")
        {
            lapText.text = "You Lost";
            ParticleSystem particles = Instantiate(finishParticles, checkpointSingleList[0].transform.position, Quaternion.identity);
            particles.startColor = Color.red;
            particles.Play();
        }
        
        if(mapToUnlock != GameManager.instance.mapToUnlock)
        {
            mapToUnlock = GameManager.instance.mapToUnlock;
            timeToWin = GameManager.instance.currentTimeToWin;
            lapsToWin = GameManager.instance.currentLapsToWin;
            timerText.text = "0.00" + " / " + timeToWin;
            lapText.text = "Lap: " + currentLap + "/" + lapsToWin;
        }
    }

    public void CarThroughCheckPoint(CheckpointSingle checkpointSingle, Transform carTransform)
    {
        if(previousCheckpoint != null) previousCheckpoint.GetComponent<Renderer>().material.color = Color.clear;
        int nextCheckPointIndex = nextCheckPointIndexList[carTransformList.IndexOf(carTransform)];
        if (checkpointSingleList.IndexOf(checkpointSingle) == nextCheckPointIndex)
        {
            //Correct checkpoint
            nextCheckPointIndexList[carTransformList.IndexOf(carTransform)] = (nextCheckPointIndex + 1) % checkpointSingleList.Count;
            text.gameObject.SetActive(false);
            numberOfCorrectCheckpoints++;
        }
        else
        {
            //Wrong checkpoint
            text.gameObject.SetActive(true);
        }
        
        if(checkpointSingleList.IndexOf(checkpointSingle) == 0)
        {
            CarThroughFirstCheckpoint();
        }
        if(checkpointSingleList.IndexOf(checkpointSingle) == checkpointSingleList.Count - 1)
        {
            CarThroughLastCheckpoint(carTransform);
        }
        //Highlight next checkpoint
        previousCheckpoint = checkpointSingleList[nextCheckPointIndexList[carTransformList.IndexOf(carTransform)]];
        previousCheckpoint.GetComponent<Renderer>().material.color = new Color(0, 1, 0, 0.1f);
    }
    
    //debug log when first checkpoint is reached and last checkpoint is reached
    private void CarThroughFirstCheckpoint()
    {
        if (numberOfCorrectCheckpoints == 1 && currentLap <= lapsToWin)
        {
            raceStarted = true;
            lapText.text = "Lap: " + currentLap + "/" + lapsToWin;
        }
    }
    
    private void CarThroughLastCheckpoint(Transform carTransform)
    {
        if (numberOfCorrectCheckpoints == checkpointSingleList.Count)
        {
            raceStarted = false;
            LapFinished(carTransform);
        }
    }
    
    private void LapFinished(Transform caTransform)
    {
        currentLap++;
        numberOfCorrectCheckpoints = 0;
        ResetCheckpoint(caTransform);
    }

    public void ResetCheckpoint(Transform carTransform)
    {
        nextCheckPointIndexList[carTransformList.IndexOf(carTransform)] = 0;
    }

    public Transform GetNextCheckpointDirection(Transform carTransform)
    {
        return checkpointSingleList[nextCheckPointIndexList[carTransformList.IndexOf(carTransform)]].transform;
    }
}
