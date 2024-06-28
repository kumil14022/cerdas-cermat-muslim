using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class MainMenuManager : MonoBehaviour
{
    public Button buttonNickname;
    public Button buttonCloseNickname;
    public Button buttonStartGame;
    public Button buttonHomeMataPelajaran;

    public TextMeshProUGUI textNickname;
    public TMP_InputField inputFieldNickname;

    public AudioSource subMenu;

    [SerializeField]
    private Animator animator;

    // Start is called before the first frame update
    void Start()
    {
        textNickname.text = PlayerPrefsManager.instance.GetNickname();
        inputFieldNickname.text = PlayerPrefsManager.instance.GetNickname();
        inputFieldNickname.onValueChanged.AddListener(OnInputFieldChanged);

        buttonNickname.onClick.AddListener(onClickButtonNicknameShow);
        buttonCloseNickname.onClick.AddListener(onClickButtonNicknameHide);
        buttonStartGame.onClick.AddListener(onClickButtonStartGame);
        buttonHomeMataPelajaran.onClick.AddListener(onClickButtonHomeMataPelajaran);
    }
    
    private void OnInputFieldChanged(string nickname)
    {
        PlayerPrefsManager.instance.SetNickname(nickname);
        textNickname.text = PlayerPrefsManager.instance.GetNickname();
    }

    private void onClickButtonNicknameShow()
    {
        animator.SetTrigger("nicknameShow");
    }

    private void onClickButtonNicknameHide()
    {
        animator.SetTrigger("nicknameHide");
    }

    private void onClickButtonStartGame()
    {
        StartCoroutine(StartGameCoroutine());
    }

    private void onClickButtonHomeMataPelajaran()
    {
        StartCoroutine(HomeMataPelajaranCoroutine());
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

}
