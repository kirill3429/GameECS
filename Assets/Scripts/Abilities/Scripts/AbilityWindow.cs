using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class AbilityWindow : MonoBehaviour
{
    [SerializeField] private GameObject abilityView;
    [SerializeField] private AbilityAsset[] abilityPrefabs;
    private void OnEnable()
    {
        for (int i = 0; i < 4; i++)
        {
            int abilityNum = Random.Range(0, abilityPrefabs.Length);
            GameObject view = Instantiate(abilityView, gameObject.transform);
            view.GetComponent<GetAbilityButton>().abilityString = abilityPrefabs[abilityNum].Name;
            view.GetComponentInChildren<TMP_Text>().text = abilityPrefabs[abilityNum].Description;
            //view.GetComponentInChildren<TMP_Text>().text = abilityPrefabs[abilityNum].AdvancedDescription;  TODO - добавить текстовое поле
            view.GetComponentsInChildren<Image>()[1].sprite = abilityPrefabs[abilityNum].Icon;
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
