using UnityEngine;

namespace Client
{
    struct InputHandlerComponent
    {
        public float horizontal;
        public float vertical;
        public float moveAmount;
        public bool shooting;
        public bool switchWeapon;
        public Vector3 mouse;
        public Vector2 movementInput;
        
    }
}