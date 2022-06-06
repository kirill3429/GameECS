using System.Collections.Generic;
using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class EnemySpawnEventGenerator : IEcsRunSystem
    {

        readonly EcsWorld world = null;
        readonly EcsFilter<Spawner> filter = null;


        public void Run()
        {
            foreach (var i in filter)
            {
                ref var spawner = ref filter.Get1(i);

                if (spawner.isWork == true)
                {
                    if (spawner.creepsQueue.Count == 0 && spawner.currentEnemies == 0)
                    {
                        spawner.isWork = false;
                        spawner.endWaveTime = Time.time;
                        world.NewEntity().Get<OpenAbilityWindowEvent>();
                        continue;
                    }

                    if (spawner.currentEnemies < spawner.maxEnemies && spawner.creepsQueue.Count != 0)
                    {
                        int creepToSpawn = spawner.creepsQueue.Dequeue();
                        ref var spawnEvent = ref world.NewEntity().Get<EnemySpawnEvent>();
                        spawnEvent.playerTransform = spawner.playerTransform;
                        spawnEvent.prefabNumber = creepToSpawn;
                    }
                }
            }
            
        }
        
    }
}

