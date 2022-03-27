using LeoEcsPhysics;
using Leopotam.Ecs;

namespace Client
{
    sealed class ShootSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<Equipment> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                
            }
        }

    }
}

