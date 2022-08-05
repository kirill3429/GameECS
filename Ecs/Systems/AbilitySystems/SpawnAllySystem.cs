using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class SpawnAllySystem : IEcsRunSystem
    {
        readonly SceneData sceneData;
        readonly EcsWorld world = null;
        readonly EcsFilter<SpawnAllyAbility> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var spawnInfo = ref filter.Get1(i);

                for (int j = 0; j < spawnInfo.learnedLevel; j++)
                {
                    EcsEntity spawn = world.NewEntity();
                    spawn.Get<AllySpawnEvent>().prefabNumber = spawnInfo.prefabNumber;
                    spawn.Get<AllySpawnEvent>().spawnPoint = sceneData.playerTransform.position;
                }

                filter.GetEntity(i).Destroy();
            }
        }
    }
}