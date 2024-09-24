using UnityEngine;
using TMPro;

public class GetNyawa : MonoBehaviour
{
    private TextMeshProUGUI nyawaText;

    // Start is called before the first frame update
    void Start()
    {
        nyawaText = GetComponent<TextMeshProUGUI>();
        nyawaText.text = "x" + PlayerPrefsManager.instance.GetNyawa();
    }
}
