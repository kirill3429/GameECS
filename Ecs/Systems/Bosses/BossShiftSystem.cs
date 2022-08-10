using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class BossShiftSystem : IEcsRunSystem
    {
        readonly EcsWorld _world = null;
        readonly EcsFilter<EnemyTag, BossShiftTag, Movable, RigidBodyComponent, TransformComponent> filter = null;


        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var bossEntity = ref filter.GetEntity(i);
                ref var skillStats = ref filter.Get2(i);
                ref var movable = ref filter.Get3(i);
                ref var rigidBody = ref filter.Get4(i).rigidBody;
                ref var transform = ref filter.Get5(i).transform;

                if (Time.time - skillStats.lastShift > skillStats.cooldown)
                {
                    skillStats.dirFlag = !skillStats.dirFlag;
                    skillStats.lastShift = Time.time;
                }

                if (skillStats.dirFlag)
                {
                    rigidBody.velocity += transform.right * 10;
                }
                else
                {
                    rigidBody.velocity += -transform.right * 10;
                }

               
            }
        }
    }
}