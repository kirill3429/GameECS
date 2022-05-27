using UnityEngine;
using Leopotam.Ecs;
using LeoEcsPhysics;

namespace Client
{
    sealed class EnemyRangeAttackChecker : IEcsRunSystem
    {
        readonly SceneData sceneData;
        readonly EcsWorld world = null;
        readonly EcsFilter<Range> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var range = ref filter.Get1(i);
                if (range.playerDirection.magnitude < range.range)
                {
                    ref var attackEvent = ref world.NewEntity().Get<AttackEvent>();
                    attackEvent.eventSender = filter.GetEntity(i);
                    attackEvent.weapon = attackEvent.eventSender.Get<Equipment>().mainWeapon;
                    attackEvent.mousePos = attackEvent.eventSender.Get<InputHandlerComponent>().mouseVector;
                }
                
                
            }
        }

    }
}

