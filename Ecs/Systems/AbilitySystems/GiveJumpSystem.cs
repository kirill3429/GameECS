using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class GiveJumpSystem : IEcsRunSystem
    {
        readonly EcsWorld _world = null;
        readonly EcsFilter<Jump> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var jump = ref filter.Get1(i);
                ref var targetEntity = ref filter.GetEntity(i);
                ref var movable = ref targetEntity.Get<Movable>();

                if (Time.time - jump.jumpStartTime < 0.5f)
                {
                    movable.moveSpeed = jump.level * 0.05f * movable.defaultMoveSpeed;

                }
                else
                {
                    movable.moveSpeed = movable.defaultMoveSpeed;
                    targetEntity.Del<Push>();
                }
            }
        }
    }
}