using LeoEcsPhysics;
using Leopotam.Ecs;

namespace Client
{
    sealed class EnemyMeleeAttackChecker : IEcsRunSystem
    {
        readonly SceneData sceneData;
        readonly EcsWorld world = null;
        readonly EcsFilter<OnTriggerStayEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var eventInfo = ref filter.Get1(i);
                if (eventInfo.collider != null)
                    if (eventInfo.collider.tag == "EnemyAttackCollider" && eventInfo.senderGameObject.tag == "Player")
                    {
                        ref var attackEvent = ref world.NewEntity().Get<AttackEvent>();
                        attackEvent.eventSender = eventInfo.collider.transform.parent.GetComponent<EntityLink>().entity;
                        attackEvent.weapon = attackEvent.eventSender.Get<Equipment>().mainWeapon;
                        attackEvent.mousePos = attackEvent.eventSender.Get<InputHandlerComponent>().mouseVector;
                        filter.GetEntity(i).Destroy();
                    }


            }
        }

    }
}

