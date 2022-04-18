using System.Collections.Generic;
using UnityEngine;
using System;
using System.Text;

public class Inventory : MonoBehaviour
{
    [SerializeField] private List<IItem> Items;
    [SerializeField] private Transform _container;
    [SerializeField] private InventoryCellView _inventoryCell;
    [SerializeField] private GameObject _windowForInfo;
    [SerializeField] private GameManager _gameManager;
    private string _inventory;


    public void Awake()
    {
        _inventory = "ItemCell-2-1-2-2 ItemCell-1-1-2-5 WeaponCell-1-1-1-2 ItemCell-2-4-4-2";
    }

    public void OnEnable()
    {
        foreach (Transform itemView in _container)
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
            // Предмет сохраняется так: ItemType-Level-PrefabNumber-Icon-Background
            Debug.Log("+1 предмет инициализирован");
        }
        Debug.Log(Items.Count + "предметов в списке");
        Render(Items);
    }

    public void OnDisable()
    {
        SaveInventory(Items);
        Debug.Log("Предметы сохранены");
        foreach(var i in Items)
        {
            Debug.Log(i.GetType().ToString());
        }
    }

    public void Render(List<IItem> items)
    {
        foreach (IItem item in items)
        {
            var cell = Instantiate(_inventoryCell, _container);
            //cell.icon.sprite = item.Icon;
            //cell.background = item.Background;
            cell.prefabNumber = item.PrefabNumber;
            cell.level = item.Level;
            cell.type = item.GetType().ToString();
            cell.elementLink = item;
            Debug.Log("Отрендерен предмет");
        }
    }

    public void SaveInventory(List<IItem> items)
    {
        StringBuilder inventoryToSave = new StringBuilder();

        foreach (Transform item in _container)
        {
            InventoryCellView cell = item.GetComponent<InventoryCellView>();

            inventoryToSave.Append(cell.type + "-" + cell.level.ToString() + "-" + cell.prefabNumber.ToString()
                + "-" + cell.icon.ToString() + "-" + cell.background.ToString() + " ");

        }

        _inventory = inventoryToSave.ToString();
        Debug.Log(_inventory);
        //_gameManager.SDK.SettingData(inventoryToSave.ToString());
    }


}

