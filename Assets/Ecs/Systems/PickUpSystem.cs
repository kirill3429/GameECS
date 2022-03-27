using LeoEcsPhysics;
using Leopotam.Ecs;

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
                if (eventData.senderGameObject.CompareTag("Player") && eventData.collider.gameObject.CompareTag("Weapon"))
                {
                    EcsEntity weaponPickUpEvent = world.NewEntity();
                    ref var eventInfo = ref weaponPickUpEvent.Get<WeaponPickUpEvent>();
                    eventInfo.weaponEntity = eventData.collider.GetComponent<EntityLink>().entity; ;
                    eventInfo.WeaponTransform = eventData.collider.transform;
                    eventInfo.newOwnerEntity = eventData.senderGameObject.GetComponent<EntityLink>().entity;

                }

            }
        }

    }
}

