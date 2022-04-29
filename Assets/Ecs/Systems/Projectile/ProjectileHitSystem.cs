using LeoEcsPhysics;
using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class ProjectileHitSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<HitEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var eventInfo = ref filter.Get1(i);
                ref var targetHP = ref eventInfo.hittedEntity.Get<Health>();
                targetHP.currentHealth -= eventInfo.bulletEntity.Get<Damage>().value;

                GameObject hitEffect = GameObject.Instantiate(eventInfo.hittedEntity.Get<HitEffect>().hitPrefab, eventInfo.hittedObject.transform.position, Quaternion.identity);
                hitEffect.transform.forward = eventInfo.hitDirection;

                eventInfo.bulletEntity.Get<DeathEvent>();

                if (targetHP.currentHealth < 0)
                {
                    eventInfo.hittedEntity.Get<DeathEvent>();
                }
            }
        }

    }
}

