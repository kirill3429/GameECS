using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class WeaponInitSystem : IEcsInitSystem
    {
        readonly StaticData staticData;
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

                weapon.projectilePrefabNumber = 0;
                weapon.attackType = AttackType.rangeProjectile;
                
                objectLink.Object = i;
                weapon.weaponSocket = objectLink.Object.transform.GetChild(0).transform;
                weapon.weaponTransform = objectLink.Object.transform;
                weapon.attackSpeed = 100;
                objectLink.Object.AddComponent<EntityLink>().entity = weaponEntity;
            }


        }
    }
}



