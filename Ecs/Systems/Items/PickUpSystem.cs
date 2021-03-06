using LeoEcsPhysics;
using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class PickUpSystem : IEcsRunSystem
    {
        readonly EcsWorld world = null;
        readonly EcsFilter<OnTriggerEnterEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var eventData = ref filter.Get1(i);
                if (eventData.collider != null && eventData.senderGameObject != null)
                {
                    if (eventData.senderGameObject.CompareTag("Player") && eventData.collider.gameObject.CompareTag("Weapon"))
                    {
                        var colliderEntity = eventData.collider.GetComponent<EntityLink>().entity;
                        if (colliderEntity.Has<Dropped>() && !colliderEntity.Has<UnAvaible>())
                        {
                            EcsEntity weaponPickUpEvent = world.NewEntity();
                            ref var eventInfo = ref weaponPickUpEvent.Get<WeaponPickUpEvent>();
                            eventInfo.weaponEntity = colliderEntity;
                            eventInfo.WeaponTransform = eventData.collider.transform;
                            eventInfo.newOwnerEntity = eventData.senderGameObject.GetComponent<EntityLink>().entity;
                        }
                    }
                }
                
            }
            
        }

    }
}

