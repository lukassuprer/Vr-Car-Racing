using UnityEngine;

public class BrakeScript : MonoBehaviour
{
    public CarController carController;
    public HingeJoint hinge;
    private Vector3 carPostion;

    private void Start()
    {
        carPostion = carController.transform.position - transform.position;
    }

    private void Update()
    {
        transform.position = carController.transform.position - carPostion;
    }
}
