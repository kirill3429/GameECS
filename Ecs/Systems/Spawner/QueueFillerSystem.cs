using Leopotam.Ecs;
using System.Collections.Generic;
using UnityEngine;
namespace Client
{
    sealed class QueueFillerSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly AllPrefabsData allPrefabsData;
        readonly EcsWorld world = null;
        readonly EcsFilter<Spawner, NeedToFill> filter = null;

        public void Run()
        {
            foreach (var i in filter)
            {
                
                ref var spawner = ref filter.Get1(i);
                spawner.creepsQueue = new Queue<int>();

                if (runtimeData.waveNumber % 10 != 0 || runtimeData.waveNumber == 0)
                {
                    int creep = Random.Range(0, allPrefabsData.enemiesPrefabs.Length);
                    for (int j = 0; j < 50; j++)
                    {
                        spawner.creepsQueue.Enqueue(creep);
                    }
                }
                else
                {
                    spawner.creepsQueue.Enqueue(Random.Range(0, allPrefabsData.bossPrefabs.Length));
                }
                
                Debug.Log("Очередь заполнена");
                filter.GetEntity(i).Del<NeedToFill>();
                

            }

        }
    }
}



