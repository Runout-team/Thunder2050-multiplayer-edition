using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class InputManger : MonoBehaviour
{
    private PlayerInput playerInput;
    private PlayerInput.OnFootActions onFoot;

    private PlayerInput.OnGunActions onGun;

    private PlayerMotor motor;
    private PlayerLook look;
    private PlayerShoot shoot;

    // Start is called before the first frame update
    void Awake() 
    {
        playerInput = new PlayerInput();
        onFoot = playerInput.OnFoot;
        onGun = playerInput.OnGun;
        motor = GetComponent<PlayerMotor>();
        look = GetComponent<PlayerLook>();
        shoot = GetComponent<PlayerShoot>();
        onFoot.Jump.performed += ctx => motor.Jump();

        onFoot.Crouch.performed += ctx => motor.Crouch();
        onFoot.Sprint.performed += ctx => motor.Sprint();

        onGun.Fire.performed += ctx => shoot.Shoott();
        onGun.Reload.performed += ctx => shoot.Reloadd();

    }
    // Update is called once per frame
    void FixedUpdate() {
        motor.ProcessMove(onFoot.Movement.ReadValue<Vector2>());
    }
    private void LateUpdate() {
        look.ProcessLook(onFoot.Look.ReadValue<Vector2>());
    }

    private void OnEnable() 
    {
        onFoot.Enable();
        onGun.Enable();
    }

    private void OnDisable() 
    {
        onFoot.Disable();
        onGun.Disable();
    }
}
