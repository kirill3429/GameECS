using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;

public class InventoryCellView : MonoBehaviour , IPointerClickHandler, IDragHandler, IBeginDragHandler, IEndDragHandler
{
    public AllPrefabsData allPrefabsData;

    public IItem elementLink;
    public int icon;
    public int background;
    public int level;
    public int prefabNumber;
    public string type;

    public IconData iconData;

    private Inventory inventory;
    private Transform arsenalContent;

    GameObject[] players;

    private Transform startPos;
    public GameObject uiWindow;
    public Transform windowHolder;
    GameObject window;


    private void Start()
    {
        
        inventory = GameObject.FindGameObjectWithTag("InventoryScriptHolder").GetComponent<Inventory>();
        UpdateCell();
        arsenalContent = inventory.arsenalContent;
        players = GameObject.FindGameObjectsWithTag("Player");
        PlayerUpdate(transform.parent);

    }

    public void UpdateCell()
    {
        Image backgroundImage = gameObject.GetComponentsInChildren<Image>()[1];
        backgroundImage.sprite = iconData.Icons[icon];


        TMP_Text levelText = backgroundImage.GetComponentInChildren<TMP_Text>();
        levelText.text = level.ToString() + " уровень";
        Debug.Log("Инициализация");
        inventory.SaveInventory();
        inventory.SaveActiveWeapon();
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (eventData.dragging == false)
        {
            window = Instantiate(uiWindow, inventory.transform);
            window.GetComponent<Window>().elementLink = elementLink;
            window.GetComponent<Window>().cellLink = this;
        }
        
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        startPos = transform.parent;
        transform.SetParent(arsenalContent);
    }

    public void OnDrag(PointerEventData eventData)
    {
        gameObject.transform.position = Camera.main.ScreenToWorldPoint(Input.mousePosition) + Vector3.forward * 8;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        RectTransform rectInventory = (RectTransform)inventory.transform;
        RectTransform rectWeapon = (RectTransform)inventory.weaponContainer.transform;
        RectTransform rectCell = (RectTransform)gameObject.transform;

        if (RectTransformUtility.RectangleContainsScreenPoint(rectInventory, rectCell.position))
        {
            transform.SetParent(inventory.inventoryContent);

        }
        else if (RectTransformUtility.RectangleContainsScreenPoint(rectWeapon, rectCell.position))
        {
            if (inventory.weaponContainer.childCount == 0)
            {
                transform.SetParent(inventory.weaponContainer);
                transform.position = inventory.weaponContainer.position;
            }
            else if (inventory.weaponContainer.childCount > 0)
            {
                inventory.weaponContainer.GetChild(0).SetParent(inventory.inventoryContent);

                transform.SetParent(inventory.weaponContainer);
                transform.position = inventory.weaponContainer.position;
            }
            
        }
        else
        {
            transform.SetParent(inventory.inventoryContent);
        }
        inventory.SaveInventory();
        inventory.SaveActiveWeapon();
        PlayerUpdate(transform.parent);
        
    }

    public void PlayerUpdate(Transform dragEnd)
    {
        
        
        foreach (GameObject player in players)
        {
            Transform weaponHolder = player.GetComponent<WeaponHolder>().weaponTransform;

            if (dragEnd == inventory.weaponContainer)
            {
                if (weaponHolder.childCount > 0)
                {
                    Destroy(weaponHolder.GetChild(0).gameObject);
                }
                Debug.Log("WeaponIsChanged");
                GameObject weapon = Instantiate(allPrefabsData.weaponPrefabs[prefabNumber], weaponHolder);
                weapon.transform.localScale = new Vector3(1,1,1);
            }
            else if (dragEnd == inventory.inventoryContent && startPos == inventory.weaponContainer)
            {
                Destroy(weaponHolder.GetChild(0).gameObject);
            }

        }
    }
}
