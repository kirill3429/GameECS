using UnityEngine;
using System.Linq;
using UnityEngine.UI;
using TMPro;
public class SkillDiscriptionPanel : MonoBehaviour
{
    public int Id;
    public TextMeshProUGUI LevelUI;
    public TextMeshProUGUI SkillPointsUI;
    public TextMeshProUGUI NameUI;
    public TextMeshProUGUI AbilityDescriptionUI;
    public Image IconUI;
    public int DefaultCost;
    private SkillProperties _skillProperties;
    private Button LevelUpButton;

    [SerializeField] private AbilityData abilityData;

    private void Start()
    {
        DiscriptionUIElementsInit();
    }

    private void DiscriptionUIElementsInit()
    {
        TextMeshProUGUI[] texts = gameObject.GetComponentsInChildren<TextMeshProUGUI>();
        IconUI = gameObject.GetComponentsInChildren<Image>()[2];
        LevelUI = texts[0];
        NameUI = texts[2];
        AbilityDescriptionUI = texts[3];
        SkillPointsUI = texts[5];
        SetSkillPoints(2);
        
    }
    public void ShowAbilityDiscription(SkillProperties skillProperties)
    {
        _skillProperties = skillProperties;

        IconUI.sprite = _skillProperties.Icon;
        LevelUI.text = _skillProperties.Level.ToString();
        NameUI.text = abilityData.abilityPrefabs[_skillProperties.Id].Description;
        AbilityDescriptionUI.text = abilityData.abilityPrefabs[_skillProperties.Id].AdvancedDescription;
    }



    private void LevelUpButtonInit()
    {
        LevelUpButton = gameObject.GetComponentInChildren<Button>();
        LevelUpButton.onClick.AddListener(LevelUpSkill);
    }


    private int GetSkillPoints()
    {
        return PlayerPrefs.GetInt("SkillPoints");
    }
    private void SetSkillPoints(int skillPoints)
    {
        PlayerPrefs.SetInt("SkillPoints", skillPoints);
        SkillPointsUI.text = skillPoints.ToString();
    }

    public void LevelUpSkill()
    {
        int skillPoints = GetSkillPoints();
        if (skillPoints > 0)
        {
            if (_skillProperties != null)
            {
                _skillProperties.Level++;
                LevelUI.text = _skillProperties.Level.ToString();
                skillPoints--;
                SetSkillPoints(skillPoints);
            }
        } 
    }
}