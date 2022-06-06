using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class AddDamageSystem : IEcsRunSystem
    {

        readonly EcsWorld _world = null;
        readonly EcsFilter<AddDamage, Weapon> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var weaponEntity = ref filter.GetEntity(i);
                weaponEntity.Get<Damage>().value *= 1.1f;
                weaponEntity.Del<AddDamage>();

                if (weaponEntity.Has<Explosion>())
                {
                    weaponEntity.Get<Explosion>().damage = weaponEntity.Get<Damage>().value / 5;
                }
            }
        }
    }
}