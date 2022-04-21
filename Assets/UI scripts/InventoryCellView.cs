using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class InventoryCellView : MonoBehaviour , IPointerClickHandler
{
    public IItem elementLink;
    public int icon;
    public int background;
    public int level;
    public int prefabNumber;
    public string type;
    
    public GameObject uiWindow;
    public Transform windowHolder;
    GameObject window;


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
        window = Instantiate(uiWindow, windowHolder);
        window.GetComponent<Window>().elementLink = elementLink;
        window.GetComponent<Window>().cellLink = this;
    }


}
