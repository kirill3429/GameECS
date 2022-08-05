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
                    hittedEntity.Get<Fire>().level = bulletEntity.Get<Fire>().level;
                    hittedEntity.Get<Fire>().learnedLevel = bulletEntity.Get<Fire>().learnedLevel;
                }
                if (bulletEntity.Has<Ice>())
                {
                    hittedEntity.Replace(new Ice());
                    hittedEntity.Get<Ice>().iceStartTime = Time.time;
                    hittedEntity.Get<Ice>().level = bulletEntity.Get<Ice>().level;
                }
                if (bulletEntity.Has<Push>())
                {
                    hittedEntity.Replace(new Push());
                    hittedEntity.Get<Push>().pushStartTime = Time.time;
                    hittedEntity.Get<Push>().level = bulletEntity.Get<Push>().level;
                    hittedEntity.Get<Push>().learnedLevel = bulletEntity.Get<Push>().learnedLevel;
                }
                if (bulletEntity.Has<Explosion>())
                {
                    hittedEntity.Get<Explosion>().damage = bulletEntity.Get<Explosion>().damage;
                    hittedEntity.Get<Explosion>().level = bulletEntity.Get<Explosion>().level;
                    hittedEntity.Get<Explosion>().learnedLevel = bulletEntity.Get<Explosion>().learnedLevel;
                }
                if (bulletEntity.Has<Lifesteal>())
                {
                    world.NewEntity().Get<LifestealEvent>();
                }

                if (bulletEntity.Has<Ricochet>())
                {
                    bulletEntity.Get<Ricochet>().level--;
                    if (bulletEntity.Get<Ricochet>().level < 0)
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

