using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class EnemyInputMeleeSystem : IEcsRunSystem
    {
        readonly SceneData sceneData;
        readonly EcsWorld world = null;
        readonly EcsFilter<EnemyTag, InputHandlerComponent, TransformComponent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var enemyTransform = ref filter.Get3(i).transform;
                ref var input = ref filter.Get2(i);

                #region toPlayerPositionInput

                Vector3 playerDirection = sceneData.playerTransform.position - enemyTransform.position;

                input.movementInput = playerDirection;
                Vector3.Normalize(input.movementInput);

                #endregion

                input.mouseVector = input.movementInput + enemyTransform.position;
                input.mouseVector.z += 1.4f;

            }
        }

    }
}

