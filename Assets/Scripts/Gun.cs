using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Gun : MonoBehaviour {

    [Header("References")]
    [SerializeField] private GunData gunData;
    [SerializeField] private Transform muzzle;

    public TMP_Text AmmoDisplay;
    public TMP_Text ObjectnameDisplay;
    
    float timeSinceLastShot;

    private void Start() {
        PlayerShoot.shootInput += Shoot;
        PlayerShoot.reloadInput += StartReload;
    }

    private bool CanShoot() => !gunData.reloading && timeSinceLastShot > 1f / (gunData.fireRate / 60f);

    public void StartReload() {
        if (!gunData.reloading) {
            StartCoroutine(Reload());
        }
    }

    private IEnumerator Reload() {
        AmmoDisplay.text = "Ammo: Reloading...";
        gunData.reloading = true;
        yield return new WaitForSeconds(gunData.reloadTime);

        gunData.currentAmmo = gunData.magSize;

        gunData.reloading = false;
        AmmoDisplay.text = "Ammo: " + gunData.currentAmmo + "/" + gunData.magSize;
    }

    private void Shoot() {
        AmmoDisplay.text = "Ammo: " + gunData.currentAmmo + "/" + gunData.magSize;
        if (gunData.currentAmmo > 0) {
            if (CanShoot()) {
                if (Physics.Raycast(muzzle.position, muzzle.forward, out RaycastHit hitInfo, gunData.maxDistance)){
                    //Debug.Log(hitInfo.transform.name);
                    ObjectnameDisplay.text = hitInfo.transform.name;
                }

                gunData.currentAmmo--;
                timeSinceLastShot = 0;
                OnGunShot();
            }
        }
    }

    private void Update() {
        timeSinceLastShot += Time.deltaTime;

        Debug.DrawRay(muzzle.position, muzzle.forward);
    }

    private void OnGunShot() {  }
}