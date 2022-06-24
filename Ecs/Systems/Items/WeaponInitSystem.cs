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
            string activeWeaponString = PlayerPrefs.GetString("ActiveWeapon");
            int prefabNumber = Convert.ToInt32(activeWeaponString.Split(":")[0]);
            int weaponLevel = Convert.ToInt32(activeWeaponString.Split(":")[1]);


            GameObject weaponGameObject = GameObject.Instantiate(allPrefabsData.weaponPrefabs[2], sceneData.playerTransform);

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
            weapon.shotSound = weaponGameObject.GetComponent<AudioSource>();

            var weaponStats = weaponGameObject.GetComponent<WeaponInfoMono>();

            weapon.bulletSpeed = weaponStats.bulletSpeed * (weaponLevel * 0.1f + 1);
            weapon.delayBetweenAttack = weaponStats.delayBetweenAttack - (weaponLevel * 0.05f);
            weapon.projectileLifeTime = weaponStats.projectileLifeTime;
            damage.value = 5;
                
            objectLink.Object.AddComponent<EntityLink>().entity = weaponEntity;
            

        }
    }
}



