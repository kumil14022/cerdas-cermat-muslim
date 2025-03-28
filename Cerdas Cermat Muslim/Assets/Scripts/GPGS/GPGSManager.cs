using GooglePlayGames;
using GooglePlayGames.BasicApi;
using TMPro;
using UnityEngine;

public class GPGSManager : MonoBehaviour
{
    public TextMeshProUGUI logText;

    // Start is called before the first frame update
    void Start()
    {
        //GPGSLogin();
    }

    public void GPGSLogin()
    {
        PlayGamesPlatform.Instance.Authenticate(ProcessAuthentication);
    }

    internal void ProcessAuthentication(SignInStatus status)
    {
        if (status == SignInStatus.Success)
        {
            string displayName = PlayGamesPlatform.Instance.GetUserDisplayName();
            logText.text = "Selamat Datang: " + displayName;
        }
        else
        {
            logText.text = "Login Google Play Games";
        }
    }
}
