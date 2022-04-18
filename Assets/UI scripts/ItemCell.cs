using UnityEngine;
using UnityEngine.UI;

public class ItemCell : IItem
{
    public string Name { get { return _name; } set { if (value.Trim() != "") _name = value; } }
    public int Icon { get { return _uiIcon; } set { _uiIcon = value; } }
    public int Background { get { return _background; } set { _background = value; } }
    public int PrefabNumber { get { return _prefabNumber; } set { _prefabNumber = value; } }
    public int Level { get { return _level; } set { _level = value; } }



    [SerializeField] private string _name;
    [SerializeField] private int _uiIcon;
    [SerializeField] private int _background;
    [SerializeField] private int _prefabNumber;
    [SerializeField] private int _level;


    public virtual void ShowInfo(GameObject uiWindow, GameObject statPrefab)
    {
        Debug.Log("ItemCell.ShowInfo()");
    }
}
