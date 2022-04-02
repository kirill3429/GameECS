using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    struct AttackEvent
    {
        public EcsEntity eventSender;
        public EcsEntity weapon;
        public Vector3 mousePos;
    }
    enum AttackType
    {
        melee,
        rangeProjectile,
        rangeRay
    }
}