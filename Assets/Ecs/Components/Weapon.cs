using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    struct Weapon
    {
        public int projectilePrefabNumber;

        public float attackSpeed;
        public float delayBetweenAttack;
        public float reloadTime;
        public float lastAttack;
        public float projectileLifeTime;
        public float projectileStartTime;

        public Transform weaponTransform;
        public Transform weaponSocket;
        public EcsEntity ownerEntity;

        public float magazineAmmo;
        public float currentAmmo;
    }
}