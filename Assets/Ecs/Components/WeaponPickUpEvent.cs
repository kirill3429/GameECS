using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    struct WeaponPickUpEvent
    {
        public Transform WeaponTransform;
        public EcsEntity newOwnerEntity;
        public EcsEntity weaponEntity;
    }
}