using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    public sealed class DashSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<DashEvent, PlayerTag> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var dash = ref filter.Get1(i);
                ref var transform = ref filter.Get2(i).transform;
                transform.position = Vector3.Lerp(transform.position, dash.point, 0.1f);
                
                if(Time.time - dash.dashTimeStamp > 0.35f)
                {
                    filter.GetEntity(i).Del<DashEvent>();
                }

            }
            
        }
    }
}



