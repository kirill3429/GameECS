using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class AbilityAddSystem : IEcsRunSystem
    {

        readonly EcsWorld _world = null;
        readonly EcsFilter<AddAbilityEvent> filter = null;
        readonly EcsFilter<PlayerTag> playerFilter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                foreach (var j in playerFilter)
                {
                    ref var weapon = ref playerFilter.GetEntity(j).Get<Equipment>().mainWeapon;
                    ref var player = ref  playerFilter.GetEntity(i);
                    ref var ability = ref filter.Get1(i).abilityName;

                    switch (ability)
                    {
                        case "Fire":
                            weapon.Get<Fire>().level++;
                            break;
                        case "Ricochet":
                            weapon.Get<Ricochet>().level += 2;
                            break;
                        case "Ice":
                            weapon.Get<Ice>().level +=2;
                            break;
                        case "Damage":
                            weapon.Get<AddDamage>();
                            break;
                        case "Lifesteal":
                            weapon.Get<Lifesteal>().level++;
                            break;
                        case "Explosion":
                            weapon.Get<Explosion>().level++;
                            weapon.Get<Explosion>().damage = weapon.Get<Damage>().value / 5;
                            break;
                        case "AddHealth":
                            player.Get<AddHealth>();
                            break;
                    }

                }
                filter.GetEntity(i).Destroy();
            }
        }
    }
}