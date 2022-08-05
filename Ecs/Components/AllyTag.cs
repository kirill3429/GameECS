using UnityEngine;
namespace Client
{
    struct AllyTag
    {
        public int allyPrefabNumber;
        public Transform target;
        public Collider[] targetCollider;
        public LayerMask layerMask;
    }
}