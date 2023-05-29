using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class CursorManager : MonoBehaviour
{
    private bool isCursorLocked = true; // Indicates if the cursor is locked or not

    public GameObject Panel;
    public GameObject ResumeButton;
    public GameObject RestartButton;
    public GameObject ExitButton;
    private int intelligence = 2;

    private void Start()
    {
        LockCursor(); // Lock the cursor when the game starts
        ResumeButton.GetComponent<Button>().onClick.AddListener(delegate() { Resume(); });

        RestartButton.GetComponent<Button>().onClick.AddListener(delegate() { resetGame(); });
        ExitButton.GetComponent<Button>().onClick.AddListener(delegate() { ExitGame(); });
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (isCursorLocked)
                UnlockCursor(); // Unlock the cursor if it's currently locked
            else
                LockCursor(); // Lock the cursor if it's currently unlocked
            
            if (intelligence == 1) {
                intelligence += 2;
            }
            intelligence -= 1;
            pausee();
        }
    }

    void Resume() {
        if (isCursorLocked)
            UnlockCursor(); // Unlock the cursor if it's currently locked
        else
            LockCursor(); // Lock the cursor if it's currently unlocked
        
        if (intelligence == 1) {
            intelligence += 2;
        }
        intelligence -= 1;
        pausee();
    }

    void pausee() {
        switch (intelligence) {
            case 2:
                Panel.SetActive(false);
                Time.timeScale = 1f;
                break;
            case 1:
                Panel.SetActive(true);
                Time.timeScale = 0f;
                break;
            default:
                print ("Incorrect intelligence level.");
                break;
        }
    }

    private void LockCursor()
    {
        Cursor.lockState = CursorLockMode.Locked;
        UnityEngine.Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        isCursorLocked = true;
    }

    private void UnlockCursor()
    {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        isCursorLocked = false;
    }

    public void resetGame() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    public void ExitGame() {
        Application.Quit();
    }
}
