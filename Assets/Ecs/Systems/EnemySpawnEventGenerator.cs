using UnityEngine;
using System.Collections.Generic;
using Leopotam.Ecs;

namespace Client
{
    sealed class EnemySpawnEventGenerator : IEcsRunSystem
    {
        readonly AllWaveData allWaveData;
        private RuntimeData runtimeData;
        readonly EcsWorld world = null;
        readonly EcsFilter<Spawner> filter = null;

        private List<int> prefabNumbers;
        
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var spawner = ref filter.Get1(i);

                if (spawner.isWork && spawner.currentEnemies < spawner.maxEnemies)
                {
                    WaveData currentWave = allWaveData.waves[runtimeData.waveNumber];
                    
                    foreach (var j in currentWave.waveInfo)
                    {
                        prefabNumbers.Add(j.Key);
                    }
                    foreach (int j in prefabNumbers)
                    {
                        for (int k = 0; k < currentWave.waveInfo[j]; k++)
                        {
                            ref var spawnEvent = ref world.NewEntity().Get<EnemySpawnEvent>();
                            spawnEvent.playerTransform = spawner.playerTransform;
                            spawnEvent.prefabNumber = j;
                            runtimeData.spawnedCreeps[j]++;
                            spawner.currentEnemies++;
                        }
                    }
                    

                }
            }
        }

    }
}

