using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarDriverAI : MonoBehaviour
{
    private CarController carController;
    [SerializeField]
    private Vector3 targetPosition;
    private TrackCheckpoints trackCheckpoints;
    public float maxForwardSpeed = 0.5f;
    public float maxTurnAmount = 0.5f;

    private void Awake()
    {
        carController = GetComponent<CarController>();
    }
    
    private void Update()
    {
        trackCheckpoints = GameManager.instance.currentTrackCheckpoints;
        targetPosition = trackCheckpoints.GetNextCheckpointDirection(transform).position;
        //targetPosition = target.position;
        float forwardAmount = 0f;
        float turnAmount = 0f;
        
        float reachTargetToDistance = 1f;
        float distanceToTarget = Vector3.Distance(transform.position, targetPosition);
        if (distanceToTarget > reachTargetToDistance)
        {
            //Too far away, move towards target
            Vector3 dirToMovePosition = (targetPosition - transform.position).normalized;
            float dot = Vector3.Dot(transform.forward, dirToMovePosition);

            if (dot > 0)
            {
                forwardAmount = maxForwardSpeed;
                
                float stopperDistance = 10f;
                float stoppingSpeed = 50f;
                if (distanceToTarget < stopperDistance && carController.GetSpeed() > stoppingSpeed)
                {
                    forwardAmount = -maxForwardSpeed;
                }
            }
            else
            {
                float reverseDistance = 25f;
                if (distanceToTarget > reverseDistance)
                {
                    forwardAmount = maxForwardSpeed;
                }
                else
                {
                    forwardAmount = -maxForwardSpeed;
                }
            }
        
            float angleToDir = Vector3.SignedAngle(transform.forward, dirToMovePosition, Vector3.up);
        
            if (angleToDir > 0)
            {
                turnAmount = maxTurnAmount;
            }
            else
            {
                turnAmount = -maxTurnAmount;
            }   
        }
        else
        {
            //Reached target, stop
            if(carController.GetSpeed() > 15f)
            {
                forwardAmount = -1f;
            }
            else
            {
                forwardAmount = 0f;
            }
            turnAmount = 0f;
        }

        carController.SetInputs(forwardAmount, turnAmount);
        CheckCarFlipped();
    }
    
    private void CheckCarFlipped()
    {
        if (transform.up.y < 0.5f)
        {
            transform.position = new Vector3(transform.position.x, 0.5f, transform.position.z);
            transform.rotation = Quaternion.Euler(0, transform.rotation.eulerAngles.y, 0);
            carController.ResetCarRotation();
        }
    }
}
