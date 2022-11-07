using UnityEngine;

public class Wall : MonoBehaviour
{
    private void OnCollisionEnter(Collision other)
    {
        if (other.transform.TryGetComponent<CarDriverAgent>(out CarDriverAgent car))
        {
            car.WallCollisionEnter();
        }
    }

    private void OnCollisionStay(Collision other)
    {
        if (other.transform.TryGetComponent<CarDriverAgent>(out CarDriverAgent car))
        {
            car.WallCollisionEnter();
        }
    }
}
