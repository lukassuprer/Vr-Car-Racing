using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu]
public class Ghost : ScriptableObject
{
    public bool isRecording;
    public bool isReplay;
    public float recordFrequency;

    public List<float> timeStamp;
    public List<Vector3> position;
    public List<Quaternion> rotation;
    
    public void ResetData() 
    {
        timeStamp = new List<float>();
        position = new List<Vector3>();
        rotation = new List<Quaternion>();
    }
}
