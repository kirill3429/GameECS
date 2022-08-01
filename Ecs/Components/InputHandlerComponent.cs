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
        public bool dropWeapon;
        public bool pause;
        public bool dash;
        public Vector3 mouse;
        public Vector3 mouseVector;
        public Vector3 movementInput;

    }
}