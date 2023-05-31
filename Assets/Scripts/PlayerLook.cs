using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerLook : MonoBehaviour
{
    public Camera cam;
    private float xRotation = 0f;

    public float xSensitivity = 30f;
    public float ySensitivity = 30f;

    public float swaySmooth = 8;
    public float swayMultiplier = 2;

    public float idleSwayAmount = 0.5f;
    public float idleSwaySpeed = 1f;

    private float idleTimer;
    private Quaternion idleRotation;

    public GameObject WeaponHolder;

    // Start is called before the first frame update
    public void ProcessLook(Vector2 input)
    {
        float mouseX = input.x;
        float mouseY = input.y;

        xRotation -= (mouseY * Time.deltaTime) * ySensitivity;
        xRotation = Mathf.Clamp(xRotation, -80, 80);

        cam.transform.localRotation = Quaternion.Euler(xRotation, 0, 0);

        transform.Rotate(Vector3.up * (mouseX * Time.deltaTime) * xSensitivity);

        // Player Look Rotation
        Quaternion rotationX = Quaternion.AngleAxis(-mouseY, Vector3.right);
        Quaternion rotationY = Quaternion.AngleAxis(mouseX, Vector3.up);

        Quaternion targetRotation = rotationX * rotationY;

        WeaponHolder.transform.localRotation = Quaternion.Slerp(WeaponHolder.transform.localRotation, targetRotation, swaySmooth * Time.deltaTime);

        // Idle Weapon Sway
        if (input.magnitude == 0)
        {
            idleTimer += Time.deltaTime;
            float idleSwayX = Mathf.Sin(idleTimer * idleSwaySpeed) * idleSwayAmount;
            float idleSwayY = Mathf.Cos(idleTimer * idleSwaySpeed) * idleSwayAmount;

            Quaternion idleRotationX = Quaternion.AngleAxis(idleSwayX, Vector3.right);
            Quaternion idleRotationY = Quaternion.AngleAxis(idleSwayY, Vector3.up);

            idleRotation = idleRotationX * idleRotationY;

            WeaponHolder.transform.localRotation = Quaternion.Slerp(WeaponHolder.transform.localRotation, idleRotation, swaySmooth * Time.deltaTime);
        }
        else
        {
            idleTimer = 0f; // Reset idle timer when there is player input
        }
    }
}
