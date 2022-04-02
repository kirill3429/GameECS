using Leopotam.Ecs;

namespace Client
{
    sealed class EventGeneratorSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<InputHandlerComponent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                // SWITCH WEAPON EVENT
                ref var input = ref filter.Get1(i);
                if (input.switchWeapon)
                {
                    var eventEntity = world.NewEntity();
                    ref var switchWeaponEvent = ref eventEntity.Get<SwitchWeaponEvent>();
                    switchWeaponEvent.eventSender = filter.GetEntity(i);
                }
                // ATACK EVENT
                if (input.attack)
                {
                    EcsEntity eventSender = filter.GetEntity(i);
                    ref var equip = ref eventSender.Get<Equipment>();

                    if (equip.mainWeapon != EcsEntity.Null)
                    {
                        var eventEntity = world.NewEntity();
                        ref var attackEvent = ref eventEntity.Get<AttackEvent>();
                        attackEvent.mousePos = input.mouse;
                        attackEvent.eventSender = eventSender;
                        attackEvent.weapon = equip.mainWeapon;
                    }




                }
            }
        }

    }
}

