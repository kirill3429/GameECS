using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InventoryManager : MonoBehaviour
{

    private Transform inventoryPanel;
    [SerializeField] private GameObject weaponViewPrefab;
    [SerializeField] private List<WeaponInfoMono> weaponData;
    [SerializeField] private AllPrefabsData prefabsData;
    private void OnEnable()
    {
        LoadWeapons();
    }

    private void OnDisable()
    {
        SaveWeapons();
        ClearInventoryPanel();
    }

    private void LoadWeapons()
    {
        var weaponString = GetWeaponString();
        Dictionary<int,int> weaponDictionary = ConvertWeaponToDictionary(weaponString);
        InstantiateWeaponViewsFromDictionary(weaponDictionary);   

    }

    private void InstantiateWeaponViewsFromDictionary(Dictionary<int,int> weaponDictionary)
    {
        foreach (var weapon in weaponDictionary)
        {
            SpawnWeaponView(weapon.Key, weapon.Value);
        }
    }

    private string GetWeaponString()
    {
        return PlayerPrefs.GetString("Weapons");
    }

    private Dictionary<int,int> ConvertWeaponToDictionary(string weaponString)
    {
        string[] stringWeaponArray = weaponString.Split("-");

        Dictionary<int, int> weapons = new Dictionary<int, int>();

        foreach (string weapon in stringWeaponArray)
        {
            if (weapon != "")
            {
                string[] intWeapon = weapon.Split(":");

                weapons.Add(Convert.ToInt32(intWeapon[0]), Convert.ToInt32(intWeapon[1]));
            }
        }
        return weapons;
    }

    private void SpawnWeaponView(int weaponId, int weaponLevel)
    {
        GameObject weaponView = Instantiate(weaponViewPrefab, inventoryPanel);
        WeaponView weaponProperties = weaponView.GetComponent<WeaponView>();
        weaponProperties.LevelUI.text = weaponLevel.ToString();
        weaponProperties.IconUI.sprite = weaponData[weaponId].Icon;
    }

    private void SaveWeapons()
    {

    }
    private void ClearInventoryPanel()
    {

    }

    private void Start()
    {
        foreach (GameObject waepon in prefabsData.weaponPrefabs)
        {
            weaponData.Add(waepon.GetComponent<WeaponInfoMono>());
        }
    }

    private void Awake()
    {
        inventoryPanel = transform;
    }
}
