using Leopotam.Ecs;
using System;
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
            string activeWeaponString = PlayerPrefs.GetString("ActiveWeapon");

            int prefabNumber = Convert.ToInt32(activeWeaponString);

            GameObject weaponGameObject = GameObject.Instantiate(allPrefabsData.weaponPrefabs[prefabNumber], sceneData.playerTransform);

            EcsEntity weaponEntity = world.NewEntity();
            ref var objectLink = ref weaponEntity.Get<ObjectLink>();
            ref var weapon = ref weaponEntity.Get<Weapon>();
            ref var damage = ref weaponEntity.Get<Damage>();
            weaponEntity.Get<Dropped>();
            weaponEntity.Get<Reloadable>();



            objectLink.Object = weaponGameObject;
            weapon.weaponSocket = weaponGameObject.transform.GetChild(0).transform;
            weapon.weaponTransform = weaponGameObject.transform;

            weapon.muzzleEffect = GameObject.Instantiate(allPrefabsData.muzzlePrefabs[0], weapon.weaponSocket);
            weapon.shotSound = weaponGameObject.GetComponent<AudioSource>();

            var weaponStats = weaponGameObject.GetComponent<WeaponInfoMono>();

            weapon.projectilePrefabNumber = weaponStats.projectilePrefabNumber;
            weapon.weaponType = weaponStats.weaponType;
            weapon.bulletSpeed = weaponStats.bulletSpeed;
            weapon.delayBetweenAttack = weaponStats.delayBetweenAttack;
            weapon.projectileLifeTime = weaponStats.projectileLifeTime;
            damage.value = weaponStats.damage;

            objectLink.Object.AddComponent<EntityLink>().entity = weaponEntity;


            if (weaponStats.weaponType == WeaponType.Flame)
            {
                weaponEntity.Get<Fire>().level++;
            }

        }
    }
}



