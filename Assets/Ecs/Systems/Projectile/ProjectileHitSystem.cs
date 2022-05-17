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
                ref var bulletEntity = ref eventInfo.bulletEntity;
                ref var hittedEntity = ref eventInfo.hittedEntity;

                eventInfo.hittedEntity.Get<TakeDamage>().value += bulletEntity.Get<Damage>().value;

                GameObject hitEffect = GameObject.Instantiate(eventInfo.hittedEntity.Get<HitEffect>().hitPrefab, eventInfo.hittedObject.transform.position, Quaternion.identity);
                hitEffect.transform.forward = eventInfo.hitDirection;

                // Накинуть на врага эффекты с пули

                if (bulletEntity.Has<Fire>())
                {
                    hittedEntity.Replace(new Fire());
                    hittedEntity.Get<Fire>().burningStartTime = Time.time;
                }
                if (bulletEntity.Has<Ice>())
                {
                    hittedEntity.Replace(new Ice());
                    hittedEntity.Get<Ice>().iceStartTime = Time.time;
                }
                if (bulletEntity.Has<Explosion>())
                {
                    hittedEntity.Get<Explosion>();
                }
                if (bulletEntity.Has<Lifesteal>())
                {
                    world.NewEntity().Get<LifestealEvent>();
                }

                if (bulletEntity.Has<Ricochet>())
                {
                    bulletEntity.Get<Ricochet>().level--;
                    bulletEntity.Get<RicochetEvent>().bulletEntity = bulletEntity;
                    bulletEntity.Get<RicochetEvent>().hittedObject = eventInfo.hittedObject;
                    if (bulletEntity.Get<Ricochet>().level == 0)
                    {
                        bulletEntity.Get<DeathEvent>();
                    }
                }
                else
                {
                    bulletEntity.Get<DeathEvent>();
                }
            }
        }

    }
}

