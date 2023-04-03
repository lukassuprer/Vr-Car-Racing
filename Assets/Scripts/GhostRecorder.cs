using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GhostRecorder : MonoBehaviour
{
    public Ghost ghost;
    public float timer;
    public float timeValue;

    private void Awake()
    {
        if (ghost.isRecording)
        {
            ghost.ResetData();
            timeValue = 0;
            timer = 0;
        }
    }
    
    private void Update()
    {
        timer += Time.unscaledDeltaTime;
        timeValue += Time.unscaledDeltaTime;
        
        if(ghost.isRecording && timer >= 1/ghost.recordFrequency)
        {
            ghost.timeStamp.Add(timeValue);
            ghost.position.Add(transform.position);
            ghost.rotation.Add(transform.rotation);
            timer = 0;
        }
    }
}
