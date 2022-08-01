using Leopotam.Ecs;
namespace Client
{
    public sealed class TakeDamageSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly UI ui;
        readonly EcsFilter<TakeDamage, Health> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var HP = ref filter.Get2(i);
                ref var damage = ref filter.Get1(i);
                HP.currentHealth -= damage.value;

                if (filter.GetEntity(i).Has<HealthView>())
                {
                    ui.gameScreen.SetHealth(HP.currentHealth, HP.maxHealth);
                }

                if (HP.currentHealth <= 0)
                {
                    filter.GetEntity(i).Get<DeathEvent>();
                }
                filter.GetEntity(i).Del<TakeDamage>();
            }
        }
    }
}



