using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class TrackCheckpoints : MonoBehaviour
{
    public event EventHandler OnCarCorrectCheckpoint;
    public event EventHandler OnCarWrongCheckpoint;
    
    [SerializeField]private List<Transform> carTransformList;
    private List<CheckpointSingle> checkpointSingleList;
    private List<int> nextCheckPointIndexList;

    public TextMeshProUGUI text;
    
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
        Debug.Log(checkpointSingleList);
    }
    
    public void CarThroughCheckPoint(CheckpointSingle checkpointSingle, Transform carTransform)
    {
        int nextCheckPointIndex = nextCheckPointIndexList[carTransformList.IndexOf(carTransform)];
        if (checkpointSingleList.IndexOf(checkpointSingle) == nextCheckPointIndex)
        {
            //Correct checkpoint
            nextCheckPointIndexList[carTransformList.IndexOf(carTransform)] = (nextCheckPointIndex + 1) % checkpointSingleList.Count;
            OnCarCorrectCheckpoint?.Invoke(this, EventArgs.Empty);
            text.gameObject.SetActive(false);
        }
        else
        {
            //Wrong checkpoint
            OnCarWrongCheckpoint?.Invoke(this, EventArgs.Empty);
            text.gameObject.SetActive(true);
        }
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
