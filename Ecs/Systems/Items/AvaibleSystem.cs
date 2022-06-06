using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    public sealed class AvaibleSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<UnAvaible> filter = null;
        public void Run()
        {
            float currentTime = Time.time;
            foreach (var i in filter)
            {
                ref var unavaibleTime = ref filter.Get1(i).timer;
                if (currentTime - unavaibleTime > 2)
                {
                    filter.GetEntity(i).Del<UnAvaible>();
                }
            }
        }
    }
}



