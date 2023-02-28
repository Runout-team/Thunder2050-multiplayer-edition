using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseRotate : MonoBehaviour
{
    public float mouseSensitivty = 100f;
    public Transform playerBody;

    float xRotation = 0f;

    private bool mouselock = false;

    private void Start() {
        Cursor.lockState = CursorLockMode.Confined;
        Cursor.visible = false;
        mouselock = true;
    }

    void Update()
    {
        float mouseX = Input.GetAxis("Mouse X") * mouseSensitivty * Time.deltaTime;
        float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivty * Time.deltaTime;

        playerBody.Rotate(Vector3.up * mouseX);

        xRotation -= mouseY;
        xRotation = Mathf.Clamp(xRotation, -90f, 90f);

        transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);

        if (Input.GetKeyDown(KeyCode.Escape)) {
            if (mouselock) {
                Cursor.lockState = CursorLockMode.None;
                Cursor.visible = true;
                mouselock = false;
            } else {
                Cursor.lockState = CursorLockMode.Confined;
                Cursor.visible = false;
                mouselock = true;
            }
        }

    }
}
