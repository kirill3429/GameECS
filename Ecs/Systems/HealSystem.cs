using Leopotam.Ecs;
namespace Client
{
    public sealed class HealSystem : IEcsRunSystem
    {
        readonly UI ui;
        readonly RuntimeData runtimeData;
        readonly EcsWorld world = null;
        readonly EcsFilter<Heal> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var hp = ref filter.GetEntity(i).Get<Health>();
                ref var heal = ref filter.Get1(i);
                hp.currentHealth += heal.heal;
                if (filter.GetEntity(i).Has<HealthView>() && filter.GetEntity(i).Has<PlayerTag>())
                {
                    ui.gameScreen.SetHealth(hp.currentHealth, hp.maxHealth);
                }
                filter.GetEntity(i).Del<Heal>();
            }
        }
    }
}



