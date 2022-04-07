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

                rigidBody.rigidBody.velocity = input.movementInput.normalized * movable.moveSpeed;
                enemy.enemyTransform.forward = input.movementInput;

            }
        }
    }
}