using System.Collections;
using System;
using System.Text;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InventoryManager : MonoBehaviour
{

    private Transform inventoryPanel;
    public Transform weaponContainer;
    private List<WeaponInfoMono> weaponData;
    [SerializeField] private GameObject weaponViewPrefab;
    [SerializeField] private AllPrefabsData prefabsData;
    private void OnEnable()
    {
        LoadWeapons();
        LoadActiveWeapon();
    }

    private void OnDisable()
    {
        SaveWeapons();
        SaveActiveWeapon();
        ClearPanel(inventoryPanel);
        ClearPanel(weaponContainer);
    }

    #region Load

    private void LoadWeapons()
    {
        //var weaponString = GetWeaponString();
        var weaponString = "1:3-2:1";
        Dictionary<int,int> weaponDictionary = ConvertWeaponToDictionary(weaponString);
        InstantiateWeaponViewsFromDictionary(weaponDictionary);   
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


    private void InstantiateWeaponViewsFromDictionary(Dictionary<int,int> weaponDictionary)
    {
        foreach (var weapon in weaponDictionary)
        {
            var weaponView = SpawnWeaponView(inventoryPanel);
            UpdateWeaponView(weapon.Key, weapon.Value, weaponView);
        }
    }

    private GameObject SpawnWeaponView(Transform place)
    {
        return Instantiate(weaponViewPrefab, place);
    }
    private void UpdateWeaponView(int weaponId, int weaponLevel, GameObject weaponView)
    {
        WeaponView weaponProperties = weaponView.GetComponent<WeaponView>();
        weaponProperties.Id = weaponId;
        weaponProperties.LevelUI.text = weaponLevel.ToString();
        weaponProperties.Level = weaponLevel;
        weaponProperties.IconUI.sprite = weaponData[weaponId].Icon;
    }

    #endregion

    #region LoadActiveWeapon
    private void LoadActiveWeapon()
    {

        string activeWeaponString = PlayerPrefs.GetString("ActiveWeapon");
        Debug.Log(activeWeaponString);
        if (activeWeaponString != null)
        {
            string[] activeWeaponMassive = activeWeaponString.Split(":");
            GameObject weapon = SpawnWeaponView(weaponContainer);
            UpdateWeaponView(Convert.ToInt32(activeWeaponMassive[0]), Convert.ToInt32(activeWeaponMassive[1]), weapon);
        }
        
    }
    #endregion


    #region Save
    private void SaveWeapons()
    {

        List<WeaponView> weaponList = CreateAndFillWeaponList();
        string weaponsStringToSave = ConvertListToString(weaponList);
        SaveWeaponsToPrefs(weaponsStringToSave);
    }

    private void SaveWeaponsToPrefs(string stringToSave)
    {
        PlayerPrefs.SetString("Weapons", stringToSave);
    }

    private List<WeaponView> CreateAndFillWeaponList()
    {
        List<WeaponView> weaponList = new List<WeaponView>();
        foreach (Transform item in inventoryPanel)
        {
            weaponList.Add(item.GetComponent<WeaponView>());
        }
        return weaponList;
    }

    private string ConvertListToString(List<WeaponView> weaponList)
    {
        StringBuilder stringBuilder = new StringBuilder();

        foreach (WeaponView weapon in weaponList)
        {
            stringBuilder.Append(weapon.Id + ":" + weapon.Level + "-");
        }

        Debug.Log(stringBuilder.ToString());
        return stringBuilder.ToString();
    }
    #endregion

    #region SaveActiveWeapon
    private void SaveActiveWeapon()
    {
        if (weaponContainer.childCount > 0)
        {
            var info = weaponContainer.GetChild(0).GetComponent<WeaponView>();
            string activeWeapon = info.Id.ToString() + ":" + info.Level.ToString();
            PlayerPrefs.SetString("ActiveWeapon", activeWeapon);
        }
        else
        {
            PlayerPrefs.SetString("ActiveWeapon", null);
        }
    }
    #endregion
    private void ClearPanel(Transform panel)
    {
        foreach (Transform item in panel)
        {
            Destroy(item.gameObject);
        }
    }


    private void Awake()
    {
        inventoryPanel = transform;
        weaponData = new List<WeaponInfoMono>();
        foreach (var weapon in prefabsData.weaponPrefabs)
        {
            weaponData.Add(weapon.GetComponent<WeaponInfoMono>());
        }
    }
}
