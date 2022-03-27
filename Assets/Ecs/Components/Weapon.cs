using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    struct Weapon
    {
        public Transform weaponTransform;
        public Transform bulletSocket;
        public EcsEntity ownerEntity;
        public float magazineAmmo;
        public float currentAmmo;
    }
}