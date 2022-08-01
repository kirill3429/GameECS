using Leopotam.Ecs;
using UnityEngine;

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
                        switch (weapon.weaponType)
                        {
                            case WeaponType.Simple:
                                EcsEntity projectile = eventInfo.weapon.Copy();
                                projectile.Get<SpawnProjectile>().direction = eventInfo.mousePos;
                                projectile.Del<Name>();
                                projectile.Del<ObjectLink>();
                                eventInfo.eventSender.Get<AnimatorComponent>().animator.SetTrigger(AnimatorComponent.fireHash);
                                weapon.lastAttack = currentTime;
                                weapon.projectileStartTime = currentTime;
                                break;

                            case WeaponType.Shotgun:
                                for (int j = 0; j < 3; j++)
                                {
                                    EcsEntity projectile1 = eventInfo.weapon.Copy();
                                    projectile1.Get<SpawnProjectile>().direction = eventInfo.mousePos + new Vector3(Random.Range(0, 5), 0, Random.Range(0, 5));
                                    projectile1.Del<Name>();
                                    projectile1.Del<ObjectLink>();
                                }
                                eventInfo.eventSender.Get<AnimatorComponent>().animator.SetTrigger(AnimatorComponent.fireHash);
                                weapon.lastAttack = currentTime;
                                weapon.projectileStartTime = currentTime;

                                break;

                            case WeaponType.Flame:
                                for (int j = 0; j < Random.Range(1, 4); j++)
                                {
                                    EcsEntity projectile1 = eventInfo.weapon.Copy();
                                    projectile1.Get<SpawnProjectile>().direction = eventInfo.mousePos + new Vector3(Random.Range(0, 7), 0, Random.Range(0, 7));
                                    projectile1.Del<Name>();
                                    projectile1.Del<ObjectLink>();
                                }
                                eventInfo.eventSender.Get<AnimatorComponent>().animator.SetTrigger(AnimatorComponent.fireHash);
                                weapon.lastAttack = currentTime;
                                weapon.projectileStartTime = currentTime;
                                break;
                        }



                    }


                }

            }
        }

    }
}

