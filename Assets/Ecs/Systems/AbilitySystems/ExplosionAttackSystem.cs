using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class ExplosionAttackSystem : IEcsRunSystem
    {

        readonly EcsWorld _world = null;
        readonly EcsFilter<Explosion, EnemyTag> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var enemy = ref filter.GetEntity(i);
                ref var explosion = ref filter.Get1(i);
                ref var enemyGO = ref enemy.Get<ObjectLink>().Object;

                Collider[] hitColliders = Physics.OverlapSphere(enemyGO.transform.position, 4);
                

                foreach (var j in hitColliders)
                {
                    if (j.gameObject.TryGetComponent(out EntityLink link))
                    {
                        link.entity.Get<TakeDamage>().value += explosion.damage + 0.1f * explosion.level;
                    }
                }

            }
        }
    }
}