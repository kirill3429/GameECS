using Leopotam.Ecs;
namespace Client
{
    sealed class CurrentEnemiesUpdateSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<Spawner> filter;
        readonly EcsFilter<EnemyTag> filter_enemies;

        public void Run()
        {
            foreach (var i in filter)
            {
                ref var spawner = ref filter.Get1(i);
                spawner.currentEnemies = filter_enemies.GetEntitiesCount();
            }

        }
    }
}



