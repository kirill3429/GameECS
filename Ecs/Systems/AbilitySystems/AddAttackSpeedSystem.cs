using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class AddAttackSpeedSystem : IEcsRunSystem
    {
        readonly EcsWorld _world = null;
        readonly EcsFilter<AddAttackSpeed, Weapon> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var weapon = ref filter.Get2(i);
                ref var AddDamageInfo = ref filter.Get1(i);

                weapon.delayBetweenAttack = (float)(weapon.delayBetweenAttack * (1 - (0.05 * AddDamageInfo.learnedLevel)));

                filter.GetEntity(i).Del<AddAttackSpeed>();
            }
        }
    }
}