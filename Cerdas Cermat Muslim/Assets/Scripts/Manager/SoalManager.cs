using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;
using UnityEngine.Video;

public class SoalManager : MonoBehaviour
{
    public AudioSource backgroundMusic;
    public Texture videoSoalTexture;
    public RawImage screen;
    public VideoPlayer videoPlayer;
    public AudioSource audioSoal;
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
                jawabanBenarPanel.SetActive(true);
                animator.SetTrigger("jawabanBenarShow");
                StartCoroutine(HideJawabanBenarCoroutine());

                nextSoalIndex = soalIndex + 1;
                // contoh get = 1, next = 2 set = 2
                if (PlayerPrefsManager.instance.GetSoal(mapel, levelIndex) < nextSoalIndex)
                {
                    PlayerPrefsManager.instance.SetSoal(mapel, levelIndex, nextSoalIndex);
                }

                // jika soal terakhir
                if (nextSoalIndex > lengthSoal)
                {
                    levelIndex++;
                    PlayerPrefsManager.instance.SetSoal(mapel, levelIndex, 1);

                    // jika level terakhir
                    if (levelIndex >= levelManager.lengthLevel)
                    {
                        StartCoroutine(HideSoalShowLevelCoroutine());
                    }
                }

                soalIndex = PlayerPrefsManager.instance.GetSoal(mapel, levelIndex);

                levelText.text = $"Level {levelIndex}";
                numberSoalText.text = $"Soal ke {soalIndex} dari {lengthSoal}";

                audioSoal.gameObject.SetActive(false);
                screen.gameObject.SetActive(false);
                videoPlayer.gameObject.SetActive(false);

                if (levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalVideo != null)
                {
                    backgroundMusic.Pause();
                    screen.gameObject.SetActive(true);
                    videoPlayer.gameObject.SetActive(true);
                    screen.texture = videoSoalTexture;
                    videoPlayer.clip = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalVideo;
                }
                else if (levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalImage != null)
                {
                    if (backgroundMusic.isPlaying == false)
                    {
                        backgroundMusic.Play();
                    }

                    screen.gameObject.SetActive(true);
                    screen.texture = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalImage.texture;
                    screen.SetNativeSize();
                }
                else if (levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalAudio != null)
                {
                    backgroundMusic.Pause();
                    audioSoal.gameObject.SetActive(true);
                    audioSoal.clip = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalAudio;
                    audioSoal.Play();
                }
                else
                {
                    if (backgroundMusic.isPlaying == false)
                    {
                        backgroundMusic.Play();
                    }
                }

                pertanyaanText.text = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalText;
                buttonPilihanA.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[0];
                buttonPilihanB.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[1];
                buttonPilihanC.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[2];
                buttonPilihanD.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[3];
            }
            else
            {
                jawabanSalahPanel.SetActive(true);
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
                    
                    StartCoroutine(HideSoalShowLeveGameOverlCoroutine());
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
        jawabanBenarPanel.SetActive(false);
        animator.SetTrigger("soalShow");
        // Update the UI
    }

    IEnumerator HideJawabanSalahCoroutine()
    {
        yield return new WaitForSeconds(1);
        animator.SetTrigger("jawabanSalahHide");
        yield return new WaitForSeconds(0.25f);
        jawabanSalahPanel.SetActive(false);
        animator.SetTrigger("soalShow");
    }
    IEnumerator HideSoalShowLeveGameOverlCoroutine()
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

    IEnumerator HideSoalShowLevelCoroutine()
    {
        yield return new WaitForSeconds(1);
        animator.SetTrigger("soalHide");
        yield return new WaitForSeconds(0.25f);
        animator.SetTrigger("levelShow");
    }
}
