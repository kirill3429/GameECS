using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class BossCloneSystem : IEcsRunSystem
    {
        readonly EcsWorld _world = null;
        readonly EcsFilter<EnemyTag, BossCloneTag, TransformComponent> filter = null;


        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                
                ref var bossEntity = ref filter.GetEntity(i);
                ref var bossTransform = ref filter.Get3(i).transform;
                ref var skillStats = ref filter.Get2(i);

                if (Time.time - skillStats.lastSpawn > skillStats.cooldown)
                {
                    Vector3 dir = bossEntity.Get<InputHandlerComponent>().movementInput.normalized;
                    for (int j = 0; j < skillStats.quantity; j++)
                    {
                        EcsEntity spawn = _world.NewEntity();
                         
                        spawn.Get<EnemySpawnEvent>().spawnPoint = bossTransform.position + dir;
                        spawn.Get<EnemySpawnEvent>().prefabNumber = skillStats.prefabNumber;
                        spawn.Get<EnemySpawnEvent>().creepType = CreepType.Creep;
                    }

                    skillStats.lastSpawn = Time.time;
                }

               
            }
        }
    }
}