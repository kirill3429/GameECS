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

                if (Time.time - ice.iceStartTime < 10)
                {
                    targetEntity.Get<Movable>().moveSpeed = 2; // изменить на процент от baseMoveSpeed

                }
                else
                {
                    targetEntity.Get<Movable>().moveSpeed = 5;
                    targetEntity.Del<Ice>();
                }

            }
        }
    }
}