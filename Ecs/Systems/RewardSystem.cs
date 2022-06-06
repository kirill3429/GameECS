using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    public sealed class RewardSystem : IEcsRunSystem
    {
        UI uI;
        RuntimeData runtimeData;
        readonly EcsWorld world = null;
        readonly EcsFilter<RewardEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                runtimeData.score += filter.Get1(i).reward;
                uI.gameScreen.score.text = "score: " + runtimeData.score.ToString();
                filter.GetEntity(i).Destroy();
            }
            
        }
    }
}



