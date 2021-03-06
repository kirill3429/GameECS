using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class AddHealthSystem : IEcsRunSystem
    {
        readonly UI ui;
        readonly EcsWorld _world = null;
        readonly EcsFilter<AddHealth> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var entity = ref filter.GetEntity(i);
                ref var health = ref entity.Get<Health>();
                ref var AddHealthInfo = ref filter.Get1(i);

                float hp = health.currentHealth / health.maxHealth;

                health.maxHealth = (float)(health.maxHealth * (1.1f + (0.1 * AddHealthInfo.learnedLevel)));
                health.currentHealth = health.maxHealth * hp;

                if (entity.Has<PlayerTag>())
                {
                    ui.gameScreen.SetHealth(health.currentHealth, health.maxHealth);
                }
                entity.Del<AddHealth>();

            }
        }
    }
}