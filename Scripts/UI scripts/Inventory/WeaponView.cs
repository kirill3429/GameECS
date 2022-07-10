using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using TMPro;

public class WeaponView : MonoBehaviour, IPointerClickHandler 
{
    public int Id;
    public Image IconUI;
    public float damage;
    public float atkSpeed;

    public WeaponStatsUI weaponStatsUI;

    public void OnEnable()
    {
        IconUI = GetComponentsInChildren<Image>()[1];
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        weaponStatsUI.damageText.text = damage.ToString();
        weaponStatsUI.atkSpeedText.text = atkSpeed.ToString();
    }
}
