using Leopotam.Ecs;

namespace Client
{
    sealed class EnemyInputRangeSystem : IEcsRunSystem
    {
        readonly SceneData sceneData;
        readonly EcsWorld world = null;
        readonly EcsFilter<EnemyTag, InputHandlerComponent, Range> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var enemyTransform = ref filter.Get1(i).enemyTransform;
                ref var input = ref filter.Get2(i);
                ref var range = ref filter.Get3(i);

                range.playerDirection = sceneData.playerTransform.position - enemyTransform.position;

                #region MoveInput
                if (range.playerDirection.magnitude > range.range)
                {
                    input.movementInput = range.playerDirection;
                }
                #endregion

                input.mouseVector = input.movementInput + enemyTransform.position;
                input.mouseVector.z += 1.4f;

            }
        }

    }


}

