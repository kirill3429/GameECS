using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class MonsterJumpSystem : IEcsRunSystem
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
                float currentTime = Time.time;

                if (currentTime - jump.jumpStartTime > jump.jumpCooldown)
                {
                    movable.moveSpeed = jump.level * 2 + movable.defaultMoveSpeed;
                    jump.jumpStartTime = currentTime;
                }
                
                else if (currentTime - jump.jumpStartTime > 0.5f)
                {
                    movable.moveSpeed = movable.defaultMoveSpeed;
                }
            }
        }
    }
}