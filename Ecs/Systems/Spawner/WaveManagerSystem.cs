using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class WaveManagerSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly UI ui;
        readonly StaticPlayerData staticPlayerData;
        readonly EcsWorld world = null;
        readonly EcsFilter<Spawner> filter = null;

        public void Run()
        {
            foreach (var i in filter)
            {
                ref var spawner = ref filter.Get1(i);

                if (spawner.isWork == false && spawner.currentEnemies == 0)
                {
                    if (Time.time - spawner.endWaveTime > staticPlayerData.timeBetweenWaves)
                    {
                        runtimeData.waveNumber++;
                        ui.gameScreen.wave.text = (runtimeData.waveNumber + 1).ToString();
                        filter.GetEntity(i).Get<NeedToFill>();
                        spawner.isWork = true;
                        Debug.Log("Началасть следущая волна");
                    }
                  

                }

            }

        }
    }
}



