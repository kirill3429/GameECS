using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class EnemyMoveSystem : IEcsRunSystem
    {
        
        int horizontal = Animator.StringToHash("Horizontal");

        readonly EcsWorld _world = null;
        readonly EcsFilter<EnemyTag, InputHandlerComponent, Movable, RigidBodyComponent, AnimatorComponent> filter = null;


        void IEcsRunSystem.Run()
        {

            foreach (var i in filter)
            {
                ref var enemy = ref filter.Get1(i);
                ref var input = ref filter.Get2(i);
                ref var movable = ref filter.Get3(i);
                ref var rigidBody = ref filter.Get4(i);
                ref var animator = ref filter.Get5(i);

                if (movable.canMove)
                {
                    rigidBody.rigidBody.velocity = input.movementInput.normalized * movable.moveSpeed;
                }
                else rigidBody.rigidBody.velocity = Vector3.zero;

                if (movable.canRotate)
                {
                    enemy.enemyTransform.forward = input.movementInput;
                }

                if (animator.animator.GetCurrentAnimatorStateInfo(0).IsTag("attack"))
                {
                    movable.canMove = false;
                    movable.canRotate = false;
                }
                else
                {
                    movable.canMove = true;
                    movable.canRotate = true;
                }
            }
        }
    }
}