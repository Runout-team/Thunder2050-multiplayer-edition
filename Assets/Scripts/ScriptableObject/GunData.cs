using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName="Gun", menuName="Weapon/Gun")]

public class GunData : ScriptableObject
{
    public new string name;
    public float damage;
    public float maxDistance;
    public int currentAmmo;
    public int magSize;
    public float fireRate;
    public float reloadTime;
    public bool reloading;

    public enum ModeOptions
    {
        Safe,
        SemiAuto,
        FullAuto,
        Binary
    }

    public ModeOptions mode;
    public float recoilForce;
    public float recoilRotation;
    public float recoilDuration;

}
