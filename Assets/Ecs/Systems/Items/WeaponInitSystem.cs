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
            // finalDamage-finalAttackSpeed-finalReloadSpeed-finalDmgChance-finalDmgMultiplier-finalAmmo


            GameObject weaponGameObject = GameObject.Instantiate(allPrefabsData.weaponPrefabs[prefabNumber], sceneData.weaponSpawnPoint);

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

            weapon.currentAmmo = Convert.ToInt32(weaponStats[5]);
            weapon.magazineAmmo = Convert.ToInt32(weaponStats[5]);
            weapon.bulletSpeed = 100;
            weapon.delayBetweenAttack = Convert.ToSingle(weaponStats[1]);
            weapon.projectileLifeTime = 6f;
            damage.value = Convert.ToSingle(weaponStats[0]);
                
            objectLink.Object.AddComponent<EntityLink>().entity = weaponEntity;
            


        }
    }
}



