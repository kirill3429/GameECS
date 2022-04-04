
using Leopotam.Ecs;

namespace Client
{
    sealed class AttackSystem : IEcsRunSystem
    {

        readonly EcsWorld world = null;
        readonly EcsFilter<AttackEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var eventInfo = ref filter.Get1(i);
                
                if (eventInfo.weapon != EcsEntity.Null)
                {
                    ref var weapon = ref eventInfo.weapon.Get<Weapon>();
                    if (weapon.attackType == AttackType.rangeProjectile)
                    {
                        if (weapon.currentAmmo > 0 && !eventInfo.weapon.Has<Reloading>())
                        {
                            weapon.currentAmmo--;
                            EcsEntity projectile = eventInfo.weapon.Copy();
                            projectile.Get<SpawnProjectile>().direction = eventInfo.mousePos;
                            projectile.Del<Name>();
                            projectile.Del<ObjectLink>();
                            eventInfo.eventSender.Get<AnimatorComponent>().animator.SetTrigger(AnimatorComponent.fireHash);

                        }
                        else eventInfo.weapon.Get<Reloading>();
                    }
                    else if (weapon.attackType == AttackType.rangeRay)
                    {

                    }
                    else if (weapon.attackType == AttackType.melee)
                    {

                    }
                }
                
            }
        }

    }
}

