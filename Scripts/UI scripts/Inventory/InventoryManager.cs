using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

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
        Debug.Log("Enabled Inventory");
        dataInterface = FindObjectOfType<DataInterface>();
        LoadWeapons();
        LoadActiveWeapon();
        UpdatePlayerModelView();
    }

    private void OnDisable()
    {
        Debug.Log("Disabled inventory");
        SaveWeapons();
        SaveActiveWeapon();
        UpdatePlayerModelView();
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

        string activeWeaponString = DataInterface.GetActiveWeapon();
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
            DataInterface.SetActiveWeapon(activeWeapon);
        }
        else
        {
            DataInterface.SetActiveWeapon(null);
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

    public void UpdatePlayerModelView()
    {
        GameObject[] PlayerModels = GameObject.FindGameObjectsWithTag("Player");

        foreach (GameObject playerModel in PlayerModels)
        {
            Transform weaponHolder = playerModel.GetComponent<WeaponHolder>().weaponTransform;

            if (weaponContainer.childCount != 0)
            {
                if (weaponHolder.childCount > 0)
                {
                    Destroy(weaponHolder.GetChild(0).gameObject);
                }
                int weaponToSpawn = weaponContainer.GetChild(0).GetComponent<WeaponView>().Id;
                Instantiate(prefabsData.weaponPrefabs[weaponToSpawn], weaponHolder);

            }
            else
            {
                if (weaponHolder.childCount > 0)
                {
                    Destroy(weaponHolder.GetChild(0).gameObject);
                }
            }
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
