using Client;
using Leopotam.Ecs;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuManager : MonoBehaviour
{
    private EcsStartup startUp;
    private EcsWorld _world;

    void OnEnable()
    {
        startUp = GameObject.FindGameObjectWithTag("EcsStartUp").GetComponent<EcsStartup>();
        _world = startUp._world;
        
    }


    public void ToogleMenu()
    {
        
        _world.NewEntity().Get<PauseEvent>();
        _world.NewEntity().Get<ToogleMenuEvent>();

    }

    public void RestartLevel()
    {
        _world.NewEntity().Get<PauseEvent>();
        SceneManager.LoadScene(1);
    }
    public void ToMainMenu()
    {
        startUp.runtimeData.gameState = GameState.Running;
        DataInterface.AddScore(startUp.runtimeData.scoreInGame);
        _world.NewEntity().Get<PauseEvent>();
        SceneManager.LoadScene(0);
    }
}