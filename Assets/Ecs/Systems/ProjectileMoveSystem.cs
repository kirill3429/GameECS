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
            float delta = Time.deltaTime;
            foreach (var i in filter)
            {
                ref var bulletEntity = ref filter.GetEntity(i);
                ref var weapon = ref bulletEntity.Get<Weapon>();
                ref var projectile = ref bulletEntity.Get<ObjectLink>().Object;

                projectile.transform.Translate(Vector3.forward * delta * weapon.attackSpeed);
                
            }
        }

    }
}

