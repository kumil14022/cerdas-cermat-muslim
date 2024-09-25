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

    [SerializeField]
    private GameObject levelList;

    [SerializeField]
    private GameObject buttonLevelPrefabs;

    private int lengthLevel = 1;
    
    private int selectedLevelIndex = 1;
    
    private int currentLevelIndex = 1;

    private int currentSoalIndex = 1;

    private int lengthSoal = 0;

    private string selectedMapelLevel = "Fiqih";

    [SerializeField]
    private Sprite lockImageButton;
    [SerializeField]
    private Sprite currentImageButton;
    [SerializeField]
    private Sprite completedImageButton;

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

        selectedMapelLevel = selectedMapel;
    
        currentLevelIndex = PlayerPrefsManager.instance.GetLevel(selectedMapel);

        selectedLevelIndex = currentLevelIndex;


        // Update the UI
        UpdateLevelUI();
    }

    // Update the displayed level
    void UpdateLevelUI()
    {
        // Clear any existing buttons
        foreach (Transform child in levelList.transform)
        {
            Destroy(child.gameObject);
        }

        // Tentukan jumlah level berdasarkan openMapel yang baru
        if (selectedMapelLevel == "Fiqih")
        {
            lengthSoal = FiqihSO.levels[selectedLevelIndex-1].soals.Length;
        }
        else if (selectedMapelLevel == "Al-Qur'an Hadist")
        {
            lengthSoal = AlquranHadistSO.levels[selectedLevelIndex-1].soals.Length;
        }
        else if (selectedMapelLevel == "Akidah Akhlak")
        {
            lengthSoal = AkidahAkhlakSO.levels[selectedLevelIndex-1].soals.Length;
        }
        else if (selectedMapelLevel == "Sejarah Kebudayaan Islam")
        {
            lengthSoal = SejarahKebudayaanIslamSO.levels[selectedLevelIndex-1].soals.Length;
        }

        levelToText.text = $"Level {selectedLevelIndex}";

        // Disable left button if at the first level, and right button if at the last level
        leftLevelButton.interactable = selectedLevelIndex > 1;
        rightLevelButton.interactable = selectedLevelIndex < lengthLevel;
        
        // Instantiate level buttons dynamically
        for (int i = 1; i <= lengthSoal; i++)
        {
            GameObject levelButton = Instantiate(buttonLevelPrefabs, levelList.transform);
            ButtonLevel buttonLevel = levelButton.GetComponent<ButtonLevel>();

            // Set the button text to the level number
            buttonLevel.numberLevelText.text = $"{i}";
            buttonLevel.buttonImage.sprite = completedImageButton;

            int levelIndex = i;
            buttonLevel.buttonLevel.onClick.AddListener(() => OnLevelButtonClicked(levelIndex));

            currentSoalIndex = PlayerPrefsManager.instance.GetSoal(selectedMapelLevel, selectedLevelIndex);
            if (selectedLevelIndex == 1) {
                currentSoalIndex = 1;
                PlayerPrefsManager.instance.SetSoal(selectedMapelLevel, selectedLevelIndex, currentSoalIndex);
            }

            // jika semua soal di level 1 selesai, buka soal 1 pada level berikutnya
            if (i == lengthSoal && currentSoalIndex == lengthSoal)
            {
                if (selectedLevelIndex < lengthLevel)
                {
                    PlayerPrefsManager.instance.SetSoal(selectedMapelLevel, selectedLevelIndex + 1, 1);
                }
            }

            if (i == currentSoalIndex)
            {
                buttonLevel.buttonImage.sprite = currentImageButton;
            }
            else if (i > currentSoalIndex || currentSoalIndex == 0)
            {
                buttonLevel.numberLevelText.text = " ";
                buttonLevel.buttonImage.sprite = lockImageButton;
                buttonLevel.buttonLevel.interactable = false;
            } else
            {
                buttonLevel.buttonImage.sprite = completedImageButton;
            }
        }
    }
    
    void OnLevelButtonClicked(int levelIndex)
    {
        Debug.Log("level: " + levelIndex);
    }

    // Go to the previous level
    void GoToPreviousLevel()
    {
        if (selectedLevelIndex > 1)
        {
            selectedLevelIndex--;
            UpdateLevelUI();
        }
    }

    // Go to the next level
    void GoToNextLevel()
    {
        if (selectedLevelIndex < lengthLevel)
        {
            selectedLevelIndex++;
            UpdateLevelUI();
        }
    }
}
