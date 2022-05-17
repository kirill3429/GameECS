using UnityEngine;
using Leopotam.Ecs;

namespace Client
{
    sealed class ProjectileSpawnSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly AllPrefabsData allPrefabsData;
        readonly EcsWorld world = null;
        readonly EcsFilter<SpawnProjectile> filter = null;
        public void Run()
        {
            if (runtimeData.isPaused) return;
            foreach (var i in filter)
            {
                ref var projectileEntity = ref filter.GetEntity(i);
                ref var weapon = ref projectileEntity.Get<Weapon>();
                ref var objectLink = ref projectileEntity.Get<ObjectLink>();
                ref var direction = ref filter.Get1(i).direction;
                direction.y = 3.5f;
                direction.z -= 1.4f;
                projectileEntity.Get<Projectile>();
                objectLink.Object = GameObject.Instantiate(allPrefabsData.bulletPrefabs[weapon.projectilePrefabNumber], weapon.weaponSocket.position, weapon.weaponSocket.rotation);
                objectLink.Object.transform.LookAt(direction);
                objectLink.Object.GetComponent<EntityLink>().entity = projectileEntity;
                            
            }
        }

    }
}

