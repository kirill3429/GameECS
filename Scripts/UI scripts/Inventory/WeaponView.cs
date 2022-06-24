using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class WeaponView : MonoBehaviour
{
    public int Id;
    public Image IconUI;

    public void OnEnable()
    {
        IconUI = GetComponentsInChildren<Image>()[1];
    }
}
