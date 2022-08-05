using Leopotam.Ecs;

namespace Client
{
    sealed class OpenAbilityWindowSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly EcsWorld _world = null;
        readonly EcsFilter<OpenAbilityWindowEvent> filter = null;

        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                runtimeData.gameState = GameState.AbilityWindow;
                _world.NewEntity().Get<PauseEvent>();
                filter.GetEntity(i).Destroy();
            }
        }
    }
}