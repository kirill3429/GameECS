using System.Collections;
using TMPro;
using UnityEngine;

[RequireComponent(typeof(TextMeshProUGUI))]

public class LocalizedText : MonoBehaviour
{
    private TextMeshProUGUI text;
    private string key;

    void Start()
    {
        Localize();
        LocalizationManager.OnLanguageChange += onLanguageChange;
    }


    private void onLanguageChange()
    {
        Localize();
    }

    private void OnDestroy()
    {
        LocalizationManager.OnLanguageChange -= onLanguageChange;
    }

    private void Init()
    {
        text = GetComponent<TextMeshProUGUI>();
        key = text.text;
    }

    public void Localize(string newKey = null)
    {
        if (text == null)
            Init();

        if (newKey != null)
            key = newKey;

        text.text = LocalizationManager.GetTranslate(key);
    }

}
