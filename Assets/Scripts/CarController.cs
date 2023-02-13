using UnityEngine;
using System.Collections.Generic;
using TMPro;

[System.Serializable]
public class AxleInfo
{
    public WheelCollider leftWheel;
    public WheelCollider rightWheel;
    public bool motor;
    public bool steering;
}

public class CarController : MonoBehaviour
{
    public List<AxleInfo> axleInfos;
    public float maxMotorTorque;
    public float maxSteeringAngle;
    public float breakPower;
    public Rigidbody rb;
    public SteeringWheelController steeringWheelController;

    private void ApplyLocalPositionToVisuals(WheelCollider collider)
    {
        if (collider.transform.childCount == 0)
        {
            return;
        }

        var visualWheel = collider.transform.GetChild(0);

        Vector3 position;
        Quaternion rotation;
        collider.GetWorldPose(out position, out rotation);

        visualWheel.transform.position = position;
        visualWheel.transform.rotation = rotation;  
    }

    private void FixedUpdate()
    {
        /*SetInputs(Input.GetAxis("Vertical"), Input.GetAxis("Horizontal"));

        Brake(Input.GetKey(KeyCode.Space));*/
    }

    public void SetInputs(float forwardAmount, float turnAround)
    {
        var motor = forwardAmount * maxMotorTorque;
        rb.AddForce(transform.forward * motor);
        var steering = turnAround * maxSteeringAngle;

        foreach (AxleInfo axleInfo in axleInfos)
        {
            if (axleInfo.steering)
            {
                axleInfo.leftWheel.steerAngle = steering;
                axleInfo.rightWheel.steerAngle = steering;
                steeringWheelController.currentSteeringWheelRotation = steering;
            }

            if (axleInfo.motor)
            {
                axleInfo.leftWheel.motorTorque = motor;
                axleInfo.rightWheel.motorTorque = motor;
            }

            ApplyLocalPositionToVisuals(axleInfo.leftWheel);
            ApplyLocalPositionToVisuals(axleInfo.rightWheel);
        }
    }

    public void Brake(bool brake)
    {
        foreach (var axleInfo in axleInfos)
        {
            if (brake)
            {
                axleInfo.leftWheel.brakeTorque = breakPower;
                axleInfo.rightWheel.brakeTorque = breakPower;
                rb.drag = 1;
            }
            else
            {
                axleInfo.leftWheel.brakeTorque = 0;
                axleInfo.rightWheel.brakeTorque = 0;
                rb.drag = 0;
            }
        }
    }

    public void SetBrake(bool brake)
    {
        foreach (var axleInfo in axleInfos)
        {
            if (brake)
            {
                axleInfo.leftWheel.brakeTorque = breakPower;
                axleInfo.rightWheel.brakeTorque = breakPower;
                rb.drag = 1;
            }
            else
            {
                axleInfo.leftWheel.brakeTorque = 0;
                axleInfo.rightWheel.brakeTorque = 0;
                rb.drag = 0;
            }
        }
    }

    public void InstaStop()
    {
        SetInputs(0, 0);
        rb.velocity = Vector3.zero;
        rb.drag = 1000;
        rb.drag = 0;
    }
}