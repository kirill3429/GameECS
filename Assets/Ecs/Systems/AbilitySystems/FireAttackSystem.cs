using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class FireAttackSystem : IEcsRunSystem
    {

        readonly EcsWorld _world = null;
        readonly EcsFilter<Fire, EnemyTag> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var fire = ref filter.Get1(i);
                ref var enemy = ref filter.Get2(i);

                if (Time.time - fire.burningStartTime < 20)
                {
                    if (Time.time - fire.lastDamageTime > 3)
                    {
                        filter.GetEntity(i).Get<TakeDamage>().value += fire.level + 1; // damage
                        fire.lastDamageTime = Time.time;
                    }
                }
                else
                {
                    filter.GetEntity(i).Del<Fire>();
                }

            }
        }
    }
}