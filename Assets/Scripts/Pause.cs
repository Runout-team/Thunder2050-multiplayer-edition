using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Pause : MonoBehaviour
{
    public GameObject Panel;
    public GameObject RestartButton;
    public GameObject ExitButton;
    private int intelligence = 2;

    // Start is called before the first frame update
    void Start()
    {
        RestartButton.GetComponent<Button>().onClick.AddListener(delegate() { resetGame(); });
        ExitButton.GetComponent<Button>().onClick.AddListener(delegate() { ExitGame(); });
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape)) {
            if (intelligence == 1) {
                intelligence += 2;
            }
            intelligence -= 1;
            pausee();
        }
    }

    void pausee() {
        switch (intelligence) {
            case 2:
                Panel.SetActive(false);
                break;
            case 1:
                Panel.SetActive(true);
                break;
            default:
                print ("Incorrect intelligence level.");
                break;
        }
    }
    public void resetGame() {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    public void ExitGame() {
        Application.Quit();
    }

}