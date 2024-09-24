using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class LevelManager : MonoBehaviour
{
    public TextMeshProUGUI levelMapelTitle;

    [SerializeField]
    private TextMeshProUGUI levelToText;

    [SerializeField]
    private Button leftLevelButton;

    [SerializeField] 
    private Button rightLevelButton;

    [SerializeField]
    private MataPelajaranSO FiqihSO;

    [SerializeField]
    private MataPelajaranSO AlquranHadistSO;

    [SerializeField]
    private MataPelajaranSO AkidahAkhlakSO;

    [SerializeField]
    private MataPelajaranSO SejarahKebudayaanIslamSO;

    private int lengthLevel = 1;
    
    private int currentLevelIndex = 1;

    // Start is called before the first frame update
    void Start()
    {
        // Initialize the UI
        UpdateLevelUI();

        // Add listeners to the buttons
        leftLevelButton.onClick.AddListener(GoToPreviousLevel);
        rightLevelButton.onClick.AddListener(GoToNextLevel);
    }

    public void UpdateLevelCount(string selectedMapel)
    {
        // Tentukan jumlah level berdasarkan openMapel yang baru
        if (selectedMapel == "Fiqih")
        {
            lengthLevel = FiqihSO.levels.Length;
        }
        else if (selectedMapel == "Al-Qur'an Hadist")
        {
            lengthLevel = AlquranHadistSO.levels.Length;
        }
        else if (selectedMapel == "Akidah Akhlak")
        {
            lengthLevel = AkidahAkhlakSO.levels.Length;
        }
        else if (selectedMapel == "Sejarah Kebudayaan Islam")
        {
            lengthLevel = SejarahKebudayaanIslamSO.levels.Length;
        }
        
        // Reset current level to the one stored in PlayerPrefs
        currentLevelIndex = PlayerPrefsManager.instance.GetLevel(selectedMapel);

        // Update the UI
        UpdateLevelUI();
    }

    // Update the displayed level
    void UpdateLevelUI()
    {
        levelToText.text = $"Level {currentLevelIndex}";

        // Disable left button if at the first level, and right button if at the last level
        leftLevelButton.interactable = currentLevelIndex > 1;
        rightLevelButton.interactable = currentLevelIndex < lengthLevel;
    }

    // Go to the previous level
    void GoToPreviousLevel()
    {
        if (currentLevelIndex > 1)
        {
            currentLevelIndex--;
            UpdateLevelUI();
        }
    }

    // Go to the next level
    void GoToNextLevel()
    {
        if (currentLevelIndex < lengthLevel)
        {
            currentLevelIndex++;
            UpdateLevelUI();
        }
    }
}
