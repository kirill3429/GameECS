using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class WeaponView : MonoBehaviour
{
    public int Level;
    public int Id;
    public TextMeshProUGUI LevelUI;
    public Image IconUI;

    public void OnEnable()
    {
        IconUI = GetComponentsInChildren<Image>()[1];
        LevelUI = GetComponentsInChildren<TextMeshProUGUI>()[1];
    }
}
