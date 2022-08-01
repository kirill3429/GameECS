using Leopotam.Ecs;
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
                runtimeData.scoreInGame += filter.Get1(i).reward;
                uI.gameScreen.score.text = runtimeData.scoreInGame.ToString();
                filter.GetEntity(i).Destroy();
            }

        }
    }
}



