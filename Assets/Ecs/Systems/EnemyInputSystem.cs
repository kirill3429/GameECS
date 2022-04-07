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

                Vector3 v3 = sceneData.playerTransform.position - enemyTransform.position;
                
                input.movementInput = v3;
                Vector3.Normalize(input.movementInput);

                #endregion



            }
        }

    }
}

