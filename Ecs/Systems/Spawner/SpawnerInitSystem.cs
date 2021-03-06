using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class SpawnerInitSystem : IEcsInitSystem
    {
        readonly StaticPlayerData staticData;
        readonly EcsWorld world = null;

        public void Init()
        {
            EcsEntity spawnEntity = world.NewEntity();
            ref var spawner = ref spawnEntity.Get<Spawner>();
            spawner.maxEnemies = staticData.maxEnemies;
            spawner.currentEnemies = 0;
            spawner.isWork = true;
            spawner.playerTransform = GameObject.FindGameObjectWithTag("Player").transform;
            spawnEntity.Get<NeedToFill>();
        }
    }
}



