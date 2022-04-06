using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class SpawnerInitSystem : IEcsInitSystem
    {
        RuntimeData runtimeData;
        readonly StaticPlayerData staticData;
        readonly EcsWorld world = null;

        public void Init()
        {
            EcsEntity spawnEntity = world.NewEntity();
            ref var spawner = ref spawnEntity.Get<Spawner>();
            spawner.maxEnemies = staticData.maxEnemies;
            spawner.currentEnemies = 0;
            runtimeData.waveNumber = 0;
            spawner.isWork = false;
            spawner.playerTransform = GameObject.FindGameObjectWithTag("Player").transform;
        }
    }
}



