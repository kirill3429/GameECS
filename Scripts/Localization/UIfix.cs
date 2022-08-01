using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIfix : MonoBehaviour
{
    public GameObject TopPanels;
    private void OnEnable()
    {
        LocalizationManager.OnLanguageChange += TopPanelFix;
    }

    private void TopPanelFix()
    {
        TopPanels.SetActive(false);
        TopPanels.SetActive(true);
    }

    private void OnDisable()
    {
        LocalizationManager.OnLanguageChange -= TopPanelFix;
    }
}
