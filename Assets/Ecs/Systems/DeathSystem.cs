using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    public sealed class DeathSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly EcsWorld world = null;
        readonly EcsFilter<DeathEvent>.Exclude<PlayerTag> filter = null;
        readonly EcsFilter<DeathEvent, PlayerTag> playerFilter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var objectToDeath = ref filter.GetEntity(i).Get<ObjectLink>().Object;
                if (filter.GetEntity(i).Has<Equipment>())
                {
                    filter.GetEntity(i).Get<Equipment>().mainWeapon.Destroy();
                }
                GameObject.Destroy(objectToDeath);
                filter.GetEntity(i).Destroy();

            }
            foreach (var i in playerFilter)
            {
                runtimeData.gameState = GameState.GameOver;
                world.NewEntity().Get<PauseEvent>();
                playerFilter.GetEntity(i).Del<DeathEvent>();
            }
        }
    }
}



