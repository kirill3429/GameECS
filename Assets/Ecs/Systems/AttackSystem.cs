using UnityEngine;
using Leopotam.Ecs;

namespace Client
{
    sealed class AttackSystem : IEcsRunSystem
    {

        readonly EcsWorld world = null;
        readonly EcsFilter<AttackEvent> filter = null;
        private float currentTime;
        public void Run()
        {
            currentTime = Time.time;
            foreach (var i in filter)
            {
                ref var eventInfo = ref filter.Get1(i);
                
                if (eventInfo.weapon != EcsEntity.Null)
                {
                    ref var weapon = ref eventInfo.weapon.Get<Weapon>();
                    
                    if (currentTime - weapon.lastAttack > weapon.delayBetweenAttack)
                    {
                        EcsEntity projectile = eventInfo.weapon.Copy();
                        projectile.Get<SpawnProjectile>().direction = eventInfo.mousePos;
                        projectile.Del<Name>();
                        projectile.Del<ObjectLink>();
                        eventInfo.eventSender.Get<AnimatorComponent>().animator.SetTrigger(AnimatorComponent.fireHash);
                        weapon.lastAttack = currentTime;
                        weapon.projectileStartTime = currentTime;

                    }

                    
                }
                
            }
        }

    }
}

