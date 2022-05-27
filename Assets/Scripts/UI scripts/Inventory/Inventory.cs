using System.Collections.Generic;
using UnityEngine;
using System;
using System.Text;

public class Inventory : MonoBehaviour
{

    public Transform weaponContainer;
    public Transform inventoryContent;
    public Transform arsenalContent;

    private List<IItem> Items;

    [SerializeField] private GameManager _gameManager;
    [SerializeField] private InventoryCellView _inventoryCell;

    public InventoryCellView activeWeapon;
    public AllPrefabsData allPrefabsData;

    // Strings to save/load
    private string _inventory;
    private string _activeWeapon;

    public void Awake()
    {
        arsenalContent = transform.parent;
        _inventory = "WeaponCell-2-1-2-2 WeaponCell-1-1-2-5 WeaponCell-1-3-1-2 WeaponCell-2-4-4-2";
        _activeWeapon = "WeaponCell-5-5-3-2";
    }

    public void OnEnable()
    {
        LoadInventory();
        LoadActiveWeapon();
    }

    public void OnDisable()
    {
        SaveInventory();
        SaveActiveWeapon();

    }

    public void Render(List<IItem> items)
    {
        foreach (IItem item in items)
        {
            var cell = Instantiate(_inventoryCell, inventoryContent);
            cell.icon = item.Icon;
            cell.background = item.Background;
            cell.prefabNumber = item.PrefabNumber;
            cell.level = item.Level;
            cell.type = item.GetType().ToString();
            cell.elementLink = item;
            Debug.Log("Отрендерен предмет");
        }
    }

    public void SaveInventory()
    {
        StringBuilder inventoryToSave = new StringBuilder();

        foreach (Transform item in inventoryContent)
        {
            InventoryCellView cell = item.GetComponent<InventoryCellView>();

            inventoryToSave.Append(cell.type + "-" + cell.level.ToString() + "-" + cell.prefabNumber.ToString()
                + "-" + cell.icon.ToString() + "-" + cell.background.ToString() + " ");

        }

        _inventory = inventoryToSave.ToString();
        Debug.Log("Сохраненный инвентарь: " + _inventory);
        //_gameManager.SDK.SettingData(inventoryToSave.ToString());
        PlayerPrefs.SetString("Inventory", _inventory);
    }
    public void SaveActiveWeapon()
    {
        if (weaponContainer.transform.childCount > 0)
        {
            StringBuilder weaponToSave = new StringBuilder();
            InventoryCellView cell = weaponContainer.transform.GetChild(0).GetComponent<InventoryCellView>();
            weaponToSave.Append(cell.type + "-" + cell.level.ToString() + "-" + cell.prefabNumber.ToString()
            + "-" + cell.icon.ToString() + "-" + cell.background.ToString() + " ");
            _activeWeapon = weaponToSave.ToString();
            PlayerPrefs.SetString("ActiveWeapon", _activeWeapon);
            //_gameManager.SDK.SettingData(_activeWeapon);

            StringBuilder weaponStatsToSave = new StringBuilder();
            WeaponCell weapon = (WeaponCell)weaponContainer.transform.GetChild(0).GetComponent<InventoryCellView>().elementLink;
            weaponStatsToSave.Append(weapon.finalDamage + "-" + weapon.finalAttackSpeed + "-"
            + "-" + weapon.finalDmgChance + "-" + weapon.finalDmgMultiplier + "-");
            string statsWeapon = weaponStatsToSave.ToString();
            PlayerPrefs.SetString("PlayerWeaponStats", statsWeapon); // для GameScene  || finalDamage-finalAttackSpeed-finalDmgChance-finalDmgMultiplier

        }
        else
        {
            _activeWeapon = null;
        }

        //PlayerPrefs.SetString("ActiveWeapon", statsWeapon);
        Debug.Log("Сохраненное оружие: " + _activeWeapon);
    }

    private void LoadInventory()
    {
        foreach (Transform itemView in inventoryContent)
        {
            Destroy(itemView.gameObject);
        }

        //_gameManager.GetData();
        //_inventory = _gameManager.SDK.GetUserGameData.Inventory;
        Items = new List<IItem>();


        string[] invItems = _inventory.Trim().Split(" ");
        Debug.Log(invItems.Length + "Предметов в инвентаре");
        foreach (var i in invItems)
        {
            string[] itemStats = i.Split("-");

            switch (itemStats[0])
            {
                case "ItemCell":
                    Items.Add(new ItemCell());
                    break;
                case "WeaponCell":
                    Items.Add(new WeaponCell());
                    break;
            }
            Items[Items.Count - 1].Level = Convert.ToInt32(itemStats[1]);
            Items[Items.Count - 1].PrefabNumber = Convert.ToInt32(itemStats[2]);
            Items[Items.Count - 1].Icon = Convert.ToInt32(itemStats[3]);
            Items[Items.Count - 1].Background = Convert.ToInt32(itemStats[4]);
            Items[Items.Count - 1].ItemInit(allPrefabsData);
            
            // Предмет сохраняется так: ItemType-Level-PrefabNumber-Icon-Background
            Debug.Log("+1 предмет инициализирован");
        }
        Render(Items);
    }

    public void LoadActiveWeapon()
    {

        //_activeWeapon = _gameManager.SDK.GetUserGameData.ActiveWeapon;
        foreach (Transform i in weaponContainer)
        {
            Destroy(i.gameObject);
        }
        if (_activeWeapon != null)
        {
            Debug.Log("Загружется оружие: " + _activeWeapon);
            string[] weaponStats = _activeWeapon.Split("-");
            Debug.Log(weaponStats[0]);
            WeaponCell weaponCell = new WeaponCell();
            weaponCell.Level = Convert.ToInt32(weaponStats[1]);
            weaponCell.PrefabNumber = Convert.ToInt32(weaponStats[2]);
            weaponCell.Icon = Convert.ToInt32(weaponStats[3]);
            weaponCell.Background = Convert.ToInt32(weaponStats[4]);
            weaponCell.ItemInit(allPrefabsData);

            InventoryCellView viewCell = Instantiate(_inventoryCell, weaponContainer);
            //cell.icon.sprite = item.Icon;
            viewCell.background = weaponCell.Background;
            viewCell.prefabNumber = weaponCell.PrefabNumber;
            viewCell.level = weaponCell.Level;
            viewCell.type = weaponCell.GetType().ToString();
            viewCell.elementLink = weaponCell;
            Debug.Log("Загружено и отрендерено главное оружие: " + _activeWeapon);
            
        }
        
    }
}

