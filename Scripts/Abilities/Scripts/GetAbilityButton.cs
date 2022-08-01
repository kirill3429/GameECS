
using Client;
using Leopotam.Ecs;
using UnityEngine;
using UnityEngine.UI;
public class GetAbilityButton : MonoBehaviour
{
    public string abilityString;
    public int abilityLevel;

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
        EcsEntity eventEntity = startUp._world.NewEntity();
        eventEntity.Get<AddAbilityEvent>().abilityName = abilityString;
        eventEntity.Get<AddAbilityEvent>().abilityLevel = abilityLevel;
    }
    public void CloseWindow()
    {
        startUp.runtimeData.gameState = GameState.Running;
        startUp._world.NewEntity().Get<PauseEvent>();
        GameObject.FindGameObjectWithTag("AbilityWindow").SetActive(false);
    }
}
