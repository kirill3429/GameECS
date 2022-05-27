using UnityEngine;

namespace Client
{
    struct Movable
    {
        public Vector3 moveDirection;
        public float moveSpeed;
        public float defaultMoveSpeed;
        public bool canRotate;
        public bool canMove;
    }
}