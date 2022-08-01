using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
public class SkillProperties : MonoBehaviour, IPointerClickHandler
{
    public int Id;
    public int Level;
    public bool Learned;
    public Sprite Icon;
    public int Cost;

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