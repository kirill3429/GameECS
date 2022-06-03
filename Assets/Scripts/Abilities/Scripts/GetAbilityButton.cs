
using UnityEngine;
using UnityEngine.UI;
using Client;
using Leopotam.Ecs;
public class GetAbilityButton : MonoBehaviour
{
    public string abilityString;

    private EcsStartup startUp;

    private void Awake()
    {
        Button button = GetComponent<Button>();
        button.onClick.AddListener(AddAbility);
        button.onClick.AddListener(CloseWindow);
    }

    public void AddAbility()
    {
        startUp = GameObject.FindGameObjectWithTag("EcsStartUp").GetComponent<EcsStartup>();
        startUp._world.NewEntity().Get<AddAbilityEvent>().abilityName = abilityString;
    }
    public void CloseWindow()
    {
        startUp.runtimeData.gameState = GameState.Running;
        startUp._world.NewEntity().Get<PauseEvent>();
        GameObject.FindGameObjectWithTag("AbilityWindow").SetActive(false);
    }
}
