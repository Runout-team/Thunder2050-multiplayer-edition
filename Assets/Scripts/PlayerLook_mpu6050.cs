using System.Collections;
using System.Collections.Generic;
using System.IO.Ports;
using UnityEngine;

public class PlayerLook_mpu6050 : MonoBehaviour
{
    public Camera cam;
    private float xRotation = 0f;
    private float yRotation = 0f;
    private float zRotation = 0f;

    public float xSensitivity = 30f;
    public float ySensitivity = 30f;

    public GameObject WeaponHolder;

    // MPU6050 variables
    public string portName = "COM3"; // The port name for the Arduino
    public int baudRate = 115200; // The baud rate for serial communication
    private SerialPort stream;
    private Quaternion sensorRotation;

    public float swaySmooth = 8f;

    private void Start()
    {
        stream = new SerialPort(portName, baudRate);
        stream.Open(); // Open the Serial Stream.
    }

    private void Update()
    {
        string strReceived = stream.ReadLine(); // Read the information
        string[] strData = strReceived.Split(',');

        if (strData.Length >= 4)
        {
            float qw = float.Parse(strData[0]);
            float qx = float.Parse(strData[1]);
            float qy = float.Parse(strData[2]);
            float qz = float.Parse(strData[3]);

            sensorRotation = new Quaternion(-qy, -qz, qx, qw);
        }

        // Player Look Rotation
        xRotation = -sensorRotation.eulerAngles.x;
        yRotation = sensorRotation.eulerAngles.y;
        zRotation = sensorRotation.eulerAngles.z;

        Debug.Log(zRotation);

        cam.transform.localRotation = Quaternion.Euler(xRotation, 0, 0);
        transform.rotation = Quaternion.Euler(0, yRotation, 0);

        Quaternion targetRotation = Quaternion.Euler(xRotation, yRotation, 0) * sensorRotation;

        // Rotate the WeaponHolder using zRotation
        WeaponHolder.transform.rotation = Quaternion.Euler(0, 0, zRotation);
    }
}
