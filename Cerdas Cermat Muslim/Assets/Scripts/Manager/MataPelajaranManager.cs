using UnityEngine;
using UnityEngine.UI;

public class MataPelajaranManager : MonoBehaviour
{
    [SerializeField]
    private Button buttonFiqih;
    [SerializeField]
    private Button buttonQuranHadist;
    [SerializeField]
    private Button buttonAkidahAkhlak;
    [SerializeField]
    private Button buttonSejarahIslam;

    [SerializeField]
    private Animator animator;

    [SerializeField]
    private AudioSource subMenu;

    [SerializeField]
    private LevelManager levelManager;

    // Start is called before the first frame update
    void Start()
    {
        buttonFiqih.onClick.AddListener(() => OnClickButtonLevelShow("Fiqih"));
        buttonQuranHadist.onClick.AddListener(() => OnClickButtonLevelShow("Al-Qur'an Hadist"));
        buttonAkidahAkhlak.onClick.AddListener(() => OnClickButtonLevelShow("Akidah Akhlak"));
        buttonSejarahIslam.onClick.AddListener(() => OnClickButtonLevelShow("Sejarah Kebudayaan Islam"));
    }
    private void OnClickButtonLevelShow(string levelName)
    {
        // Trigger the animation
        animator.SetTrigger("levelShow");
        animator.SetTrigger("mataPelajaranHide");

        UpdatePanelLevel(levelName);
    }
    private void UpdatePanelLevel(string levelName)
    {
        levelManager.levelMapelTitle.text = levelName;
        levelManager.UpdateLevelCount(levelName);
    }
}
