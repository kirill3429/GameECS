using UnityEngine;
using Leopotam.Ecs;

namespace Client
{
    sealed class ProjectileSpawnSystem : IEcsRunSystem
    {
        readonly StaticData staticData;
        readonly EcsWorld world = null;
        readonly EcsFilter<SpawnProjectile> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var eventEntity = ref filter.GetEntity(i);
                ref var weapon = ref eventEntity.Get<Weapon>();
                ref var objectLink = ref eventEntity.Get<ObjectLink>();
                ref var direction = ref filter.Get1(i).direction;
                direction.y = 3.5f;
                direction.z -= 1.4f;
                eventEntity.Get<Projectile>();
                objectLink.Object = GameObject.Instantiate(staticData.bulletPrefabs[weapon.projectilePrefabNumber], weapon.weaponSocket.position, weapon.weaponSocket.rotation);
                objectLink.Object.transform.LookAt(direction);
                
            }
        }

    }
}

