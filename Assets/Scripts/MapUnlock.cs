using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapUnlock : MonoBehaviour
{
    public int timeToWin;
    public int lapsToWin;
    public Transform mapToUnlock;

    private void OnEnable()
    {
        GameManager.instance.currentTimeToWin = timeToWin;
        GameManager.instance.currentLapsToWin = lapsToWin;
        GameManager.instance.mapToUnlock = mapToUnlock;
    }
}
