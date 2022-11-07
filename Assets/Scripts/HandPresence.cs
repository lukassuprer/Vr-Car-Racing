using System;
using System.Collections;
using System.Collections.Generic;
using Mono.Cecil;
using Unity.MLAgents.Integrations.Match3;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR;

public class HandPresence : MonoBehaviour
{
    public bool showController = false;
    public InputDeviceCharacteristics controllerCharacteristics;
    public List<GameObject> controllerPrefabs;
    public GameObject handModelPrefab;

    private GameObject spawnedController;
    public InputDevice targetDevice;
    private GameObject spawnedHandModel;
    private Animator handAnimator;

    private Vector2 axis = Vector2.zero;
    private Vector2 axis2 = Vector2.zero;
    public CarController carController;

    public bool triggerPress;

    private void Start()
    {
        TryInitialize();
    }

    private void UpdateHandAnimation()
    {
        if (targetDevice.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue))
        {
            handAnimator.SetFloat("Trigger", triggerValue);
        }
        else
        {
            handAnimator.SetFloat("Trigger", 0);
        }

        if (targetDevice.TryGetFeatureValue(CommonUsages.grip, out float gripValue))
        {
            handAnimator.SetFloat("Grip", gripValue);
        }
        else
        {
            handAnimator.SetFloat("Grip", 0);
        }
    }

    private void TryInitialize()
    {
        List<InputDevice> devices = new List<InputDevice>();
        InputDevices.GetDevicesWithCharacteristics(controllerCharacteristics, devices);

        foreach (var item in devices)
        {
            Debug.Log(item.name);
        }

        if (devices.Count > 0)
        {
            targetDevice = devices[0];
            GameObject prefab = controllerPrefabs.Find(controller => controller.name == targetDevice.name);
            if (prefab)
            {
                spawnedController = Instantiate(prefab, transform.parent);
            }
            else
            {
                Debug.Log("Did not find corresponding controller model");
                spawnedController = Instantiate(controllerPrefabs[0], transform.parent);
            }

            spawnedHandModel = Instantiate(handModelPrefab, transform.parent);
            handAnimator = spawnedHandModel.GetComponent<Animator>();
        }
    }

    private void MoveCar()
    {
        if (targetDevice.name == "Oculus Touch Controller - Left")
        {
            if (targetDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out axis))
            {
            }
        }
        else if (targetDevice.name == "Oculus Touch Controller - Right")
        {
            if (targetDevice.TryGetFeatureValue(CommonUsages.primary2DAxis, out axis2))
            {
            }
        }

        if (axis2 != Vector2.zero || axis != Vector2.zero)
        {
            Debug.Log(axis);
            carController.SetInputs(axis.y, axis2.x);
        }
    }

    private void Update()
    {

        if (carController == null)
        {
            carController = FindObjectOfType<CarController>();
        }

        if (!targetDevice.isValid)
        {
            TryInitialize();
        }
        MoveCar();
        if (targetDevice.TryGetFeatureValue(CommonUsages.secondaryButton, out bool primaryButtonValue))
        {
            if (primaryButtonValue)
            {
                Debug.Log("hello");
                carController.Brake();
            }
        }
        else
        {
            if (showController)
            {
                spawnedHandModel.SetActive(false);
                spawnedController.SetActive(true);
            }
            else
            {
                spawnedHandModel.SetActive(true);
                spawnedController.SetActive(false);
                UpdateHandAnimation();
            }
        }
    }
}