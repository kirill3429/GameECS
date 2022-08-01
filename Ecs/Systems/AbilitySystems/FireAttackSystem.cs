using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class FireAttackSystem : IEcsRunSystem
    {
        readonly AllPrefabsData allPrefabsData;
        readonly EcsWorld _world = null;
        readonly EcsFilter<Fire>.Exclude<Weapon> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var fire = ref filter.Get1(i);
                ref var target = ref filter.GetEntity(i);

                if (Time.time - fire.burningStartTime < 20)
                {
                    if (Time.time - fire.lastDamageTime > 1)
                    {
                        GameObject.Instantiate(allPrefabsData.hitEffectPrefabs[2], target.Get<ObjectLink>().Object.transform);
                        target.Get<TakeDamage>().value += fire.level * fire.learnedLevel; // damage
                        fire.lastDamageTime = Time.time;
                    }
                }
                else
                {
                    filter.GetEntity(i).Del<Fire>();
                }

            }
        }
    }
}