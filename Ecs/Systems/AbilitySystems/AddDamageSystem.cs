using Leopotam.Ecs;

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
                ref var AddDamageInfo = ref filter.Get1(i);
                ref var damage = ref weaponEntity.Get<Damage>();
                damage.value = (float)(damage.value * (1 + (0.1 * AddDamageInfo.learnedLevel)));

                weaponEntity.Del<AddDamage>();

                if (weaponEntity.Has<Explosion>())
                {
                    weaponEntity.Get<Explosion>().damage = weaponEntity.Get<Damage>().value / 10;
                }
            }
        }
    }
}