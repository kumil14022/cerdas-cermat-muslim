using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.SceneManagement;

public class PlayerPrefsManager : MonoBehaviour
{
    #region Singleton
    public static PlayerPrefsManager instance;

    void Awake()
    {
        instance = this;
    }
    #endregion
    
    public string GetNickname()
    {
        return PlayerPrefs.GetString("Nickname", "Ikmal");
    }

    public void SetNickname(string nickname)
    {
        PlayerPrefs.SetString("Nickname", nickname);
    }
}