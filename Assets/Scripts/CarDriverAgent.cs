using System;
using System.Collections;
using System.Collections.Generic;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;
using UnityEngine;
using UnityEngine.Events;

public class CarDriverAgent : Agent
{
    [SerializeField] private TrackCheckpoints trackCheckpoints;
    [SerializeField] private Transform spawnPosition;
    
    private CarController carController;

    private void Awake()
    {
        carController = GetComponent<CarController>();
    }

    private void Update()
    {
        if (carController.rb.velocity.magnitude < 0.1f)
        {
            Debug.Log("Car is stuck");
            StartCoroutine(CarStopped());
            
            AddReward(-1f);
        }
        else
        {
            StopAllCoroutines();
            AddReward(+1f);
        }
    }

    private IEnumerator CarStopped()
    {
        yield return new WaitForSeconds(5);
        AddReward(-10f);
        EndEpisode();
    }

    public void CorrectCheckpoint()
    {
        AddReward(+1f);
        Debug.Log("Correct checkpoint");
    }
    public void WrongCheckpoint()
    {
        AddReward(-1f);
        Debug.Log("Wrong checkpoint");
    }

    public override void OnEpisodeBegin()
    {
        transform.position = spawnPosition.position + new Vector3(UnityEngine.Random.Range(-5f, +5f), 0f, UnityEngine.Random.Range(-5f, +5f));
        transform.forward = spawnPosition.forward;
        trackCheckpoints.ResetCheckpoint(transform);
        carController.InstaStop();
        StopAllCoroutines();
    }
    
    public override void CollectObservations(VectorSensor sensor)
    {
        Vector3 checkPointForward = trackCheckpoints.GetNextCheckpointDirection(transform).transform.forward;
        float directionDot = Vector3.Dot(transform.forward, checkPointForward);
        sensor.AddObservation(directionDot);
    }
    
    public override void OnActionReceived(ActionBuffers actions)
    {
        float forwardAmount = 0f;
        float turnAmount = 0f;

        switch (actions.DiscreteActions[0])
        {
            case 0: forwardAmount = 0f; break;
            case 1: forwardAmount = +1f; break;
            case 2: forwardAmount = -1f; break;
        }
        switch(actions.DiscreteActions[1])
        {
            case 0: turnAmount = 0f; break;
            case 1: turnAmount = +1f; break;
            case 2: turnAmount = -1f; break;
        }

        carController.SetInputs(forwardAmount, turnAmount);

        switch (actions.DiscreteActions[2])
        {
            case 0: carController.SetBrake(false); break;
            case 1: carController.SetBrake(true); break;
        }
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {
        int  forwardAction = 0;
        if(Input.GetKey(KeyCode.UpArrow)) forwardAction = 1;
        if(Input.GetKey(KeyCode.DownArrow)) forwardAction = 2;
        
        int turnAction = 0;
        if(Input.GetKey(KeyCode.LeftArrow)) turnAction = 2;
        if(Input.GetKey(KeyCode.RightArrow)) turnAction = 1;
        
        ActionSegment<int> discreteActions = actionsOut.DiscreteActions;
        
        discreteActions[0] = forwardAction;
        discreteActions[1] = turnAction;
        discreteActions[2] = Input.GetKey(KeyCode.Space) ? 1 : 0;
    }

    public void WallCollisionEnter()
    {
        AddReward(-15.0f);
        Debug.Log("wall");
        EndEpisode();
    }

    public void WallCollisionStay()
    {
        AddReward(-5.0f);
    }
}
