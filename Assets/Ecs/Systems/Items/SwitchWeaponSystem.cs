using LeoEcsPhysics;
using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class SwitchWeaponSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<SwitchWeaponEvent> filter = null;
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
                    else if (equip.mainWeapon != EcsEntity.Null & equip.secondWeapon != EcsEntity.Null)
                    {
                        EcsEntity temp = equip.mainWeapon;
                        if (equip.mainWeapon.Has<Active>())
                        {
                            equip.mainWeapon.Del<Active>();
                            equip.secondWeapon.Get<Active>();
                            equip.mainWeapon.Get<ObjectLink>().Object.SetActive(false);
                            equip.secondWeapon.Get<ObjectLink>().Object.SetActive(true);

                            equip.mainWeapon = equip.secondWeapon;
                            equip.secondWeapon = temp;
                            
                        }
                        else
                        {
                            equip.secondWeapon.Del<Active>();
                            equip.mainWeapon.Get<Active>();
                            equip.mainWeapon.Get<ObjectLink>().Object.SetActive(true);
                            equip.secondWeapon.Get<ObjectLink>().Object.SetActive(false);
                            equip.mainWeapon = equip.secondWeapon;
                            equip.secondWeapon = temp;
                        }
                    }
                    else if (equip.mainWeapon != EcsEntity.Null && equip.secondWeapon == EcsEntity.Null)
                    {
                        Debug.Log("Второго оружия нет");
                    }
                    else if (equip.mainWeapon == EcsEntity.Null && equip.secondWeapon != EcsEntity.Null)
                    {
                        Debug.Log("Первого оружия нет");
                    }
                    
                }


            }
        }

    }
}

