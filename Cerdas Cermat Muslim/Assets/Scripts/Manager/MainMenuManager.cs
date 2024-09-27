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
    private Button buttonHomeMataPelajaran;
    [SerializeField]
    private Button buttonHomeLevel;
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
        buttonHomeMataPelajaran.onClick.AddListener(OnClickButtonHomeMataPelajaran);
        buttonHomeLevel.onClick.AddListener(OnClickButtonHomeLevel);
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

    private void OnClickButtonHomeMataPelajaran()
    {
        StartCoroutine(HomeMataPelajaranCoroutine());
    }

    private void OnClickButtonHomeLevel()
    {
        StartCoroutine(HomeLevelCoroutine());
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
}
