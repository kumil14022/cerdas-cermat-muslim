using UnityEngine;
using UnityEngine.UI;

public class SettingsManager : MonoBehaviour
{
    [SerializeField]
    private Toggle backsound;

    [SerializeField]
    private Toggle iklan;

    [SerializeField]
    private AudioSource backsoundAudio;

    // Start is called before the first frame update
    void Start()
    {
        backsoundAudio.mute = PlayerPrefsManager.instance.GetBacksound() == 0;

        backsound.isOn = PlayerPrefsManager.instance.GetBacksound() == 1;

        backsound.onValueChanged.AddListener(OnBacksoundToggle);
    }

    // Callback method for backsound toggle
    private void OnBacksoundToggle(bool isOn)
    {
        PlayerPrefsManager.instance.SetBacksound(isOn ? 1 : 0);
        backsoundAudio.mute = PlayerPrefsManager.instance.GetBacksound() == 0;
    }
}
