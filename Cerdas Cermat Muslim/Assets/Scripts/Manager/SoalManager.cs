using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections;
using UnityEngine.Video;
using System;
using UnityEditor.EditorTools;

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
    InterstitialAds interstitialAds;

    [SerializeField]
    private Animator animator;

    public GameObject popUpReference;

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
            Time.timeScale = 0;

            // jawaban benar
            if (levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.jawabanBenarIndex == pilihan)
            {
                StartCoroutine(ShowPopup("benar", "fiqih", levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.sumber));
            } 
            else
            {
                StartCoroutine(ShowPopup("salah", "fiqih", levelManager.FiqihSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.sumber));
            }
        }
        else if (mapel == "Al-Qur'an Hadist")
        {
            Time.timeScale = 0;

            // jawaban benar
            if (levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.jawabanBenarIndex == pilihan)
            {
                StartCoroutine(ShowPopup("benar", "alquranHadist", levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.sumber));
            }
            else
            {
                StartCoroutine(ShowPopup("salah", "alquranHadist", levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.sumber));
            }
        }
        else if (mapel == "Akidah Akhlak")
        {
            // jawaban benar
            if (levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.jawabanBenarIndex == pilihan)
            {
                StartCoroutine(ShowPopup("benar", "akidahAkhlak", levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.sumber));
            }
            else
            {
                StartCoroutine(ShowPopup("salah", "akidahAkhlak", levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.sumber));
            }
        }
        else if (mapel == "Sejarah Kebudayaan Islam")
        {
            // jawaban benar
            if (levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.jawabanBenarIndex == pilihan)
            {
                StartCoroutine(ShowPopup("benar", "sejarahKebudayaanIslam", levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.sumber));
            }
            else
            {
                StartCoroutine(ShowPopup("salah", "sejarahKebudayaanIslam", levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.sumber));
            }
        }

        levelManager.UpdateLevelUI();
    }

    private IEnumerator ShowPopup(string jawaban, string mapel, string sumber)
    {
        if (TryGetComponent<CanvasGroup>(out var canvasGroup))
        {
            canvasGroup.alpha = 1; // Pastikan soalManager terlihat
        }

        if (jawaban == "benar")
        {
            if (sumber != "")
            {
                GameObject popUpReferenceInt = Instantiate(popUpReference, transform);

                popUpReferenceInt.GetComponent<PopUpReference>().sumberText.text = sumber;

                yield return new WaitForSecondsRealtime(0.1f); // Tunggu agar UI bisa update

                Time.timeScale = 0;

                popUpReferenceInt.GetComponent<PopUpReference>().closeButton.onClick.AddListener(() =>
                {
                    Destroy(popUpReferenceInt);
                    Time.timeScale = 1;
                    jawabanBenarPanel.SetActive(true);
                    animator.SetTrigger("jawabanBenarShow");
                    NextSoal(mapel);
                });
            } else
            {
                NextSoal(mapel);
            }

            
        }
        else
        {
            Time.timeScale = 1;
            jawabanSalahPanel.SetActive(true);
            animator.SetTrigger("jawabanSalahShow");
            currentNyawa = PlayerPrefsManager.instance.GetNyawa();
            interstitialAds.ShowInterstitialAd();
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


    IEnumerator HideJawabanBenarCoroutine()
    {
        yield return new WaitForSeconds(1);
        animator.SetTrigger("jawabanBenarHide");
        yield return new WaitForSeconds(0.25f);
        jawabanBenarPanel.SetActive(false);
        animator.SetTrigger("soalShow");
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
        animator.SetTrigger("mataPelajaranShow");
    }

    void NextSoal(string mapel)
    {
        if (mapel == "fiqih")
        {
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
                soalIndex = 0;


                // jika level terakhir
                if (levelIndex > levelManager.lengthLevel)
                {
                    StartCoroutine(HideSoalShowLevelCoroutine());
                }
                else
                {
                    StartCoroutine(HideJawabanBenarCoroutine());
                }
            }
            else
            {
                StartCoroutine(HideJawabanBenarCoroutine());
            }

            soalIndex++;

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
        else if (mapel == "alquranHadist")
        {
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
                soalIndex = 0;

                // jika level terakhir
                if (levelIndex > levelManager.lengthLevel)
                {
                    StartCoroutine(HideSoalShowLevelCoroutine());
                }
                else
                {
                    StartCoroutine(HideJawabanBenarCoroutine());
                }
            }
            else
            {
                StartCoroutine(HideJawabanBenarCoroutine());
            }

            soalIndex++;

            levelText.text = $"Level {levelIndex}";
            numberSoalText.text = $"Soal ke {soalIndex} dari {lengthSoal}";

            audioSoal.gameObject.SetActive(false);
            screen.gameObject.SetActive(false);
            videoPlayer.gameObject.SetActive(false);

            if (levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalVideo != null)
            {
                backgroundMusic.Pause();
                screen.gameObject.SetActive(true);
                videoPlayer.gameObject.SetActive(true);
                screen.texture = videoSoalTexture;
                videoPlayer.clip = levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalVideo;
            }
            else if (levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalImage != null)
            {
                if (backgroundMusic.isPlaying == false)
                {
                    backgroundMusic.Play();
                }

                screen.gameObject.SetActive(true);
                screen.texture = levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalImage.texture;
                screen.SetNativeSize();
            }
            else if (levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalAudio != null)
            {
                backgroundMusic.Pause();
                audioSoal.gameObject.SetActive(true);
                audioSoal.clip = levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalAudio;
                audioSoal.Play();
            }
            else
            {
                if (backgroundMusic.isPlaying == false)
                {
                    backgroundMusic.Play();
                }
            }

            pertanyaanText.text = levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalText;
            buttonPilihanA.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[0];
            buttonPilihanB.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[1];
            buttonPilihanC.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[2];
            buttonPilihanD.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.AlquranHadistSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[3];
        }
        else if (mapel == "akidahAkhlak")
        {
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
                soalIndex = 0;

                // jika level terakhir
                if (levelIndex > levelManager.lengthLevel)
                {
                    StartCoroutine(HideSoalShowLevelCoroutine());
                }
                else
                {
                    StartCoroutine(HideJawabanBenarCoroutine());
                }
            }
            else
            {
                StartCoroutine(HideJawabanBenarCoroutine());
            }

            soalIndex++;

            levelText.text = $"Level {levelIndex}";
            numberSoalText.text = $"Soal ke {soalIndex} dari {lengthSoal}";

            audioSoal.gameObject.SetActive(false);
            screen.gameObject.SetActive(false);
            videoPlayer.gameObject.SetActive(false);

            if (levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalVideo != null)
            {
                backgroundMusic.Pause();
                screen.gameObject.SetActive(true);
                videoPlayer.gameObject.SetActive(true);
                screen.texture = videoSoalTexture;
                videoPlayer.clip = levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalVideo;
            }
            else if (levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalImage != null)
            {
                if (backgroundMusic.isPlaying == false)
                {
                    backgroundMusic.Play();
                }

                screen.gameObject.SetActive(true);
                screen.texture = levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalImage.texture;
                screen.SetNativeSize();
            }
            else if (levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalAudio != null)
            {
                backgroundMusic.Pause();
                audioSoal.gameObject.SetActive(true);
                audioSoal.clip = levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalAudio;
                audioSoal.Play();
            }
            else
            {
                if (backgroundMusic.isPlaying == false)
                {
                    backgroundMusic.Play();
                }
            }

            pertanyaanText.text = levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalText;
            buttonPilihanA.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[0];
            buttonPilihanB.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[1];
            buttonPilihanC.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[2];
            buttonPilihanD.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.AkidahAkhlakSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[3];
        }
        else if (mapel == "sejarahKebudayaanIslam")
        {

            jawabanBenarPanel.SetActive(true);
            animator.SetTrigger("jawabanBenarShow");

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
                soalIndex = 0;

                // jika level terakhir
                if (levelIndex > levelManager.lengthLevel)
                {
                    StartCoroutine(HideSoalShowLevelCoroutine());
                }
                else
                {
                    StartCoroutine(HideJawabanBenarCoroutine());
                }
            }
            else
            {
                StartCoroutine(HideJawabanBenarCoroutine());
            }

            soalIndex++;

            levelText.text = $"Level {levelIndex}";
            numberSoalText.text = $"Soal ke {soalIndex} dari {lengthSoal}";

            audioSoal.gameObject.SetActive(false);
            screen.gameObject.SetActive(false);
            videoPlayer.gameObject.SetActive(false);

            if (levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalVideo != null)
            {
                backgroundMusic.Pause();
                screen.gameObject.SetActive(true);
                videoPlayer.gameObject.SetActive(true);
                screen.texture = videoSoalTexture;
                videoPlayer.clip = levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalVideo;
            }
            else if (levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalImage != null)
            {
                if (backgroundMusic.isPlaying == false)
                {
                    backgroundMusic.Play();
                }

                screen.gameObject.SetActive(true);
                screen.texture = levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalImage.texture;
                screen.SetNativeSize();
            }
            else if (levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalAudio != null)
            {
                backgroundMusic.Pause();
                audioSoal.gameObject.SetActive(true);
                audioSoal.clip = levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalAudio;
                audioSoal.Play();
            }
            else
            {
                if (backgroundMusic.isPlaying == false)
                {
                    backgroundMusic.Play();
                }
            }

            pertanyaanText.text = levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.soalText;
            buttonPilihanA.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[0];
            buttonPilihanB.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[1];
            buttonPilihanC.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[2];
            buttonPilihanD.GetComponentInChildren<TextMeshProUGUI>().text = levelManager.SejarahKebudayaanIslamSO.levels[levelIndex - 1].soals[soalIndex - 1].soal.pilihan[3];
        }
    }
}
