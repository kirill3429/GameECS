using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class InventoryCellView : MonoBehaviour , IPointerClickHandler
{
    public int icon;
    public int background;
    public int level;
    public int prefabNumber;
    public string type;
    public IItem elementLink;
    public GameObject uiWindow;
    public GameObject statPrefab;
    public Transform windowHolder;


    private void Start()
    {
        Image backgroundImage = gameObject.GetComponentInChildren<Image>();
        Image Icon = backgroundImage.GetComponentInChildren<Image>();
        TMP_Text levelText = backgroundImage.GetComponentInChildren<TextMeshPro>();
        Debug.Log("Инициализация");
        windowHolder = GameObject.FindGameObjectWithTag("WindowHolder").transform;
        // Инициализация из scriptable object префабов
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        GameObject window = Instantiate(uiWindow, windowHolder);
        
        elementLink.ShowInfo(window, statPrefab);
    }
}
