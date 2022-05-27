using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Window : MonoBehaviour
{
    public IItem elementLink;
    public InventoryCellView cellLink;
    public GameObject statPrefab;
    public Image Icon;
    public AllPrefabsData allPrefabsData;
    public IconData iconData;

    private void Start()
    {
        Icon.sprite = iconData.Icons[elementLink.Icon];
        elementLink.ShowInfo(gameObject, statPrefab);
    }
    public void CloseWindow()
    {
        cellLink.UpdateCell();
        Destroy(gameObject);
    }
    public void LevelUpItem()
    {
        elementLink.Level++;
        elementLink.ItemInit(allPrefabsData);
        cellLink.level++;
        UpdateItemStats();
    }

    private void UpdateItemStats()
    {
        foreach (Transform i in elementLink.StatsHolder)
        {
            Destroy(i.gameObject);
        }
        elementLink.ShowInfo(gameObject, statPrefab);
    }
}
