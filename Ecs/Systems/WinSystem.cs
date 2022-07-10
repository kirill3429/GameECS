using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    public sealed class WinSystem : IEcsRunSystem
    {
        UI uI;
        RuntimeData runtimeData;
        readonly EcsWorld world = null;
        readonly EcsFilter<WinGame> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                runtimeData.gameState = GameState.Win;
                world.NewEntity().Get<PauseEvent>();
                filter.GetEntity(i).Destroy();
            }
            
        }
    }
}



