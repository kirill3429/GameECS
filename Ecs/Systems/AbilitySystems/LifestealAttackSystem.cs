using Leopotam.Ecs;

namespace Client
{
    sealed class LifestealAttackSystem : IEcsRunSystem
    {

        readonly EcsWorld _world = null;
        readonly EcsFilter<LifestealEvent> filter = null;
        readonly EcsFilter<PlayerTag> playerFilter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var lifesteal = ref filter.Get1(i);
                foreach (var j in playerFilter)
                {
                    ref var playerHP = ref playerFilter.GetEntity(j).Get<Health>();
                    ref var weaponLifesteal = ref playerFilter.GetEntity(j).Get<Equipment>().mainWeapon.Get<Lifesteal>();
                    if (playerHP.currentHealth < playerHP.maxHealth)
                    {
                        playerFilter.GetEntity(j).Get<Heal>().heal = weaponLifesteal.level * 0.1f * weaponLifesteal.learnedLevel;
                    }
                }
                filter.GetEntity(i).Destroy();
            }
        }
    }
}