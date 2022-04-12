using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    public sealed class DeathSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<DeathEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var objectToDeath = ref filter.GetEntity(i).Get<ObjectLink>().Object;
                GameObject.Destroy(objectToDeath);
                filter.GetEntity(i).Destroy();
                
                
            }
        }
    }
}



