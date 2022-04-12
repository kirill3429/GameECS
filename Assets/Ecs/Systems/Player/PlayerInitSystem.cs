using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class PlayerInitSystem : IEcsInitSystem
    {
        AllPrefabsData prefabsData;
        readonly StaticPlayerData staticData;
        readonly EcsWorld world = null;

        public void Init()
        {

            EcsEntity playerEntity = world.NewEntity();
            ref var player = ref playerEntity.Get<PlayerTag>();
            ref var move = ref playerEntity.Get<Movable>();
            ref var input = ref playerEntity.Get<InputHandlerComponent>();
            ref var animator = ref playerEntity.Get<AnimatorComponent>();
            ref var objectLink = ref playerEntity.Get<ObjectLink>();
            ref var equipment = ref playerEntity.Get<Equipment>();
            ref var health = ref playerEntity.Get<Health>();
            ref var hitEffect = ref playerEntity.Get<HitEffect>();

            objectLink.Object = GameObject.FindGameObjectWithTag("Player");
            objectLink.Object.AddComponent<EntityLink>().entity = playerEntity;
            equipment.weaponHolder = objectLink.Object.GetComponent<WeaponHolder>().weaponTransform;
            animator.animator = objectLink.Object.GetComponent<Animator>();
            player.transform = objectLink.Object.transform;
            move.moveSpeed = staticData.playerMoveSpeed;
            health.currentHealth = 1000;
            hitEffect.hitPrefab = prefabsData.hitEffectPrefabs[0];

        }
    }
}



