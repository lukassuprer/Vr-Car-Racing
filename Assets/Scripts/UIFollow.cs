using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIFollow : MonoBehaviour
{
    void Update () {
        //Rotate the UI to face the camera
        transform.LookAt(Camera.main.transform);
        transform.Rotate(0, 180, 0);
        
        //Move the UI to the correct position
        transform.position = Camera.main.transform.position + Camera.main.transform.forward * 2;
    }
}
