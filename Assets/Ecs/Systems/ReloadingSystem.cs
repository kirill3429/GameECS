using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    public sealed class ReloadingSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<Reloading, Reloadable> filter = null;
        public void Run()
        {
            float currentTime = Time.deltaTime;
            foreach (var i in filter)
            {
                ref var reloadingEntity = ref filter.GetEntity(i);
                ref var reloadingTime = ref reloadingEntity.Get<Weapon>().reloadTime;
                ref var startTime = ref reloadingEntity.Get<Reloading>().startTime;

                if (currentTime - startTime > reloadingTime)
                {
                    reloadingEntity.Del<Reloading>();
                }
            }
        }
    }
}



