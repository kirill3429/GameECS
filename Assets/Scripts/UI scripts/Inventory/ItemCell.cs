using UnityEngine;
using UnityEngine.UI;

public class ItemCell : IItem
{
    public string Name { get { return _name; } set { if (value.Trim() != "") _name = value; } }
    public int Icon { get { return _uiIcon; } set { _uiIcon = value; } }
    public int Background { get { return _background; } set { _background = value; } }
    public int PrefabNumber { get { return _prefabNumber; } set { _prefabNumber = value; } }
    public int Level { get { return _level; } set { _level = value; } }

    public Transform StatsHolder { get { return _statsHolder; } set { _statsHolder = value; }  }

    private string _name;
    private int _uiIcon;
    private int _background;
    private int _prefabNumber;
    private int _level;
    private Transform _statsHolder;


    public virtual void ShowInfo(GameObject uiWindow, GameObject statPrefab)
    {
        Debug.Log("ItemCell.ShowInfo()");
    }
    public virtual void ItemInit(AllPrefabsData uiWindow)
    {
        Debug.Log("ItemCell.ItemInit()");
    }
}
