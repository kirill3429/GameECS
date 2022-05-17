using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    struct RicochetEvent
    {
        public EcsEntity bulletEntity;
        public GameObject hittedObject;
    }
}