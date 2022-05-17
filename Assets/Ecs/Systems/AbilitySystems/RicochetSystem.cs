using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class RicochetSystem : IEcsRunSystem
    {

        readonly EcsWorld _world = null;
        readonly EcsFilter<RicochetEvent> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var eventInfo = ref filter.Get1(i);
                ref var bulletOjbect = ref eventInfo.bulletEntity.Get<ObjectLink>().Object;

                Collider[] nearEnemies = Physics.OverlapSphere(bulletOjbect.transform.position, 2);

                if (nearEnemies.Length > 1)
                {
                    int rand = Random.Range(0, nearEnemies.Length);
                    if (nearEnemies[rand].gameObject != eventInfo.hittedObject)
                    {
                        bulletOjbect.transform.forward = nearEnemies[rand].transform.position - bulletOjbect.transform.position;
                        
                    }
                }
                
                filter.GetEntity(i).Del<RicochetEvent>();

            }
        }
    }
}