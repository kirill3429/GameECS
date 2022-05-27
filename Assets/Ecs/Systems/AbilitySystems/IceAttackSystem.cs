using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class IceAttackSystem : IEcsRunSystem
    {
        readonly EcsWorld _world = null;
        readonly EcsFilter<Ice, EnemyTag> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var ice = ref filter.Get1(i);
                ref var targetEntity = ref filter.GetEntity(i);

                if (Time.time - ice.iceStartTime < ice.level)
                {
                    targetEntity.Get<Movable>().moveSpeed = targetEntity.Get<Movable>().defaultMoveSpeed / ice.level;

                }
                else
                {
                    targetEntity.Get<Movable>().moveSpeed = targetEntity.Get<Movable>().defaultMoveSpeed;
                    targetEntity.Del<Ice>();
                }

            }
        }
    }
}