using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class WeaponInitSystem : IEcsInitSystem
    {
        readonly EcsWorld world = null;

        public void Init()
        {
            GameObject[] gameObjects;
            gameObjects = GameObject.FindGameObjectsWithTag("Weapon");

            foreach (GameObject i in gameObjects)
            {
                EcsEntity weaponEntity = world.NewEntity();
                ref var objectLink = ref weaponEntity.Get<ObjectLink>();
                ref var weapon = ref weaponEntity.Get<Weapon>();
                ref var name = ref weaponEntity.Get<Name>();
                ref var damage = ref weaponEntity.Get<Damage>();
                weaponEntity.Get<Dropped>();
                weaponEntity.Get<Reloadable>();

                weapon.projectilePrefabNumber = 0;
                
                objectLink.Object = i;
                weapon.weaponSocket = objectLink.Object.transform.GetChild(0).transform;
                weapon.weaponTransform = objectLink.Object.transform;
                weapon.currentAmmo = 500;
                weapon.magazineAmmo = 500;
                weapon.attackSpeed = 100;
                weapon.delayBetweenAttack = 0.2f;
                weapon.projectileLifeTime = 6f;
                damage.value = 5;
                
                objectLink.Object.AddComponent<EntityLink>().entity = weaponEntity;
            }


        }
    }
}



