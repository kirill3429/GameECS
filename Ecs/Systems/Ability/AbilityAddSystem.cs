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
                    ref var player = ref playerFilter.GetEntity(i);
                    ref var weapon = ref player.Get<Equipment>().mainWeapon;
                    ref var abilityName = ref filter.Get1(i).abilityName;
                    ref var abilityLevel = ref filter.Get1(i).abilityLevel;


                    switch (abilityName)
                    {
                        case "Fire":
                            weapon.Get<Fire>().level++;
                            weapon.Get<Fire>().learnedLevel = abilityLevel;
                            
                            break;
                        case "Ricochet":
                            weapon.Get<Ricochet>().level += 2;
                            weapon.Get<Ricochet>().learnedLevel = abilityLevel;
                            break;
                        case "Ice":
                            weapon.Get<Ice>().level++;
                            break;
                        case "Damage":
                            weapon.Get<AddDamage>().learnedLevel = abilityLevel;
                            break;
                        case "Lifesteal":
                            weapon.Get<Lifesteal>().level++;
                            weapon.Get<Lifesteal>().learnedLevel = abilityLevel;
                            break;
                        case "Explosion":
                            weapon.Get<Explosion>().level++;
                            weapon.Get<Explosion>().learnedLevel = abilityLevel;
                            weapon.Get<Explosion>().damage = weapon.Get<Damage>().value / 10;
                            break;
                        case "AddHealth":
                            player.Get<AddHealth>().learnedLevel = abilityLevel;
                            break;
                    }

                }
                filter.GetEntity(i).Destroy();
            }
        }
    }
}