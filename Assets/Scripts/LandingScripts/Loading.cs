using UnityEngine;
using UnityEngine.Networking;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using TMPro;

public class Loading : MonoBehaviour
{
    public Slider ProgressBar;
    public GameObject ProgressBarObj;
    public TMP_Text StatusMessage;
    public TMP_InputField Userinput;
    public TMP_InputField PWinput;
    public TMP_Text LoginStatusMessage;
    public GameObject LoginPanel;
    public GameObject LButton;

    public GameObject Loadpanel;

    public GameObject Introvideopanel;


    void Start()
    {
        LButton.GetComponent<Button>().onClick.AddListener(delegate() { loggin(); });

        StartCoroutine(Waitforintro());
    }

    IEnumerator Waitforintro() {
        yield return new WaitForSeconds(10.5f);

        Introvideopanel.SetActive(false);
        Loadpanel.SetActive(true);
        checkaccount();
    }

    void checkaccount() {
        StatusMessage.text = "checking account...";
        //if (!PlayerPrefs.HasKey("id")) {
        //    PlayerPrefs.SetString("id", "");
        //    PlayerPrefs.Save();
        //}
        //if (!PlayerPrefs.HasKey("session")) {
        //    PlayerPrefs.SetString("session", "");
        //    PlayerPrefs.Save();
        //} 

        // bypass for open source
        PlayerPrefs.SetString("session", "abcdefghijklmnopqrstuvwxyz1234567890");
        PlayerPrefs.SetString("id", "1234567890");
        PlayerPrefs.SetString("username", "dev");
        PlayerPrefs.Save();

        Startloadscene();

        //string session = PlayerPrefs.GetString("session");
        //if (session == "") {
        //    LoginPanel.SetActive(true);
        //} else {
        //    StartCoroutine(Getinfo(session));
        //}

        
    }
    void Startloadscene() {
        ProgressBarObj.SetActive(true);
        StartCoroutine(LoadScene());
    }

    IEnumerator LoadScene() {
        AsyncOperation op = SceneManager.LoadSceneAsync(1);
        while (true) {
            float progressValue = Mathf.Clamp01(op.progress / 0.9f);
            ProgressBar.value = progressValue;
            yield return null;
        }
    }

    public class LoginDataClass
    {
        public string session;
        public string id;
    }
    public class INFODataClass
    {
        public string username;
    }
    public class LoginErrorDataClass
    {
        public int error;
    }

    IEnumerator Login(string username, string password) {
        StatusMessage.text = "login to Your System";
        // login to Your System
        UnityWebRequest request = new UnityWebRequest("https://api.yourwebsite.com/login", "POST");
        string json = @"{
            'username':'world', 
            'password':'bar'
        }";
        byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(json);
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("username", username); // Set custom header
        request.SetRequestHeader("password", password);

        yield return request.SendWebRequest();

        if (request.result != UnityWebRequest.Result.Success)
        {
            if (request.responseCode == 500) {
                string jsonString = request.downloadHandler.text;
                LoginErrorDataClass jsondata = JsonUtility.FromJson<LoginErrorDataClass>(jsonString);

                if (jsondata.error == 1403) {
                    LoginStatusMessage.text = "Password is incorrect";
                }

            } else if (request.responseCode == 404) {
                LoginStatusMessage.text = "Username not found";
            }
            else {
                StatusMessage.text = $"Login failed retry to login in 5sec ({request.error})";
                Debug.Log(request.error);
                yield return new WaitForSeconds(5);
                StartCoroutine(Login(username, password));
            }
            
        }
        else
        {
            string jsonString = request.downloadHandler.text;
            LoginDataClass jsondata = JsonUtility.FromJson<LoginDataClass>(jsonString);

            PlayerPrefs.SetString("session", jsondata.session);
            PlayerPrefs.SetString("id", jsondata.id);
            PlayerPrefs.Save();
            LoginPanel.SetActive(false);

            StartCoroutine(Getinfo(jsondata.session));
        }
    }
    IEnumerator Getinfo(string session) {
        StatusMessage.text = "Getting info player";
        UnityWebRequest request = new UnityWebRequest("https://api.yourwebsite.com/info", "POST");
        string json = @"{
            'username':'world', 
            'password':'bar'
        }";
        byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(json);
        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
        request.downloadHandler = new DownloadHandlerBuffer();
        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("session", session); // Set custom header

        yield return request.SendWebRequest();

        if (request.result != UnityWebRequest.Result.Success)
        {
            if (request.responseCode == 404)
            {
                PlayerPrefs.SetString("id", "");
                PlayerPrefs.SetString("session", "");
                PlayerPrefs.Save();
                checkaccount();
            } else {
                StatusMessage.text = $"Get Info failed retry to Get Info in 5sec ({request.error})";
                Debug.Log(request.error);
                yield return new WaitForSeconds(5);
                StartCoroutine(Getinfo(session));
            }
        }
        else
        {
            string jsonString = request.downloadHandler.text;
            INFODataClass jsondata = JsonUtility.FromJson<INFODataClass>(jsonString);

            PlayerPrefs.SetString("username", jsondata.username);
            PlayerPrefs.Save();

            Startloadscene();
        }
    }
    void loggin() {
        string username = Userinput.text;
        string password = PWinput.text;
        if (username == "") {
            LoginStatusMessage.text = "Please Input the username.";
            return;
        }
        if (password == "") {
            LoginStatusMessage.text = "Please Input the password.";
            return;
        }

        StartCoroutine(Login(username, password));
    }
}
