using System;
using System.Collections.Generic;
using System.Text;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShopManager : MonoBehaviour
{
    private Transform shopPanel;
    [SerializeField] private GameObject abilityView;
    [SerializeField] private AbilityData abilityPrefabs;
    private DataInterface dataInterface;

    private void Awake()
    {
        dataInterface = FindObjectOfType<DataInterface>();
        shopPanel = gameObject.transform;
    }

    private void OnEnable()
    {
        GameInit.FirstEnterInit();
        RenderAllSkills();
        LoadLearnedSkills();
        Debug.Log("shop on");
    }

    private void OnDisable()
    {
        SaveLearnedSkills();
        ClearSkillsPanel();
        Debug.Log("shop off");
    }

    #region Load
    private void RenderAllSkills()
    {
        for (int i = 0; i < abilityPrefabs.abilityPrefabs.Length; i++)
        {
            CreateAbilityView(abilityPrefabs.abilityPrefabs[i]);
        }
    }

    private void CreateAbilityView(AbilityAsset prefab)
    {
        GameObject view = Instantiate(abilityView, shopPanel);
        view.GetComponentInChildren<TMP_Text>().text = prefab.Name;
        view.GetComponentsInChildren<Image>()[1].sprite = prefab.Icon;

        view.GetComponent<SkillProperties>().Id = prefab.Id;
        view.GetComponent<SkillProperties>().Icon = prefab.Icon;
        view.GetComponent<SkillProperties>().Cost = prefab.Cost;
    }

    private void LoadLearnedSkills()
    {
        string learnedSkillsString = DataInterface.GetLearnedSkills();

        Dictionary<int, int> learnedSkillsDictionary = ConvertSkillsStringToDictionary(learnedSkillsString);
        ApplySkillPropertiesToSkillsViews(learnedSkillsDictionary);
    }


    private Dictionary<int, int> ConvertSkillsStringToDictionary(string stringToConvert)
    {

        string[] stringSkillArray = stringToConvert.Split("-");

        Dictionary<int, int> learnedSkills = new Dictionary<int, int>();

        foreach (string skill in stringSkillArray)
        {
            if (skill != "")
            {
                string[] intSkill = skill.Split(":");

                learnedSkills.Add(Convert.ToInt32(intSkill[0]), Convert.ToInt32(intSkill[1]));
            }
        }
        return learnedSkills;
    }
    private void ApplySkillPropertiesToSkillsViews(Dictionary<int, int> skillsDictionary)
    {
        foreach (Transform skill in gameObject.transform)
        {
            ApplyProperites(skill, skillsDictionary);
        }
    }
    private void ApplyProperites(Transform skill, Dictionary<int, int> skillsDictionary)
    {
        SkillProperties skillProperties = skill.GetComponent<SkillProperties>();
        if (skillsDictionary.ContainsKey(skillProperties.Id))
        {
            skillProperties.Learned = true;
            skillProperties.Level = skillsDictionary[skillProperties.Id];
            skillProperties.LearnedView();
        }

    }


    #endregion

    #region Save

    private void SaveLearnedSkills()
    {
        string learnedSkillString = BuildStringOfLearnedSkills();
        DataInterface.SaveLearnedSkills(learnedSkillString);
    }

    private string BuildStringOfLearnedSkills()
    {
        StringBuilder stringOfLearnedSkills = new StringBuilder();

        foreach (Transform skill in shopPanel)
        {
            SkillProperties skillProperties = skill.GetComponent<SkillProperties>();

            if (skillProperties.Learned)
            {
                AddSkillToSaveString(stringOfLearnedSkills, skillProperties);
            }
        }
        Debug.Log(stringOfLearnedSkills.ToString());
        return stringOfLearnedSkills.ToString();
    }

    private void AddSkillToSaveString(StringBuilder stringOfLearnedSkills, SkillProperties skillProperties)
    {
        stringOfLearnedSkills.Append("-" + skillProperties.Id);
        stringOfLearnedSkills.Append(":" + skillProperties.Level);
    }


    #endregion



    private void ClearSkillsPanel()
    {
        foreach (Transform i in shopPanel)
        {
            Destroy(i.gameObject);
        }
    }
}
