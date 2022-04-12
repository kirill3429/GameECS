using UnityEngine;
using Leopotam.Ecs;

namespace Client
{
    sealed class EnemyInputSystem : IEcsRunSystem
    {
        readonly SceneData sceneData;
        readonly EcsWorld world = null;
        readonly EcsFilter<EnemyTag, InputHandlerComponent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var enemyTransform = ref filter.Get1(i).enemyTransform;
                ref var input = ref filter.Get2(i);

                #region moveToPlayerInput

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

