using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    public sealed class PauseSystem : IEcsRunSystem
    {
        readonly UI ui;
        readonly RuntimeData runtimeData;
        readonly EcsWorld world = null;
        readonly EcsFilter<PauseEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                if (runtimeData.gameState == GameState.Running || runtimeData.gameState == GameState.Menu)
                {
                    ShowPauseBackground();
                    ui.menuScreen.Show(runtimeData.isPaused);
                    if (runtimeData.gameState == GameState.Running)
                    {
                        runtimeData.gameState = GameState.Menu;
                    }
                    else
                    {
                        runtimeData.gameState = GameState.Running;
                    }
                }
                else if (runtimeData.gameState == GameState.GameOver)
                {
                    ui.deathScreen.Show();
                    ShowPauseBackground();
                }
                else if (runtimeData.gameState == GameState.AbilityWindow)
                {
                    ui.abilityScreen.Show();
                    runtimeData.gameState = GameState.Waiting;
                    ShowPauseBackground();
                }
                else if (runtimeData.gameState == GameState.Win)
                {
                    ui.winScreen.Show();
                    runtimeData.gameState = GameState.Waiting;
                    ShowPauseBackground();
                }
                else if (runtimeData.gameState == GameState.Waiting)
                {

                }


                filter.GetEntity(i).Destroy();
            }
        }

        private void ShowPauseBackground()
        {
            runtimeData.isPaused = !runtimeData.isPaused;
            Time.timeScale = runtimeData.isPaused ? 0f : 1f;
            ui.pauseBackground.SetActive(runtimeData.isPaused);
            Debug.Log(runtimeData.gameState);
        }
    }
}



