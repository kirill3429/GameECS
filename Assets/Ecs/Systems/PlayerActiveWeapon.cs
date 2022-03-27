using LeoEcsPhysics;
using Leopotam.Ecs;

namespace Client
{
    sealed class PlayerActiveWeapon : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<Equipment, InputHandlerComponent, PlayerTag> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var input = ref filter.Get2(i);
                if (input.switchWeapon)
                {
                    ref var equip = ref filter.Get1(i);
                    if (equip.mainWeapon != EcsEntity.Null && equip.secondWeapon != EcsEntity.Null)
                    {

                    }
                    else if (equip.mainWeapon == EcsEntity.Null && equip.secondWeapon != EcsEntity.Null)
                    {

                    }
                    else if (equip.mainWeapon != EcsEntity.Null && equip.secondWeapon == EcsEntity.Null)
                    {

                    }
                }
            }
        }

    }
}

