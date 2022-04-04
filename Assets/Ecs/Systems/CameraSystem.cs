using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class CameraSystem : IEcsRunSystem
    {

        readonly EcsWorld _world = null;
        readonly EcsFilter<Camera> cameraFilter = null;
        readonly EcsFilter<PlayerTag> playerFilter = null;
        Vector3 mouseInput;
        void IEcsRunSystem.Run()
        {
            foreach (var i in playerFilter)
            {
                mouseInput = playerFilter.GetEntity(i).Get<InputHandlerComponent>().mouse;
            }
            foreach (var i in cameraFilter)
            {
                ref var camera = ref cameraFilter.Get1(i);

                Vector3 targetPos = (camera.playerTransform.position + mouseInput) / 2;

                targetPos.x = Mathf.Clamp(targetPos.x, -camera.threshold + camera.playerTransform.position.x, camera.threshold + camera.playerTransform.position.x);
                targetPos.z = Mathf.Clamp(targetPos.z, -camera.threshold + camera.playerTransform.position.z, camera.threshold + camera.playerTransform.position.z);

                camera.targetTransform.position = targetPos;
            }
        }
    }
}