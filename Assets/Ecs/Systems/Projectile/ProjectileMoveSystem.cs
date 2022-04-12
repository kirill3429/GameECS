using UnityEngine;
using Leopotam.Ecs;

namespace Client
{
    sealed class ProjectileMoveSystem : IEcsRunSystem
    {

        readonly EcsWorld world = null;
        readonly EcsFilter<Projectile> filter = null;
        public void Run()
        {
            float currentTime = Time.time;
            foreach (var i in filter)
            {
                ref var bulletEntity = ref filter.GetEntity(i);
                ref var weapon = ref bulletEntity.Get<Weapon>();
                ref var projectile = ref bulletEntity.Get<ObjectLink>().Object;
                var rb = projectile.GetComponent<Rigidbody>();

                rb.velocity = (projectile.transform.forward * weapon.attackSpeed);

                if (currentTime - weapon.projectileStartTime > weapon.projectileLifeTime)
                {
                    bulletEntity.Get<DeathEvent>();
                }
            }
        }

    }
}

