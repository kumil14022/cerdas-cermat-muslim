using UnityEngine;
using TMPro;

public class GetNyawa : MonoBehaviour
{
    private TextMeshProUGUI nyawaText;

    void Update()
    {
        nyawaText = GetComponent<TextMeshProUGUI>();
        nyawaText.text = "x" + PlayerPrefsManager.instance.GetNyawa();
    }
}
