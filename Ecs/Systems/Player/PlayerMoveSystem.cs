using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class PlayerMoveSystem : IEcsRunSystem
    {


        int horizontal = Animator.StringToHash("Horizontal");
        int vertical = Animator.StringToHash("Vertical");
        int inputMagnitude = Animator.StringToHash("InputMagnitude");

        readonly RuntimeData runtimeData;
        readonly EcsWorld _world = null;
        readonly EcsFilter<PlayerTag, InputHandlerComponent, Movable, AnimatorComponent> filter = null;


        void IEcsRunSystem.Run()
        {
            if (runtimeData.isPaused) return;

            foreach (var i in filter)
            {
                ref var player = ref filter.Get1(i);
                ref var input = ref filter.Get2(i);
                ref var movable = ref filter.Get3(i);
                ref var anim = ref filter.Get4(i);

                #region Moving
                float alpha = -player.transform.eulerAngles.y;
                alpha = ToRadians(alpha);

                movable.moveDirection.x = Mathf.Lerp(movable.moveDirection.x, input.horizontal * Mathf.Cos(alpha) + input.vertical * Mathf.Sin(alpha), 0.1f);
                movable.moveDirection.z = Mathf.Lerp(movable.moveDirection.z, -input.horizontal * Mathf.Sin(alpha) + input.vertical * Mathf.Cos(alpha), 0.1f);

                anim.animator.SetFloat(inputMagnitude, input.moveAmount);
                anim.animator.SetFloat(horizontal, movable.moveDirection.x * movable.moveSpeed);
                anim.animator.SetFloat(vertical, movable.moveDirection.z * movable.moveSpeed);


                #endregion

                #region Rotation
                if (Vector3.Distance(player.transform.position, input.mouse) > 0.5f)
                {
                    input.mouseVector = input.mouse - player.transform.position;
                    player.transform.forward = Vector3.ProjectOnPlane(input.mouseVector, Vector3.up);
                }
                Debug.DrawRay(player.transform.position, input.mouseVector);
                #endregion
            }

        }

        private static float ToRadians(float angle)
        {
            return angle * Mathf.PI / 180;
        }
    }
}