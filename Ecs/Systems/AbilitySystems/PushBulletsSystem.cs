using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class PushBulletsSystem : IEcsRunSystem
    {
        readonly EcsWorld _world = null;
        readonly EcsFilter<Push>.Exclude<Weapon> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var push = ref filter.Get1(i);
                ref var targetEntity = ref filter.GetEntity(i);
                ref var movable = ref targetEntity.Get<Movable>();
                ref var rigidBody = ref targetEntity.Get<RigidBodyComponent>().rigidBody;

                if (Time.time - push.pushStartTime < 0.5f)
                {
                    movable.moveSpeed = -(push.level * push.learnedLevel * 0.05f * movable.defaultMoveSpeed)/rigidBody.mass;

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