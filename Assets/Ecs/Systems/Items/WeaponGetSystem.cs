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
                
                
                if (equipment.mainWeapon == EcsEntity.Null)
                {
                    Debug.Log("Главное оружие не занято");
                    equipment.mainWeapon = eventInfo.weaponEntity;
                    WeaponGet(ref eventInfo, ref equipment);
                    if (equipment.secondWeapon == EcsEntity.Null)
                    {
                        equipment.mainWeapon.Get<Active>();
                    }
                }
                else if (equipment.secondWeapon == EcsEntity.Null)
                {
                    Debug.Log("Главное оружие занято");
                    equipment.secondWeapon = eventInfo.weaponEntity;
                    WeaponGet(ref eventInfo, ref equipment);
                    if (equipment.mainWeapon == EcsEntity.Null)
                    {
                        equipment.secondWeapon.Get<Active>();
                    }
                }
                else
                {
                    Debug.Log("Слоты заняты");
                }

                filter.GetEntity(i).Del<WeaponPickUpEvent>();
            }
        }



        private static void WeaponGet(ref WeaponPickUpEvent info, ref Equipment equipp)
        {
            info.weaponEntity.Del<Dropped>();
            info.WeaponTransform.parent = equipp.weaponHolder;
            info.WeaponTransform.position = equipp.weaponHolder.position;
            info.WeaponTransform.gameObject.GetComponent<Collider>().enabled = false;
            info.WeaponTransform.gameObject.GetComponent<Animator>().enabled = false;
            info.WeaponTransform.forward = equipp.weaponHolder.forward;
            info.weaponEntity.Get<Weapon>().ownerEntity = info.newOwnerEntity;
        }
    }
}