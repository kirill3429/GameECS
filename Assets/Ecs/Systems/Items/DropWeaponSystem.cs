using LeoEcsPhysics;
using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class DropWeaponSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<WeaponDropEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var eventSender = ref filter.Get1(i).eventSender;
                if (eventSender.Has<Equipment>())
                {
                    ref var equip = ref eventSender.Get<Equipment>();

                    if (equip.mainWeapon == EcsEntity.Null && equip.secondWeapon == EcsEntity.Null)
                    {
                        Debug.Log("Никакого оружия нет");
                        
                    }
                    else if (equip.mainWeapon != EcsEntity.Null)
                    {
                        equip.mainWeapon.Get<ObjectLink>().Object.transform.parent = null;
                        equip.mainWeapon.Get<ObjectLink>().Object.GetComponent<Animator>().enabled = true;
                        equip.mainWeapon.Get<ObjectLink>().Object.GetComponent<Collider>().enabled = true;
                        equip.mainWeapon.Get<Dropped>();
                        equip.mainWeapon.Del<Active>();
                        equip.mainWeapon.Get<UnAvaible>().timer = Time.time;
                        equip.mainWeapon = equip.secondWeapon;
                        equip.mainWeapon.Get<ObjectLink>().Object.SetActive(true);
                        equip.secondWeapon = EcsEntity.Null;
                        
                        
                    } 
                }


            }
        }

    }
}

