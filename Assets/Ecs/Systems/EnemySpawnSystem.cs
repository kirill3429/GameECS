using UnityEngine;
using Leopotam.Ecs;

namespace Client
{
    sealed class EnemySpawnSystem : IEcsRunSystem
    {
        readonly StaticPlayerData staticPlayerData;
        readonly AllPrefabsData prefabsData;
        readonly EcsWorld world = null;
        readonly EcsFilter<EnemySpawnEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var eventInfo = ref filter.Get1(i);
                EcsEntity enemyEntity = world.NewEntity();
                //ref var health = ref enemyEntity.Get<Health>();
                //ref var input = ref enemyEntity.Get<InputHandlerComponent>();
                ref var objectLink = ref enemyEntity.Get<ObjectLink>();
                //ref var equip = ref enemyEntity.Get<Equipment>();
                //ref var name = ref enemyEntity.Get<Name>();
                //ref var move = ref enemyEntity.Get<Movable>();
                //ref var animator = ref enemyEntity.Get<AnimatorComponent>();
                //ref var enemyTag = ref enemyEntity.Get<EnemyTag>();

                ref var radius = ref staticPlayerData.enemySpawnRadius;
                float x0 = eventInfo.playerTransform.position.x;
                float y0 = eventInfo.playerTransform.position.y;

                Vector3 spawnPoint = new Vector3();
                Quaternion rotationSpawn = new Quaternion();

                float alpha = Random.Range(0, 360);

                spawnPoint.x = x0 + (radius * Mathf.Cos(ToRadians(alpha)));
                spawnPoint.z = y0 + (radius * Mathf.Sin(ToRadians(alpha)));
                spawnPoint.y = 0;

                objectLink.Object = GameObject.Instantiate(prefabsData.enemiesPrefabs[eventInfo.prefabNumber], spawnPoint, rotationSpawn);
            }
        }
        private static float ToRadians(float angle)
        {
            return angle * Mathf.PI / 180;
        }

    }
}

