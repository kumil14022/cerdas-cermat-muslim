using UnityEngine;

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

    public int GetNyawa()
    {
        return PlayerPrefs.GetInt("Nyawa", 10);
    }

    public void SetNyawa(int nyawa)
    {
        PlayerPrefs.SetInt("Nyawa", nyawa);
    }

    public void SetLevel(string mapel, int level, int soal)
    {
        PlayerPrefs.SetInt(mapel + "_Level", level);
        PlayerPrefs.SetInt(mapel + "_Level_" + level + "_Soal", soal);
    }

    public int GetLevel(string mapel)
    {
        return PlayerPrefs.GetInt(mapel + "_Level", 1);
    }

    public void SetSoal(string mapel, int level, int soal)
    {
        PlayerPrefs.SetInt(mapel + "_Level_" + level + "_Soal", soal);
    }

    public int GetSoal(string mapel, int level)
    {
        return PlayerPrefs.GetInt(mapel + "_Level_" + level + "_Soal", 1);
    }

    
}