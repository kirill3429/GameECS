using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class WeaponInitSystem : IEcsInitSystem
    {
        readonly AllPrefabsData allPrefabsData;
        readonly SceneData sceneData;
        readonly EcsWorld world = null;

        public void Init()
        {
            int weaponPrefabNumber = PlayerPrefs.GetInt("firstWeapon");
            int weaponProjectileNumber = PlayerPrefs.GetInt("weaponProjectileNumber");


            GameObject weaponGameObject = GameObject.Instantiate(allPrefabsData.weaponPrefabs[weaponPrefabNumber], sceneData.weaponSpawnPoint);

            EcsEntity weaponEntity = world.NewEntity();
            ref var objectLink = ref weaponEntity.Get<ObjectLink>();
            ref var weapon = ref weaponEntity.Get<Weapon>();
            ref var name = ref weaponEntity.Get<Name>();
            ref var damage = ref weaponEntity.Get<Damage>();
            weaponEntity.Get<Dropped>();
            weaponEntity.Get<Reloadable>();

            weapon.projectilePrefabNumber = 0;
                
            objectLink.Object = weaponGameObject;
            weapon.weaponSocket = weaponGameObject.transform.GetChild(0).transform;
            weapon.weaponTransform = weaponGameObject.transform;
            weapon.currentAmmo = 500;
            weapon.magazineAmmo = 500;
            weapon.bulletSpeed = 100;
            weapon.delayBetweenAttack = 0.2f;
            weapon.projectileLifeTime = 6f;
            damage.value = 5;
                
            objectLink.Object.AddComponent<EntityLink>().entity = weaponEntity;
            


        }
    }
}



