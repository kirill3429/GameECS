using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    struct Weapon
    {
        public int projectilePrefabNumber;

        public float bulletSpeed;
        public float delayBetweenAttack;
        public float reloadTime;
        public float lastAttack;
        public float projectileLifeTime;
        public float projectileStartTime;
        public WeaponType weaponType;

        public Transform weaponTransform;
        public Transform weaponSocket;
        public AudioSource shotSound;
        public GameObject muzzleEffect;
        public EcsEntity ownerEntity;

    }

    public enum WeaponType
    {
        Simple,
        Shotgun,
        Flame
    }
}