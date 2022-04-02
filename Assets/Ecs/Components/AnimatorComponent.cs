using UnityEngine;

namespace Client
{
    struct AnimatorComponent
    {
        public Animator animator;
        public static int fireHash = Animator.StringToHash("Fire");
    }
}