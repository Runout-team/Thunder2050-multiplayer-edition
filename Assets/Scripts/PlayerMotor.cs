using UnityEngine;

public class PlayerMotor : MonoBehaviour
{
    public float WalkSpeed = 5f;
    public float SprintSpeed = 10f;
    public float CrouchSpeed = 3f;
    public float CrouchGravity = -100f;
    public float DefaultGravity = -50f;
    public float CrouchJumpHeight = 0.5f;
    public float DefaultJumpHeight = 1f;

    private CharacterController controller;
    private Vector3 playerVelocity;
    private bool isGrounded;
    private float crouchTimer;
    private bool lerpCrouch;
    private bool crouching;
    private bool sprinting;
    private float gravity;
    private float speed;
    private float jumpHeight;


    // Start is called before the first frame update
    void Start()
    {
        controller = GetComponent<CharacterController>();
        speed = WalkSpeed;
        gravity = DefaultGravity;
        jumpHeight = DefaultJumpHeight;
    }

    // Update is called once per frame
    void Update()
    {
        isGrounded = controller.isGrounded;
        if (lerpCrouch) {
            crouchTimer += Time.deltaTime;
            float p = crouchTimer / 1;
            p *= p;
            if (crouching) {
                controller.height = Mathf.Lerp(controller.height, 1, p);
            } else {
                controller.height = Mathf.Lerp(controller.height, 2, p);
            }

            if (p > 1) {
                lerpCrouch = false;
                crouchTimer = 0f;
            }
        }
    }

    public void Crouch() {
        crouching = !crouching;
        crouchTimer = 0;
        lerpCrouch = true;
        if (crouching) {
            speed = CrouchSpeed;
            gravity = CrouchGravity;
            jumpHeight = CrouchJumpHeight;
        } else {
            speed = WalkSpeed;
            gravity = DefaultGravity;
            jumpHeight = DefaultJumpHeight;
        }
    }

    public void Sprint() {
        sprinting = !sprinting;
        if (sprinting && !crouching) {
            speed = SprintSpeed;
        } else if (sprinting && crouching){
            speed = CrouchSpeed;
        } else {
            speed = WalkSpeed;
        }
            
    }

    public void ProcessMove(Vector2 input) {
        Vector3 moveDirection = Vector3.zero;
        moveDirection.x = input.x;
        moveDirection.z = input.y;
        controller.Move(transform.TransformDirection(moveDirection) * speed * Time.deltaTime);
        playerVelocity.y += gravity * Time.deltaTime;
        if (isGrounded && playerVelocity.y < 0) {
            playerVelocity.y = -2f;
        }
        controller.Move(playerVelocity * Time.deltaTime);
    }
    public void Jump() {
        if (isGrounded) {
            playerVelocity.y = Mathf.Sqrt(jumpHeight * -3.0f * gravity);
        }
    }
}
