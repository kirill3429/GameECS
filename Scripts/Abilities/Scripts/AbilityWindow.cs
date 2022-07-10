using TMPro;
using UnityEngine;
using System.Collections.Generic;
using System.Text;
using UnityEngine.UI;

public class AbilityWindow : MonoBehaviour
{
    [SerializeField] private GameObject abilityView;
    [SerializeField] private AbilityAsset[] abilityPrefabs;
    public List<AbilityAsset> avaibleAbilities = new List<AbilityAsset>();
    private DataInterface dataInterface;


    private void Awake()
    {
        dataInterface = FindObjectOfType<DataInterface>();
        string learnedSkillsString = dataInterface.GetLearnedSkills();
        
        Dictionary<int, int> learnedSkillsDictionary = ConvertSkillsStringToDictionary(learnedSkillsString);

        Debug.Log(learnedSkillsDictionary.Count);

        foreach (var skill in learnedSkillsDictionary)
        {
            var ability = abilityPrefabs[skill.Key - 1];
            ability.Level = skill.Value;
            avaibleAbilities.Add(ability);
            Debug.Log(skill.Key-1);
            Debug.Log(skill.Value);
        }
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

                learnedSkills.Add(System.Convert.ToInt32(intSkill[0]), System.Convert.ToInt32(intSkill[1]));
            }
        }
        return learnedSkills;
    }

    private void OnEnable()
    {
        Debug.Log(avaibleAbilities.Count);
        for (int i = 0; i < 4; i++)
        {
            int abilityNum = Random.Range(0, avaibleAbilities.Count);
            GameObject view = Instantiate(abilityView, gameObject.transform);
            view.GetComponent<GetAbilityButton>().abilityString = avaibleAbilities[abilityNum].Name;
            view.GetComponent<GetAbilityButton>().abilityLevel = avaibleAbilities[abilityNum].Level;
            view.GetComponentInChildren<TMP_Text>().text = avaibleAbilities[abilityNum].Description;
            //view.GetComponentInChildren<TMP_Text>().text = avaibleAbilities[abilityNum].Level.ToString();
            view.GetComponentsInChildren<Image>()[1].sprite = avaibleAbilities[abilityNum].Icon;
        }
    }
    private void OnDisable()
    {
        foreach (Transform i in gameObject.transform)
        {
            Destroy(i.gameObject);
        }
    }
}
