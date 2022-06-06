using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    public struct Equipment
    {
        public EcsEntity mainWeapon;
        public EcsEntity secondWeapon;
        public Transform weaponHolder;
    }

}