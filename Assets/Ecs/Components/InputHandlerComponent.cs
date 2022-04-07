using UnityEngine;

namespace Client
{
    struct InputHandlerComponent
    {
        public float horizontal;
        public float vertical;
        public float moveAmount;
        public bool attack;
        public bool switchWeapon;
        public Vector3 mouse;
        public Vector3 mouseDot;
        public Vector3 movementInput;
        
    }
}