using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class WaveManagerSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly StaticPlayerData staticPlayerData;
        readonly EcsWorld world = null;
        readonly EcsFilter<Spawner> filter; 

        public void Run()
        {
            foreach (var i in filter)
            {
                ref var spawner = ref filter.Get1(i);

                if (spawner.isWork == false && spawner.currentEnemies == 0)
                {
                    if (Time.time - spawner.endWaveTime > 10)
                    {
                        runtimeData.waveNumber++;
                        filter.GetEntity(i).Get<NeedToFill>();
                        spawner.isWork = true;
                        Debug.Log("Началасть следущая волна");
                    }
                    
                    // открыть меню выбора навыков
                }
                
            }

        }
    }
}



