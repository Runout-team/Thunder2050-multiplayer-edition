using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class LoginAS : MonoBehaviour
{
    // Start is called before the first frame update
    public TMP_Text UsernameDisplay;
    public TMP_Text IDDisplay;
    void Start()
    {
        Time.timeScale = 1f;

        string id = PlayerPrefs.GetString("id");
        string username = PlayerPrefs.GetString("username");
        UsernameDisplay.text = "Login as " + username;
        IDDisplay.text = id;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
