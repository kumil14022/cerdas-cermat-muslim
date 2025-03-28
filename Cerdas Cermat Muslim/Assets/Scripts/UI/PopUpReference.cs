using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class PopUpReference : MonoBehaviour
{
    public TextMeshProUGUI sumberText;
    public Button closeButton;

    private void Start()
    {
        closeButton.onClick.AddListener(CloseButton);
    }

    void CloseButton()
    {
        gameObject.SetActive(false);
    }
}
