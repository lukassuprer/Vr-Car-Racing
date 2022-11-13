using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using System.Reflection;

public class SteeringWheelController : MonoBehaviour
{
    //Right Hand
    public GameObject rightHand;
    public Transform rightHandOriginalParent;
    private bool rightHandOnWheel = false;

    //Left Hand
    public GameObject leftHand;
    public Transform leftHandOriginalParent;
    private bool leftHandOnWheel = false;

    public Transform[] snapPositions;

    public float currentSteeringWheelRotation = 0;
    //private float turnDampening = 250;

    public Transform directionalObject;

    private bool handsFound = false;

    public HandPresence leftHandPresence;
    public HandPresence rightHandPresence;

    public CarController carController;

    private void FindHands()
    {
        rightHand = GameObject.FindGameObjectWithTag("RightHand").gameObject;
        leftHand = GameObject.FindGameObjectWithTag("LeftHand").gameObject;
        rightHandOriginalParent = rightHand.transform.parent;
        leftHandOriginalParent = leftHand.transform.parent;
        leftHandPresence = leftHand.GetComponent<HandPresence>();
        rightHandPresence = rightHand.GetComponent<HandPresence>();

        if (rightHand != null && leftHand != null)
        {
            handsFound = true;
        }
    }

    private void Update()
    {
        if (!handsFound)
        {
            FindHands();
        }

        //RealeaseHandFromWheel();
        //ConvertHandRotationToSteeringWheelRotation();
        //TurnVehicle();
        //currentSteeringWheelRotation = -transform.rotation.eulerAngles.z;
        transform.localRotation = Quaternion.Euler(currentSteeringWheelRotation, 90, -90);
    }

    private void TurnVehicle()
    {
        float turn = -transform.rotation.normalized.x;
        if (turn > 0.47)
        {
            turn = turn + 1;
        }

        Debug.Log(turn);
        carController.SetInputs(0, turn);
    }

    private void OnTriggerStay(Collider other)
    {
        if (rightHandOnWheel == false &&
            rightHandPresence.targetDevice.TryGetFeatureValue(CommonUsages.grip, out float triggerValue))
        {
            PlaceHandOnWheel(ref rightHand, ref rightHandOriginalParent, ref rightHandOnWheel);
        }

        if (leftHandOnWheel == false &&
            leftHandPresence.targetDevice.TryGetFeatureValue(CommonUsages.grip, out float triggerValue2))
        {
            PlaceHandOnWheel(ref leftHand, ref leftHandOriginalParent, ref leftHandOnWheel);
        }
    }

    private void PlaceHandOnWheel(ref GameObject hand, ref Transform originalParent, ref bool handOnWheel)
    {
        var shortestDistance = Vector3.Distance(snapPositions[0].position, hand.transform.position);
        var bestSnap = snapPositions[0];

        foreach (var snapPosition in snapPositions)
        {
            if (snapPosition.childCount == 0)
            {
                var distance = Vector3.Distance(snapPosition.position, hand.transform.position);
                if (distance < shortestDistance)
                {
                    shortestDistance = distance;
                    bestSnap = snapPosition;
                }
            }
        }

        originalParent = hand.transform.parent;
        hand.transform.parent = bestSnap.transform;
        hand.transform.position = bestSnap.transform.position;

        handOnWheel = true;
    }

    private void ConvertHandRotationToSteeringWheelRotation()
    {
        if (rightHandOnWheel && !leftHandOnWheel)
        {
            Quaternion newRot = Quaternion.Euler(0, 0, rightHandOriginalParent.transform.rotation.eulerAngles.z);
            directionalObject.rotation = newRot;
            transform.parent = directionalObject;
        }
        else if (leftHandOnWheel && !rightHandOnWheel)
        {
            Quaternion newRot = Quaternion.Euler(0, 0, leftHandOriginalParent.transform.rotation.eulerAngles.z);
            directionalObject.rotation = newRot;
            transform.parent = directionalObject;
        }
        else if (leftHandOnWheel && rightHandOnWheel)
        {
            Quaternion newRotLeft = Quaternion.Euler(0, 0, leftHandOriginalParent.transform.rotation.eulerAngles.z);
            Quaternion newRotRight = Quaternion.Euler(0, 0, rightHandOriginalParent.transform.rotation.eulerAngles.z);
            Quaternion finalRot = Quaternion.Slerp(newRotLeft, newRotRight, 1.0f / 2.0f);
            directionalObject.rotation = finalRot;
            transform.parent = directionalObject;
        }
    }

    private void RealeaseHandFromWheel()
    {
        rightHandPresence.targetDevice.TryGetFeatureValue(CommonUsages.grip, out float triggerValue);
        if (rightHandOnWheel && triggerValue <= 0f)
        {
            rightHand.transform.parent = rightHandOriginalParent;
            rightHand.transform.position = rightHandOriginalParent.position;
            rightHand.transform.rotation = rightHandOriginalParent.rotation;
            rightHandOnWheel = false;
        }

        leftHandPresence.targetDevice.TryGetFeatureValue(CommonUsages.grip, out float triggerValue2);
        if (leftHandOnWheel && triggerValue2 <= 0f)
        {
            leftHand.transform.parent = leftHandOriginalParent;
            leftHand.transform.position = leftHandOriginalParent.position;
            leftHand.transform.rotation = leftHandOriginalParent.rotation;
            leftHandOnWheel = false;
        }

        if (!rightHandOnWheel && !leftHandOnWheel)
        {
            transform.parent = carController.transform;
        }
    }
}