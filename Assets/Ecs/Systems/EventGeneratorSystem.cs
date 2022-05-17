using Leopotam.Ecs;

namespace Client
{
    sealed class EventGeneratorSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
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
                // DROP WEAPON EVENT

                if (input.dropWeapon)
                {
                    var eventEntity = world.NewEntity();
                    ref var dropEvent = ref eventEntity.Get<WeaponDropEvent>();
                    dropEvent.eventSender = filter.GetEntity(i);
                }
                if (input.pause)
                {
                    world.NewEntity().Get<PauseEvent>();
                }
            }
        }

    }
}

