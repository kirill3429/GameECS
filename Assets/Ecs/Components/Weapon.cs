using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    struct Weapon
    {
        public AttackType attackType;
        public int projectilePrefabNumber;
        public float attackSpeed;
        public float reloadTime;
        public Transform weaponTransform;
        public Transform weaponSocket;
        public EcsEntity ownerEntity;
        public float magazineAmmo;
        public float currentAmmo;
    }
}