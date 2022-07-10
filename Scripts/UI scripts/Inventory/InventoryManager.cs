using System.Collections;
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class InventoryManager : MonoBehaviour
{
    private Transform inventoryPanel;
    public Transform weaponContainer;
    public WeaponStatsUI weaponStatsUI;
    private List<WeaponInfoMono> weaponData;
    [SerializeField] private GameObject weaponViewPrefab;
    [SerializeField] private AllPrefabsData prefabsData;
    [SerializeField] private DataInterface dataInterface;


    private void OnEnable()
    {
        dataInterface = FindObjectOfType<DataInterface>();
        LoadWeapons();
        LoadActiveWeapon();
    }

    private void OnDisable()
    {
        SaveWeapons();
        SaveActiveWeapon();
        dataInterface.SaveToServer();

        ClearPanel(inventoryPanel);
        ClearPanel(weaponContainer);
    }

    #region Load

    private void LoadWeapons()
    {

        List<int> weaponsToSpawn = DataInterface.GetWeaponIDList();
        SpawnWeaponList(weaponsToSpawn);
    }


    private void SpawnWeaponList(List<int> weaponList)
    {
        foreach (var id in weaponList)
        {
            GameObject weapon = SpawnWeaponView(inventoryPanel);
            UpdateWeaponView(id, weapon);
        }
    }

    private GameObject SpawnWeaponView(Transform place)
    {
        return Instantiate(weaponViewPrefab, place);
    }
    private void UpdateWeaponView(int weaponId, GameObject weaponView)
    {
        WeaponView weaponProperties = weaponView.GetComponent<WeaponView>();
        weaponProperties.Id = weaponId;
        weaponProperties.IconUI.sprite = weaponData[weaponId].Icon;
        weaponProperties.damage = weaponData[weaponId].damage;
        weaponProperties.atkSpeed = weaponData[weaponId].delayBetweenAttack;
        weaponProperties.weaponStatsUI = weaponStatsUI;
    }

    #endregion

    #region LoadActiveWeapon
    private void LoadActiveWeapon()
    {

        string activeWeaponString = dataInterface.GetActiveWeapon();
        if (activeWeaponString != null && activeWeaponString != "")
        {
            GameObject weapon = SpawnWeaponView(weaponContainer);
            UpdateWeaponView(Convert.ToInt32(activeWeaponString), weapon);
        }
        
    }
    #endregion


    #region Save
    private void SaveWeapons()
    {

        List<WeaponView> weaponList = CreateAndFillWeaponList();
        string weaponsStringToSave = ConvertListToString(weaponList);
        DataInterface.SaveWeapons(weaponsStringToSave);
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
            stringBuilder.Append(weapon.Id + "-");
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
            string activeWeapon = info.Id.ToString();
            dataInterface.SetActiveWeapon(activeWeapon);
        }
        else
        {
            dataInterface.SetActiveWeapon(null);
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
