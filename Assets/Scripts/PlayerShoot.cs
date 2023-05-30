using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShoot : MonoBehaviour
{
    public static Action shootInput;
    public static Action reloadInput;

    public void Shoott() {
        shootInput?.Invoke();
    }

    public void Reloadd() {
        reloadInput?.Invoke();
    }
}
