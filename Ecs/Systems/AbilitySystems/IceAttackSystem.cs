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
                ref var movable = ref targetEntity.Get<Movable>();

                if (Time.time - ice.iceStartTime < ice.level)
                {
                    movable.moveSpeed = movable.defaultMoveSpeed - ice.level * 0.05f * movable.defaultMoveSpeed;

                }
                else
                {
                    movable.moveSpeed = movable.defaultMoveSpeed;
                    targetEntity.Del<Ice>();
                }

            }
        }
    }
}