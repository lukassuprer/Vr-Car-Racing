using UnityEngine;

public class GhostPlayer : MonoBehaviour
{
    public Ghost ghost;
    public float timeValue;
    public int index1;
    public int index2;

    private void Awake()
    {
        timeValue = 0;
    }

    private void Update()
    {
        timeValue += Time.unscaledDeltaTime;

        if (ghost.isReplay)
        {
            GetIndex();
            SetTransform();
        }
    }
    
    private void GetIndex()
    {
        for (int i = 0; i < ghost.timeStamp.Count - 2; i++)
        {
            if (ghost.timeStamp[i] == timeValue)
            {
                index1 = i;
                index2 = i;
                return;
            }

            if (!(ghost.timeStamp[i] < timeValue) || !(timeValue < ghost.timeStamp[i + 1])) continue;
            index1 = i;
            index2 = i + 1;
            return;
        }
        
        index1 = ghost.timeStamp.Count - 1;
        index2 = ghost.timeStamp.Count - 1;
    }
    
    private void SetTransform()
    {
        if (index1 == index2)
        {
            transform.position = ghost.position[index1];
            transform.eulerAngles = ghost.rotation[index1].eulerAngles;
        }
        else
        {
            float interpolationFactor = (timeValue - ghost.timeStamp[index1]) / (ghost.timeStamp[index2] - ghost.timeStamp[index1]);
            
            transform.position = Vector3.Lerp(ghost.position[index1], ghost.position[index2], interpolationFactor);
            transform.eulerAngles = Quaternion.Slerp(ghost.rotation[index1], ghost.rotation[index2], interpolationFactor).eulerAngles;
        }
    }
}
