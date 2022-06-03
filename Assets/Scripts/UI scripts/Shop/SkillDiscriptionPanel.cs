using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using TMPro;
public class SkillDiscriptionPanel : MonoBehaviour
{
    public int Id;
    public TextMeshProUGUI LevelUI;
    public TextMeshProUGUI NameUI;
    public TextMeshProUGUI AbilityDescriptionUI;
    public Sprite IconUI;
    public int DefaultCost;
    private SkillProperties _skillProperties;
    private Button LevelUpButton;

    [SerializeField] private AbilityData abilityData;

    private void Start()
    {
        DiscriptionUIElementsInit();
        //LevelUpButtonInit();
    }

    private void DiscriptionUIElementsInit()
    {
        TextMeshProUGUI[] texts = gameObject.GetComponentsInChildren<TextMeshProUGUI>();
        IconUI = gameObject.GetComponentsInChildren<Image>()[2].sprite;
        LevelUI = texts[0];
        NameUI = texts[2];
        AbilityDescriptionUI = texts[3];
    }
    public void ShowAbilityDiscription(SkillProperties skillProperties)
    {
        _skillProperties = skillProperties;

        IconUI = _skillProperties.Icon;
        LevelUI.text = _skillProperties.Level.ToString();
        NameUI.text = abilityData.abilityPrefabs[_skillProperties.Id].Description;
        AbilityDescriptionUI.text = abilityData.abilityPrefabs[_skillProperties.Id].AdvancedDescription;
    }



    private void LevelUpButtonInit()
    {
        LevelUpButton = gameObject.GetComponentInChildren<Button>();
        LevelUpButton.onClick.AddListener(LevelUpSkill);
    }

    public void LevelUpSkill()
    {
        if (_skillProperties != null)
        _skillProperties.Level++;
    }
}