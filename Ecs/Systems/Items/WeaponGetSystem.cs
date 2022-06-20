using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class WeaponGetSystem : IEcsRunSystem
    {

        readonly SceneData sceneData;
        readonly EcsWorld _world = null;
        readonly EcsFilter<WeaponPickUpEvent> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var eventInfo = ref filter.Get1(i);
                ref var equipment = ref eventInfo.newOwnerEntity.Get<Equipment>();
                Debug.Log("Главное оружие не занято");
                equipment.mainWeapon = eventInfo.weaponEntity;
                WeaponGet(ref eventInfo, ref equipment);
                filter.GetEntity(i).Del<WeaponPickUpEvent>();
            }
        }



        private static void WeaponGet(ref WeaponPickUpEvent info, ref Equipment equipp)
        {
            info.weaponEntity.Del<Dropped>();
            info.WeaponTransform.parent = equipp.weaponHolder;
            info.WeaponTransform.gameObject.GetComponent<Collider>().enabled = false;
            info.WeaponTransform.transform.SetPositionAndRotation(equipp.weaponHolder.transform.position, equipp.weaponHolder.rotation);
            info.weaponEntity.Get<Weapon>().ownerEntity = info.newOwnerEntity;
        }
    }
}