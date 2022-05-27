using Leopotam.Ecs;
using UnityEngine;
using System;
namespace Client
{
    sealed class WeaponInitSystem : IEcsInitSystem
    {
        readonly AllPrefabsData allPrefabsData;
        readonly SceneData sceneData;
        readonly EcsWorld world = null;

        public void Init()
        {
            string activeWeapon = PlayerPrefs.GetString("ActiveWeapon");
            int prefabNumber = Convert.ToInt32(activeWeapon.Split("-")[2]);

            string weaponStatsString = PlayerPrefs.GetString("PlayerWeaponStats");
            string[] weaponStats = weaponStatsString.Split("-");

            Debug.Log(prefabNumber);
            Debug.Log(activeWeapon.Split("-")[2]);
            // finalDamage-finalAttackSpeed-finalDmgChance-finalDmgMultiplier


            GameObject weaponGameObject = GameObject.Instantiate(allPrefabsData.weaponPrefabs[prefabNumber], sceneData.playerTransform);

            EcsEntity weaponEntity = world.NewEntity();
            ref var objectLink = ref weaponEntity.Get<ObjectLink>();
            ref var weapon = ref weaponEntity.Get<Weapon>();
            ref var damage = ref weaponEntity.Get<Damage>();
            weaponEntity.Get<Dropped>();
            weaponEntity.Get<Reloadable>();

            weapon.projectilePrefabNumber = 0;
                
            objectLink.Object = weaponGameObject;
            weapon.weaponSocket = weaponGameObject.transform.GetChild(0).transform;
            weapon.weaponTransform = weaponGameObject.transform;

            weapon.muzzleEffect = GameObject.Instantiate(allPrefabsData.muzzlePrefabs[0], weapon.weaponSocket);
            weapon.shotSound = objectLink.Object.GetComponent<AudioSource>();
            weapon.currentAmmo = 900000;
            weapon.magazineAmmo = 900000;
            weapon.bulletSpeed = 100;
            weapon.delayBetweenAttack = Convert.ToSingle(weaponStats[1]);
            weapon.projectileLifeTime = 6f;
            damage.value = Convert.ToSingle(weaponStats[0]);
                
            objectLink.Object.AddComponent<EntityLink>().entity = weaponEntity;
            


        }
    }
}



