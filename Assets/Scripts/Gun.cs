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

    private bool isRecoiling = false;
    private Vector3 originalPosition;
    private Quaternion originalRotation;

    private float recoilTimer = 0f;


    float timeSinceLastShot;

    private void Start() {
        AmmoDisplay.text = "Ammo: " + gunData.currentAmmo + "/" + gunData.magSize;

        PlayerShoot.shootInput += Shoot;
        PlayerShoot.reloadInput += StartReload;

        originalPosition = transform.localPosition;
        originalRotation = transform.localRotation;
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

    public void Shoot() {
        GunData.ModeOptions mode = gunData.mode;

        AmmoDisplay.text = "Ammo: " + gunData.currentAmmo + "/" + gunData.magSize;
        if (mode.ToString() != "Safe") {
            if (gunData.currentAmmo > 0) {
                if (CanShoot()) {
                    if (Physics.Raycast(muzzle.position, muzzle.forward, out RaycastHit hitInfo, gunData.maxDistance)){
                        //Debug.Log(hitInfo.transform.name);
                        ObjectnameDisplay.text = hitInfo.transform.name;
                    }

                    if (!isRecoiling)
                    {
                        // Apply recoil force
                        Rigidbody rb = GetComponent<Rigidbody>();
                        if (rb != null)
                        {
                            rb.AddForce(-transform.forward * gunData.recoilForce, ForceMode.Impulse);
                        }

                        // Apply recoil rotation
                        transform.Rotate(Vector3.up, -gunData.recoilRotation);

                        // Set recoil duration
                        gunData.recoilDuration = 0.1f;

                        isRecoiling = true;
                    }

                    gunData.currentAmmo--;
                    timeSinceLastShot = 0;
                    OnGunShot();
                }
            }
        }
    }

    private void Update() {
        timeSinceLastShot += Time.deltaTime;

        Debug.DrawRay(muzzle.position, muzzle.forward);

        if (isRecoiling)
        {
            recoilTimer += Time.deltaTime;

            // Calculate recoil interpolation value
            float t = recoilTimer / gunData.recoilDuration;

            // Smoothly interpolate position
            transform.localPosition = Vector3.Lerp(transform.localPosition, originalPosition, t);

            // Smoothly interpolate rotation
            transform.localRotation = Quaternion.Lerp(transform.localRotation, originalRotation, t);

            if (recoilTimer >= gunData.recoilDuration)
            {
                // Reset position and rotation after recoil
                transform.localPosition = originalPosition;
                transform.localRotation = originalRotation;
                isRecoiling = false;
                recoilTimer = 0f;
            }
        }
    }

    private void OnGunShot() {  }
}