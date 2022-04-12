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
                        eventSender.Get<InputHandlerComponent>().switchWeapon = true;
                        equip.mainWeapon = EcsEntity.Null;
                        //var eventEntity = world.NewEntity();
                        //ref var switchWeaponEvent = ref eventEntity.Get<SwitchWeaponEvent>();
                        //switchWeaponEvent.eventSender = filter.GetEntity(i);
                    } 
                }


            }
        }

    }
}

