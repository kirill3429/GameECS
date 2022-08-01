using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Agava.YandexGames;


public class AbilityWindow : MonoBehaviour
{
    [SerializeField] private GameObject abilityView;
    [SerializeField] private AudioSource music;
    [SerializeField] private AbilityData abilityPrefabs;

    private float soundVolume;
    private List<AbilityAsset> avaibleAbilities = new List<AbilityAsset>();



    private void Awake()
    {

        string learnedSkillsString = DataInterface.GetLearnedSkills();


        Dictionary<int, int> learnedSkillsDictionary = ConvertSkillsStringToDictionary(learnedSkillsString);

        foreach (var skill in learnedSkillsDictionary)
        {
            var ability = abilityPrefabs.abilityPrefabs[skill.Key];
            ability.Level = skill.Value;
            avaibleAbilities.Add(ability);
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
        for (int i = 0; i < 4; i++)
        {
            int abilityNum = Random.Range(0, avaibleAbilities.Count);
            GameObject view = Instantiate(abilityView, gameObject.transform);
            view.GetComponent<GetAbilityButton>().abilityString = avaibleAbilities[abilityNum].Name;
            view.GetComponent<GetAbilityButton>().abilityLevel = avaibleAbilities[abilityNum].Level;

            view.GetComponentInChildren<TMP_Text>().text = avaibleAbilities[abilityNum].Name;
            view.GetComponentsInChildren<TMP_Text>()[1].text = avaibleAbilities[abilityNum].Description;
            view.GetComponentsInChildren<TMP_Text>()[2].text = avaibleAbilities[abilityNum].DamageDescription;
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

    public void Refresh()
    {
        gameObject.SetActive(false);
        gameObject.SetActive(true);
        SoundOff();

    }
    private void SoundOn()
    {
        music.volume = soundVolume;
    }
    private void SoundOff()
    {
        soundVolume = music.volume;
        music.volume = 0;
        if (YandexGamesSdk.IsInitialized)
        VideoAd.Show(null, null, SoundOn);
    }
}
