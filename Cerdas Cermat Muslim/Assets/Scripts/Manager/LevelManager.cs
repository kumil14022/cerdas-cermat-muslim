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

    public MataPelajaranSO FiqihSO;

    public MataPelajaranSO AlquranHadistSO;

    public MataPelajaranSO AkidahAkhlakSO;

    public MataPelajaranSO SejarahKebudayaanIslamSO;

    [SerializeField]
    private GameObject levelList;

    [SerializeField]
    private GameObject buttonLevelPrefabs;

    [SerializeField]
    private Animator animator;

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

    [SerializeField]
    private SoalManager soalManager;

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
    public void UpdateLevelUI()
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

            int soalIndex = i;
            buttonLevel.buttonLevel.onClick.AddListener(() => OnLevelButtonClicked(selectedMapelLevel, selectedLevelIndex, soalIndex, lengthSoal));

            currentSoalIndex = PlayerPrefsManager.instance.GetSoal(selectedMapelLevel, selectedLevelIndex);

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

    void OnLevelButtonClicked(string mapel, int levelIndex, int soalIndex, int lengthSoal)
    {
        soalManager.mapel = mapel;
        soalManager.levelIndex = levelIndex;
        soalManager.soalIndex = soalIndex;
        soalManager.lengthSoal = lengthSoal;

        // Trigger the animation
        animator.SetTrigger("soalShow");
        soalManager.levelText.text = $"Level {soalIndex}";
        soalManager.numberSoalText.text = $"Soal ke {soalIndex} dari {lengthSoal}";
        if (mapel == "Fiqih")
        {
            soalManager.pertanyaanText.text = FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalText;
            soalManager.buttonPilihanA.GetComponentInChildren<TextMeshProUGUI>().text = FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[0];
            soalManager.buttonPilihanB.GetComponentInChildren<TextMeshProUGUI>().text = FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[1];
            soalManager.buttonPilihanC.GetComponentInChildren<TextMeshProUGUI>().text = FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[2];
            soalManager.buttonPilihanD.GetComponentInChildren<TextMeshProUGUI>().text = FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[3];
        }
        else if (mapel == "Al-Qur'an Hadist")
        {
            soalManager.pertanyaanText.text = AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalText;
            soalManager.buttonPilihanA.GetComponentInChildren<TextMeshProUGUI>().text = AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[0];
            soalManager.buttonPilihanB.GetComponentInChildren<TextMeshProUGUI>().text = AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[1];
            soalManager.buttonPilihanC.GetComponentInChildren<TextMeshProUGUI>().text = AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[2];
            soalManager.buttonPilihanD.GetComponentInChildren<TextMeshProUGUI>().text = AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[3];
        }
        else if (mapel == "Akidah Akhlak")
        {
            soalManager.pertanyaanText.text = AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalText;
            soalManager.buttonPilihanA.GetComponentInChildren<TextMeshProUGUI>().text = AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[0];
            soalManager.buttonPilihanB.GetComponentInChildren<TextMeshProUGUI>().text = AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[1];
            soalManager.buttonPilihanC.GetComponentInChildren<TextMeshProUGUI>().text = AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[2];
            soalManager.buttonPilihanD.GetComponentInChildren<TextMeshProUGUI>().text = AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[3];
        }
        else if (mapel == "Sejarah Kebudayaan Islam")
        {
            soalManager.pertanyaanText.text = SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalText;
            soalManager.buttonPilihanA.GetComponentInChildren<TextMeshProUGUI>().text = SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[0];
            soalManager.buttonPilihanB.GetComponentInChildren<TextMeshProUGUI>().text = SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[1];
            soalManager.buttonPilihanC.GetComponentInChildren<TextMeshProUGUI>().text = SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[2];
            soalManager.buttonPilihanD.GetComponentInChildren<TextMeshProUGUI>().text = SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[3];
        }
        
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
