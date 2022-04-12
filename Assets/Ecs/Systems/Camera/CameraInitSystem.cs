using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class CameraInitSystem : IEcsInitSystem
    {
        readonly StaticPlayerData staticData;
        readonly EcsWorld world = null;

        public void Init()
        {
            var cameraEntity = world.NewEntity();
            ref var camera = ref cameraEntity.Get<Camera>();
            
            camera.cameraTransform = GameObject.FindGameObjectWithTag("MainCamera").transform;
            camera.targetTransform = GameObject.FindGameObjectWithTag("CameraTarget").transform;
            camera.playerTransform = GameObject.FindGameObjectWithTag("Player").transform;
            camera.threshold = staticData.threshold;
        }
    }
}



