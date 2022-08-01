using TMPro;
using UnityEngine;
using UnityEngine.UI;
public class SkillDiscriptionPanel : MonoBehaviour
{
    public int Id;
    public TextMeshProUGUI LevelUI;
    public TextMeshProUGUI LevelUIText;
    public TextMeshProUGUI SkillPointsUI;
    public TextMeshProUGUI NameUI;
    public TextMeshProUGUI AbilityDescriptionUI;
    public TextMeshProUGUI DamageDescriptionUI;
    public TextMeshProUGUI CostUI;
    public TextMeshProUGUI CostUIText;
    public Image IconUI;
    public int Cost;
    public int Score;
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
        LevelUIText = texts[1];
        NameUI = texts[2];
        AbilityDescriptionUI = texts[3];
        DamageDescriptionUI = texts[4];
        CostUI = texts[5];
        CostUIText = texts[6];
        Score = GetScore();
        UpdateScore();

    }
    public void ShowAbilityDiscription(SkillProperties skillProperties)
    {
        _skillProperties = skillProperties;
        IconUI.sprite = _skillProperties.Icon;
        LevelUI.text = _skillProperties.Level.ToString();
        NameUI.text = abilityData.abilityPrefabs[_skillProperties.Id].Name;
        AbilityDescriptionUI.text = abilityData.abilityPrefabs[_skillProperties.Id].Description;
        DamageDescriptionUI.text = abilityData.abilityPrefabs[_skillProperties.Id].DamageDescription;
        Cost = (int)(_skillProperties.Cost * (1 + (_skillProperties.Level * 0.4f)));
        CostUI.text = Cost.ToString();
        CostUIText.text = "cost";
        LevelUIText.text = "level";

        foreach (Transform t in transform)
        {
            if (t.TryGetComponent(out LocalizedText text))
            {
                text.LocalizeAgain();
            }
        }
    }



    private void LevelUpButtonInit()
    {
        LevelUpButton = gameObject.GetComponentInChildren<Button>();
        LevelUpButton.onClick.AddListener(LevelUpSkill);
    }


    private int GetScore()
    {
        return DataInterface.GetPlayerScore();
    }
    private void SetScore(int skillPoints)
    {
        DataInterface.SetPlayerScore(skillPoints);
        SkillPointsUI.text = skillPoints.ToString();
    }

    public void LevelUpSkill()
    {
        if (Score >= Cost && LevelUI.text != "5")
        {
            if (_skillProperties != null)
            {
                LearnSkill();
                LevelUI.text = _skillProperties.Level.ToString();
                Score = Score - Cost;
                UpdateCost();
                SetScore(Score);
                UpdateScore();
            }
        }
    }

    private void LearnSkill()
    {
        _skillProperties.Level++;
        _skillProperties.Learned = true;
        _skillProperties.LearnedView();
    }

    private void UpdateCost()
    {
        Cost = (int)(_skillProperties.Cost * (1 + (_skillProperties.Level * 0.4f)));
        CostUI.text = Cost.ToString();
    }
    private void UpdateScore()
    {
        SkillPointsUI.text = Score.ToString();
    }
}