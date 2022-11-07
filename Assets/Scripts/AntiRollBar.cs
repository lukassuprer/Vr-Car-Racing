using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AntiRollBar : MonoBehaviour
{
    [SerializeField] private WheelCollider WheelL;
    [SerializeField] private WheelCollider WheelR;
    [SerializeField] private float antiRoll = 5000.0f;
    [SerializeField] private Rigidbody rb;

    private void FixedUpdate()
    {
        WheelHit hit;
        float travelL = 1.0f;
        float travelR = 1.0f;
 
        var groundedL = WheelL.GetGroundHit(out hit);
        if (groundedL)
            travelL = (-WheelL.transform.InverseTransformPoint(hit.point).y - WheelL.radius) / WheelL.suspensionDistance;
 
        var groundedR = WheelR.GetGroundHit(out hit);
        if (groundedR)
            travelR = (-WheelR.transform.InverseTransformPoint(hit.point).y - WheelR.radius) / WheelR.suspensionDistance;
 
        float antiRollForce = (travelL - travelR) * antiRoll;
 
        if (groundedL)
            rb.AddForceAtPosition(WheelL.transform.up * -antiRollForce,
                WheelL.transform.position);  
        if (groundedR)
            rb.AddForceAtPosition(WheelR.transform.up * antiRollForce,
                WheelR.transform.position);   
    }
}
