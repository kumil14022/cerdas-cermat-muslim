using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MainMenuManager : MonoBehaviour
{
    [SerializeField]
    private Button buttonNickname;
    [SerializeField]
    private Button buttonCloseNickname;
    [SerializeField]
    private Button buttonStartGame;
    [SerializeField]
    private Button buttonSettingsGame;
    [SerializeField]
    private Button buttonCloseSettingsGame;
    [SerializeField]
    private Button buttonResetGame;
    [SerializeField]
    private Button buttonQuitGame;
    [SerializeField]
    private Button buttonHomeMataPelajaran;
    [SerializeField]
    private Button buttonHomeLevel;
    [SerializeField]
    private Button buttonHomeSoal;
    [SerializeField]
    private Button buttonResetGameOk;
    [SerializeField]
    private Button buttonResetGameBatal;
    [SerializeField]
    private Button buttonQuitGameOk;
    [SerializeField]
    private Button buttonQuitGameBatal;


    [SerializeField]
    private TextMeshProUGUI textNickname;
    [SerializeField]
    private TMP_InputField inputFieldNickname;

    [SerializeField]
    private AudioSource subMenu;

    [SerializeField]
    private Animator animator;

    [SerializeField]
    private CanvasGroup mataPelajaranPanel;

    [SerializeField]
    private CanvasGroup levelPanel;

    [SerializeField]
    private LevelManager levelManager;

    // Start is called before the first frame update
    void Start()
    {
        HideAnotherPanel(mataPelajaranPanel);
        HideAnotherPanel(levelPanel);

        textNickname.text = PlayerPrefsManager.instance.GetNickname();
        inputFieldNickname.text = PlayerPrefsManager.instance.GetNickname();
        inputFieldNickname.onValueChanged.AddListener(OnInputFieldChanged);

        buttonNickname.onClick.AddListener(OnClickButtonNicknameShow);
        buttonCloseNickname.onClick.AddListener(OnClickButtonNicknameHide);
        buttonStartGame.onClick.AddListener(OnClickButtonStartGame);
        buttonSettingsGame.onClick.AddListener(OnClickButtonSettingsGame);
        buttonCloseSettingsGame.onClick.AddListener(OnClickButtonCloseSettingsGame);
        buttonResetGame.onClick.AddListener(OnClickButtonResetGame);
        buttonQuitGame.onClick.AddListener(OnClickButtonQuitGame);
        buttonHomeMataPelajaran.onClick.AddListener(OnClickButtonHomeMataPelajaran);
        buttonHomeLevel.onClick.AddListener(OnClickButtonHomeLevel);
        buttonHomeSoal.onClick.AddListener(OnClickButtonHomeSoal);
        buttonResetGameOk.onClick.AddListener(OnClickButtonResetGameOk);
        buttonResetGameBatal.onClick.AddListener(OnClickButtonResetGameBatal);
        buttonQuitGameOk.onClick.AddListener(OnClickButtonQuitGameOk);
        buttonQuitGameBatal.onClick.AddListener(OnClickButtonQuitGameBatal);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            animator.SetTrigger("quitGamePanelShow");
        }
    }

    private void HideAnotherPanel(CanvasGroup canvasGroup)
    {
        canvasGroup.alpha = 0f;
        canvasGroup.interactable = false;
        canvasGroup.blocksRaycasts = false;
    }

    private void OnInputFieldChanged(string nickname)
    {
        PlayerPrefsManager.instance.SetNickname(nickname);
        textNickname.text = PlayerPrefsManager.instance.GetNickname();
    }

    private void OnClickButtonNicknameShow()
    {
        animator.SetTrigger("nicknameShow");
    }

    private void OnClickButtonNicknameHide()
    {
        animator.SetTrigger("nicknameHide");
    }

    private void OnClickButtonStartGame()
    {
        StartCoroutine(StartGameCoroutine());
    }

    private void OnClickButtonSettingsGame()
    {
        animator.SetTrigger("settingsShow");
    }

    private void OnClickButtonCloseSettingsGame()
    {
        animator.SetTrigger("settingsHide");
    }

    private void OnClickButtonResetGame()
    {
        animator.SetTrigger("confirmResetShow");
    }

    private void OnClickButtonQuitGame()
    {
        animator.SetTrigger("quitGamePanelShow");
    }

    private void OnClickButtonHomeMataPelajaran()
    {
        levelManager.UpdateLevelUI();
        StartCoroutine(HomeMataPelajaranCoroutine());
    }

    private void OnClickButtonHomeLevel()
    {
        levelManager.UpdateLevelUI();
        StartCoroutine(HomeLevelCoroutine());
    }

    private void OnClickButtonHomeSoal()
    {
        levelManager.UpdateLevelUI();
        StartCoroutine(HomeSoalCoroutine());
    }

    private void OnClickButtonResetGameOk()
    {
        PlayerPrefs.DeleteAll();
        animator.SetTrigger("confirmResetHide");
    }

    private void OnClickButtonResetGameBatal()
    {
        animator.SetTrigger("confirmResetHide");
    }

    private void OnClickButtonQuitGameOk()
    {
        Application.Quit();
    }

    private void OnClickButtonQuitGameBatal()
    {
        animator.SetTrigger("quitGamePanelHide");
    }

    private IEnumerator StartGameCoroutine()
    {
        animator.SetTrigger("mainMenuHide");
        yield return new WaitForSeconds(1f);
        animator.SetTrigger("mataPelajaranShow");
        subMenu.Play();
    }

    private IEnumerator HomeMataPelajaranCoroutine()
    {
        animator.SetTrigger("mataPelajaranHide");
        yield return new WaitForSeconds(1f);
        animator.SetTrigger("mainMenuShow");
    }

    private IEnumerator HomeLevelCoroutine()
    {
        animator.SetTrigger("levelHide");
        yield return new WaitForSeconds(1f);
        animator.SetTrigger("mataPelajaranShow");
    }

    private IEnumerator HomeSoalCoroutine()
    {
        animator.SetTrigger("soalHide");
        yield return new WaitForSeconds(1f);
        animator.SetTrigger("levelShow");
    }
}
