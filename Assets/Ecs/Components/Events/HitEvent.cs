using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    struct HitEvent
    {
        public EcsEntity hittedEntity;
        public EcsEntity bulletEntity;
        public Vector3 hitDirection;
        public GameObject hittedObject;
    }
}