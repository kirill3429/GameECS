using Leopotam.Ecs;

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
                        case "addfire":
                            weapon.Get<Fire>().level++;
                            weapon.Get<Fire>().learnedLevel = abilityLevel;

                            break;
                        case "bulletthrough":
                            weapon.Get<Ricochet>().level += abilityLevel;
                            break;
                        case "addice":
                            weapon.Get<Ice>().level++;
                            weapon.Get<Ice>().learnedLevel = abilityLevel;
                            break;
                        case "adddamage":
                            weapon.Get<AddDamage>().learnedLevel = abilityLevel;
                            break;
                        case "addlifesteal":
                            weapon.Get<Lifesteal>().level++;
                            weapon.Get<Lifesteal>().learnedLevel = abilityLevel;
                            break;
                        case "addexplosion":
                            weapon.Get<Explosion>().level++;
                            weapon.Get<Explosion>().learnedLevel = abilityLevel;
                            weapon.Get<Explosion>().damage = weapon.Get<Damage>().value / 10;
                            break;
                        case "addhealth":
                            player.Get<AddHealth>().learnedLevel = abilityLevel;
                            break;
                        case "addattackSpeed":
                            weapon.Get<AddAttackSpeed>().learnedLevel = abilityLevel;
                            break;
                        case "addchicken":
                            EcsEntity spawnAlly = _world.NewEntity();
                            spawnAlly.Get<SpawnAllyAbility>().learnedLevel = abilityLevel;
                            spawnAlly.Get<SpawnAllyAbility>().prefabNumber = 0;
                            break;
                        case "addpushbullets":
                            weapon.Get<Push>().level++;
                            weapon.Get<Push>().learnedLevel = abilityLevel;
                            break;
                    }

                }
                filter.GetEntity(i).Destroy();
            }
        }
    }
}