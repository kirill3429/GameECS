using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class AlliesInputSystem : IEcsRunSystem
    {
        readonly SceneData sceneData;
        readonly EcsWorld _world = null;
        readonly EcsFilter<AllyTag,InputHandlerComponent, TransformComponent> filter = null;


        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var transform = ref filter.Get3(i).transform;
                ref var ally = ref filter.Get1(i);
                ref var input = ref filter.Get2(i);


                if (ally.target != null)
                {
                    input.movementInput = ally.target.position - transform.position;
                }

                else
                {
                    input.movementInput = sceneData.playerTransform.position + new Vector3(Random.Range(0,5), 0, Random.Range(0, 5)) - transform.position;
                }
                
                Vector3.Normalize(input.movementInput);
                input.mouseVector = input.movementInput;
                //input.mouseVector.z += 1.4f;
                
            }
        }
    }
}