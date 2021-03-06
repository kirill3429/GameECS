using Leopotam.Ecs;
using System.Collections.Generic;
using UnityEngine;
namespace Client
{
    sealed class QueueFillerSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly AllWaveData allWaveData;
        readonly EcsWorld world = null;
        readonly EcsFilter<Spawner, NeedToFill> filter = null; 

        public void Run()
        {
            foreach (var i in filter)
            {
                if ( allWaveData.waves.Count > runtimeData.waveNumber)
                {
                    ref var spawner = ref filter.Get1(i);
                    spawner.creepsQueue = new Queue<int>();

                    foreach (var k in allWaveData.waves[runtimeData.waveNumber].waveInfo)
                    {
                        for (int j = 0; j < k.Value; j++)
                        {
                            spawner.creepsQueue.Enqueue(k.Key);
                        }
                    }
                    Debug.Log("??????? ?????????");
                    filter.GetEntity(i).Del<NeedToFill>();
                }

                else
                {
                    filter.GetEntity(i).Del<NeedToFill>();
                    runtimeData.gameState = GameState.Win;
                    world.NewEntity().Get<WinGame>();
                }
                
            }

        }
    }
}



