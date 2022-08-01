using LeoEcsPhysics;
using Leopotam.Ecs;
namespace Client
{
    sealed class ProjectileHitEventSystem : IEcsRunSystem
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
                    if (eventData.senderGameObject.CompareTag("Projectile") && (eventData.collider.gameObject.CompareTag("Enemy") || eventData.collider.gameObject.CompareTag("Player")))
                    {
                        EcsEntity hitEvent = world.NewEntity();
                        ref var eventInfo = ref hitEvent.Get<HitEvent>();
                        eventInfo.hittedEntity = eventData.collider.GetComponent<EntityLink>().entity;
                        eventInfo.bulletEntity = eventData.senderGameObject.GetComponent<EntityLink>().entity;
                        eventInfo.hittedObject = eventData.collider.gameObject;
                        eventInfo.hitDirection = eventData.senderGameObject.transform.forward;
                    }
                }

            }
        }

    }
}

