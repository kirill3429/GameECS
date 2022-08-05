using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class AllySpawnSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly StaticPlayerData staticPlayerData;
        readonly AllPrefabsData prefabsData;
        readonly EcsWorld world = null;
        readonly EcsFilter<AllySpawnEvent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var eventInfo = ref filter.Get1(i);
                EcsEntity allyEntity = world.NewEntity();
                ref var input = ref allyEntity.Get<InputHandlerComponent>();
                ref var objectLink = ref allyEntity.Get<ObjectLink>();
                ref var equip = ref allyEntity.Get<Equipment>();
                ref var moveable = ref allyEntity.Get<Movable>();
                ref var animator = ref allyEntity.Get<AnimatorComponent>();
                ref var allyTag = ref allyEntity.Get<AllyTag>();
                ref var transform = ref allyEntity.Get<TransformComponent>();
                ref var rigidBody = ref allyEntity.Get<RigidBodyComponent>();


                Quaternion rotationSpawn = new Quaternion();

                objectLink.Object = GameObject.Instantiate(prefabsData.alliesPrefabs[eventInfo.prefabNumber], eventInfo.spawnPoint, rotationSpawn);
                objectLink.Object.GetComponent<EntityLink>().entity = allyEntity;
                var enemyInfo = objectLink.Object.GetComponent<AllyInfo>();

      
                rigidBody.rigidBody = objectLink.Object.GetComponent<Rigidbody>();
                animator.animator = objectLink.Object.GetComponent<Animator>();
                moveable.moveSpeed = enemyInfo.moveSpeed;
                moveable.defaultMoveSpeed = moveable.moveSpeed;
                moveable.canRotate = true;
                moveable.canMove = true;
                transform.transform = objectLink.Object.transform;


                equip.mainWeapon = world.NewEntity();
                ref var weapon = ref equip.mainWeapon.Get<Weapon>();
                ref var damage = ref equip.mainWeapon.Get<Damage>();
                weapon.weaponType = enemyInfo.weaponType;
                weapon.weaponTransform = objectLink.Object.transform.Find("weaponTransform");
                weapon.weaponSocket = weapon.weaponTransform;
                weapon.projectilePrefabNumber = enemyInfo.projectilePrefabNumber;
                weapon.bulletSpeed = enemyInfo.bulletSpeed;
                weapon.delayBetweenAttack = enemyInfo.delayBetweenAttack;
                weapon.projectileLifeTime = enemyInfo.projectileLifeTime;
                damage.value = enemyInfo.damage;

                allyTag.targetCollider = new Collider[5];
                allyTag.layerMask = staticPlayerData.layerMaskForAlly;

                filter.GetEntity(i).Destroy();
            }
        }
 

    }
}

