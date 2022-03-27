using LeoEcsPhysics;
using Leopotam.Ecs;
using UnityEngine;


namespace Client
{
    sealed class EcsStartup : MonoBehaviour
    {
        EcsWorld _world;
        EcsSystems _systems;
        EcsSystems _fixedSystems;

        public SceneData sceneData;
        public StaticData staticData;
        void Start()
        {
            // void can be switched to IEnumerator for support coroutines.

            _world = new EcsWorld();
            _systems = new EcsSystems(_world);
            _fixedSystems = new EcsSystems(_world);
            EcsPhysicsEvents.ecsWorld = _world;
#if UNITY_EDITOR
            Leopotam.Ecs.UnityIntegration.EcsWorldObserver.Create(_world);
            Leopotam.Ecs.UnityIntegration.EcsSystemsObserver.Create(_systems);
            Leopotam.Ecs.UnityIntegration.EcsSystemsObserver.Create(_fixedSystems);
#endif
            _systems
                .Add(new WeaponInitSystem())
                .Add(new PlayerInitSystem())
                .Add(new PlayerInputSystem())
                .Add(new PlayerMoveSystem())
                .Add(new PickUpSystem())
                .Add(new WeaponGetSystem())

                .OneFramePhysics()

                // register one-frame components (order is important), for example:
                // .OneFrame<TestComponent1> ()
                // .OneFrame<TestComponent2> ()

                // inject service instances here (order doesn't important), for example:
                .Inject(sceneData)
                .Inject(staticData)

                // .Inject (new NavMeshSupport ())
                .Init();
            _fixedSystems


                .Init();
        }

        void Update()
        {
            _systems?.Run();
        }

        private void FixedUpdate()
        {
            _fixedSystems?.Run();
        }

        void OnDestroy()
        {
            {
                EcsPhysicsEvents.ecsWorld = null;
                _systems.Destroy();
                _fixedSystems.Destroy();
                _systems = null;
                _fixedSystems = null;
                _world.Destroy();
                _world = null;
            }
        }
    }
}