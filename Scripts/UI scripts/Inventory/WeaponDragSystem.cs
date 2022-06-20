using UnityEngine;
using UnityEngine.EventSystems;


public class WeaponDragSystem : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    InventoryManager inventoryManager;
    Transform startDragTransform;
    Transform inventoryTransform;
    RectTransform rectInventory;
    RectTransform rectWeapon;
    RectTransform rectThisCell;



    private void Awake()
    {
        inventoryTransform = GameObject.FindGameObjectWithTag("InventoryContent").transform;
        inventoryManager = inventoryTransform.GetComponent<InventoryManager>();
        rectInventory = (RectTransform)inventoryTransform.transform;
        rectWeapon = (RectTransform)inventoryManager.weaponContainer.transform;
        rectThisCell = (RectTransform)transform;
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        startDragTransform = transform.parent;
        transform.SetParent(GameObject.FindGameObjectWithTag("ArsenalContent").transform);
    }

    public void OnDrag(PointerEventData eventData)
    {
        gameObject.transform.position = Camera.main.ScreenToWorldPoint(Input.mousePosition) + Vector3.forward * 8;
    }



    public void OnEndDrag(PointerEventData eventData)
    {

        if (ElementDraggedInto(rectThisCell.position, rectInventory))
        {
            transform.SetParent(inventoryTransform);
        }

        else if (ElementDraggedInto(rectThisCell.position, rectWeapon)) 
        {
            if (inventoryManager.weaponContainer.childCount == 0)
            {
                AttachToElementSlot(inventoryManager.weaponContainer);
            }
            else if (inventoryManager.weaponContainer.childCount > 0)
            {
                inventoryManager.weaponContainer.GetChild(0).SetParent(inventoryTransform);
                AttachToElementSlot(inventoryManager.weaponContainer);
            }

        }
        else
        {
            AttachToElementSlot(startDragTransform);
        }
    }

    private bool ElementDraggedInto(Vector2 Element, RectTransform Container)
    {
        return RectTransformUtility.RectangleContainsScreenPoint(Container, Element);
    }
    private void AttachToElementSlot(Transform panel)
    {
        transform.SetParent(panel);
        transform.position = panel.position;
    }
}
