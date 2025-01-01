using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;
using UnityEngine.Video;

public class SoalManager : MonoBehaviour
{
    public Texture videoSoalTexture;
    public RawImage screen;
    public VideoPlayer videoPlayer;
    public TextMeshProUGUI levelText;
    public TextMeshProUGUI numberSoalText;
    public TextMeshProUGUI pertanyaanText;
    public Button buttonPilihanA;
    public Button buttonPilihanB;
    public Button buttonPilihanC;
    public Button buttonPilihanD;

    [SerializeField]
    private GameObject jawabanBenarPanel;
    [SerializeField]
    private GameObject jawabanSalahPanel;

    [HideInInspector]
    public string mapel;
    [HideInInspector]
    public int levelIndex;
    [HideInInspector]
    public int soalIndex;
    [HideInInspector]
    public int lengthSoal;

    [SerializeField]
    private LevelManager levelManager;

    [SerializeField]
    private Animator animator;

    private int currentNyawa = 0;

    private int nextSoalIndex = 0;

    // Start is called before the first frame update
    void Start()
    {
        buttonPilihanA.onClick.AddListener(() => CheckJawaban(0));
        buttonPilihanB.onClick.AddListener(() => CheckJawaban(1));
        buttonPilihanC.onClick.AddListener(() => CheckJawaban(2));
        buttonPilihanD.onClick.AddListener(() => CheckJawaban(3));
    }

    private void CheckJawaban(int pilihan)
    {
        if (mapel == "Fiqih")
        {
            // jawaban benar
            if (levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.jawabanBenarIndex == pilihan)
            {
                animator.SetTrigger("jawabanBenarShow");
                StartCoroutine(HideJawabanBenarCoroutine());

                nextSoalIndex = soalIndex + 1;
                // contoh get = 1, next = 2 set = 2
                if (PlayerPrefsManager.instance.GetSoal(mapel, levelIndex) < nextSoalIndex)
                {
                    PlayerPrefsManager.instance.SetSoal(mapel, levelIndex, nextSoalIndex);
                }

                // jika soal terakhir
                if (nextSoalIndex >= lengthSoal)
                {
                    levelIndex++;
                    PlayerPrefsManager.instance.SetSoal(mapel, levelIndex, 1);
                }

                soalIndex = PlayerPrefsManager.instance.GetSoal(mapel, levelIndex);

                levelText.text = $"Level {levelIndex}";
                numberSoalText.text = $"Soal ke {soalIndex} dari {lengthSoal}";

                pertanyaanText.text = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalText;
                buttonPilihanA.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[0];
                buttonPilihanB.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[1];
                buttonPilihanC.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[2];
                buttonPilihanD.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[3];
            }
            else
            {
                animator.SetTrigger("jawabanSalahShow");
                currentNyawa = PlayerPrefsManager.instance.GetNyawa();
                if (currentNyawa > 0)
                {
                    PlayerPrefsManager.instance.SetNyawa(currentNyawa - 1);
                    StartCoroutine(HideJawabanSalahCoroutine());
                } 
                else
                {
                    // game over
                    // reset soal
                    PlayerPrefsManager.instance.SetNyawa(10);
                    // dont reset soal if pernah tamat level tsb
                    if (PlayerPrefsManager.instance.GetSoal(mapel, levelIndex) < lengthSoal)
                    {
                        PlayerPrefsManager.instance.SetSoal(mapel, levelIndex, 1);
                    }
                    StartCoroutine(HideSoalShowLevelCoroutine());
                }
            }
        }
        else if (mapel == "Al-Qur'an Hadist")
        {
        }
        else if (mapel == "Akidah Akhlak")
        {
        }
        else if (mapel == "Sejarah Kebudayaan Islam")
        {
        }

        levelManager.UpdateLevelUI();
    }

    IEnumerator HideJawabanBenarCoroutine()
    {
        yield return new WaitForSeconds(1);
        animator.SetTrigger("jawabanBenarHide");
        yield return new WaitForSeconds(0.25f);
        animator.SetTrigger("soalShow");
        // Update the UI
    }

    IEnumerator HideJawabanSalahCoroutine()
    {
        yield return new WaitForSeconds(1);
        animator.SetTrigger("jawabanSalahHide");
        yield return new WaitForSeconds(0.25f);
        animator.SetTrigger("soalShow");
    }
    IEnumerator HideSoalShowLevelCoroutine()
    {
        yield return new WaitForSeconds(1);
        animator.SetTrigger("jawabanSalahHide");
        animator.SetTrigger("soalHide");
        animator.SetTrigger("gameOverShow");
        yield return new WaitForSeconds(1);
        animator.SetTrigger("gameOverHide");
        yield return new WaitForSeconds(0.25f);
        animator.SetTrigger("levelShow");
    }
}
