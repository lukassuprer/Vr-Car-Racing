using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class ButtonVR : MonoBehaviour
{
    public GameObject button;
    public UnityEvent onPress;
    public UnityEvent onRelease;
    private GameObject presser;
    private AudioSource audioSource;
    private bool isPressed;
    private HandPresence handPresence;
    private GameManager gameManager;
    
    private void Start()
    {
        audioSource = GetComponent<AudioSource>();
        isPressed = false;
        gameManager = GameObject.FindGameObjectWithTag("GameManager").GetComponent<GameManager>();
    }
    
    private void OnTriggerEnter(Collider other)
    {
        if (!isPressed)
        {
            button.transform.localPosition = new Vector3(0, 0.003f, 0);
            presser = other.gameObject;
            onPress.Invoke();
            audioSource.Play();
            isPressed = true;
        }
    }
    
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject == presser)
        {
            button.transform.localPosition = new Vector3(0, 0.015f, 0);
            isPressed = false;
            onRelease.Invoke();
        }
    } 
    
    public void ButtonPress(GameObject objectToActivate)
    {
        if(objectToActivate.tag == "car")
        {
            Debug.Log(objectToActivate);
            objectToActivate.SetActive(true);
            handPresence = GameObject.FindGameObjectWithTag("LeftHand").GetComponent<HandPresence>();
            handPresence.getCarController(objectToActivate.GetComponent<CarController>());
            handPresence = GameObject.FindGameObjectWithTag("RightHand").GetComponent<HandPresence>();
            handPresence.getCarController(objectToActivate.GetComponent<CarController>());
        }
        else
        {
            Debug.Log("map");
            foreach (var map in gameManager.maps)
            {
                map.SetActive(false);
            }

            objectToActivate.SetActive(true);
        }
    }
}
