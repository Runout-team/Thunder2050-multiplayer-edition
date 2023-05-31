using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class MainMenu : MonoBehaviour
{
    public Slider ProgressBar;
    public GameObject LoadingPanel;

    public GameObject ExitButton; 
    public GameObject PlayButton; 

    private void Start() {
        PlayButton.GetComponent<Button>().onClick.AddListener(delegate() { StartGame(); });
        ExitButton.GetComponent<Button>().onClick.AddListener(delegate() { Application.Quit(); });
    }

    [System.Obsolete]

    public void SettingsGame() {
       //Application.LoadLevel("Settings");
        Debug.Log("Noting In Here!");
    }

    public void StartGame() {
        LoadingPanel.SetActive(true);
        StartCoroutine(LoadScene());
    }

    IEnumerator LoadScene() {
        AsyncOperation op = SceneManager.LoadSceneAsync(2);
        while (true) {
            float progressValue = Mathf.Clamp01(op.progress / 0.9f);
            ProgressBar.value = progressValue;
            yield return null;
        }
    }
}
