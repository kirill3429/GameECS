using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
public class SkillProperties : MonoBehaviour, IPointerClickHandler
{
    public int Id;
    public int Level;
    public bool Learned;
    public Sprite Icon;
    public int DefaultCost;

    private SkillDiscriptionPanel discriptionPanel;

    private void Start()
    {
        Init();
    }

    public void LearnedView()
    {
        gameObject.GetComponent<Image>().color = Color.green;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        discriptionPanel.ShowAbilityDiscription(this);
    }

    private void Init()
    {
        discriptionPanel = GameObject.FindGameObjectWithTag("DiscriptionPanel").GetComponent<SkillDiscriptionPanel>();
    }
}