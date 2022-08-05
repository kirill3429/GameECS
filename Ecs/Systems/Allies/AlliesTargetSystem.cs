using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class AlliesTargetSystem : IEcsRunSystem
    {
        readonly EcsWorld _world = null;
        readonly EcsFilter<AllyTag, TransformComponent> filter = null;


        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var ally = ref filter.Get1(i);
                ref var transform = ref filter.Get2(i).transform;
               
                if (ally.target == null)
                {
                    int j = Physics.OverlapSphereNonAlloc(transform.transform.position, 50, ally.targetCollider, ally.layerMask);
                    if (j > 0)
                    {
                        int r = Random.Range(0, 5);
                        if (ally.targetCollider[r] != null)
                        {
                            ally.target = ally.targetCollider[r].transform;
                        }
                       
                    }
                }
                
            }
        }
    }
}