using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class EnemySpawnSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly StaticPlayerData staticPlayerData;
        readonly AllPrefabsData prefabsData;
        readonly EcsWorld world = null;
        readonly EcsFilter<EnemySpawnEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var eventInfo = ref filter.Get1(i);
                EcsEntity enemyEntity = world.NewEntity();
                ref var health = ref enemyEntity.Get<Health>();
                ref var reward = ref enemyEntity.Get<Reward>();
                ref var input = ref enemyEntity.Get<InputHandlerComponent>();
                ref var objectLink = ref enemyEntity.Get<ObjectLink>();
                ref var equip = ref enemyEntity.Get<Equipment>();
                ref var moveable = ref enemyEntity.Get<Movable>();
                ref var animator = ref enemyEntity.Get<AnimatorComponent>();
                ref var enemyTag = ref enemyEntity.Get<EnemyTag>();
                ref var transform = ref enemyEntity.Get<TransformComponent>();
                ref var rigidBody = ref enemyEntity.Get<RigidBodyComponent>();
                ref var hitEffect = ref enemyEntity.Get<HitEffect>();


                Quaternion rotationSpawn = new Quaternion();

                if (eventInfo.creepType == CreepType.Creep)
                {
                    objectLink.Object = GameObject.Instantiate(prefabsData.enemiesPrefabs[eventInfo.prefabNumber], eventInfo.spawnPoint, rotationSpawn);
                }
                else if (eventInfo.creepType == CreepType.Boss)
                {
                    objectLink.Object = GameObject.Instantiate(prefabsData.bossPrefabs[eventInfo.prefabNumber], eventInfo.spawnPoint, rotationSpawn);
                    enemyEntity.Get<BossTag>();
                }

                
                objectLink.Object.GetComponent<EntityLink>().entity = enemyEntity;
                var enemyInfo = objectLink.Object.GetComponent<EnemyInfo>();

                reward.reward = enemyInfo.reward;
                rigidBody.rigidBody = objectLink.Object.GetComponent<Rigidbody>();
                animator.animator = objectLink.Object.GetComponent<Animator>();
                moveable.moveSpeed = enemyInfo.moveSpeed + enemyInfo.moveSpeedProgress * runtimeData.waveNumber;
                moveable.defaultMoveSpeed = moveable.moveSpeed;
                moveable.canRotate = true;
                moveable.canMove = true;
                health.maxHealth = enemyInfo.health + enemyInfo.healthProgress * runtimeData.waveNumber;
                health.currentHealth = health.maxHealth;
                transform.transform = objectLink.Object.transform;



                hitEffect.hitPrefab = prefabsData.hitEffectPrefabs[0];

                equip.mainWeapon = world.NewEntity();
                ref var weapon = ref equip.mainWeapon.Get<Weapon>();
                ref var damage = ref equip.mainWeapon.Get<Damage>();
                weapon.weaponType = enemyInfo.weaponType;
                weapon.weaponTransform = objectLink.Object.transform.Find("weaponTransform");
                weapon.weaponSocket = weapon.weaponTransform;
                weapon.projectilePrefabNumber = enemyInfo.projectilePrefabNumber;
                weapon.bulletSpeed = enemyInfo.bulletSpeed + enemyInfo.bulletSpeedProgress * runtimeData.waveNumber;
                weapon.delayBetweenAttack = enemyInfo.delayBetweenAttack + enemyInfo.bulletSpeedProgress * runtimeData.waveNumber;
                weapon.projectileLifeTime = enemyInfo.projectileLifeTime;
                damage.value = enemyInfo.damage + enemyInfo.damageProgress * runtimeData.waveNumber;


            }
        }
 

    }
}

