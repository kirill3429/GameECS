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
        public TerrainMaterialsData materialsData;
        public StaticPlayerData staticPlayerData;
        public AllPrefabsData prefabsData;
        public AllWaveData allWaveData;
        RuntimeData runtimeData = new RuntimeData();
        
        void Start()
        {
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
                .Add(new LevelInitSystem())
                .Add(new WeaponInitSystem())
                .Add(new PlayerInitSystem())
                .Add(new PlayerInputSystem())
                .Add(new PlayerMoveSystem())
                .Add(new PickUpSystem())
                .Add(new WeaponGetSystem())
                .Add(new EventGeneratorSystem())
                //.Add(new DropWeaponSystem())


                .Add(new CameraInitSystem())
                .Add(new CameraSystem())
                .Add(new EnemyPrefabsInitSystem())
                .Add(new SpawnerInitSystem())
                
                
                .Add(new EnemyInputSystem())
                .Add(new EnemyAttackChecker())

                .Add(new AttackSystem())
                .Add(new ProjectileSpawnSystem())

                .Add(new ProjectileHitEventSystem())
                .Add(new ProjectileHitSystem())


                .OneFramePhysics()

                // register one-frame components (order is important), for example:
                .OneFrame<HitEvent> ()
                .OneFrame<AttackEvent> ()
                //.OneFrame<WeaponDropEvent>()
                .OneFrame<SpawnProjectile> ()
                
                // .OneFrame<TestComponent2> ()

                // inject service instances here (order doesn't important), for example:
                .Inject(sceneData)
                .Inject(staticPlayerData)
                .Inject(prefabsData)
                .Inject(allWaveData)
                .Inject(runtimeData)
                .Inject(materialsData)
                

                // .Inject (new NavMeshSupport ())
                .Init();
            _fixedSystems


                
                .Add(new CurrentEnemiesUpdateSystem())
                .Add(new WaveManagerSystem())
                .Add(new QueueFillerSystem())
                
                //.Add(new SwitchWeaponSystem())
                .Add(new ProjectileMoveSystem())
                .Add(new EnemyMoveSystem())
                .Add(new EnemySpawnEventGenerator())
                .Add(new EnemySpawnSystem())
                .Add(new DeathSystem())
                .Add(new AvaibleSystem())

                //.OneFrame<SwitchWeaponEvent>()

                .OneFrame<EnemySpawnEvent>()
                .Inject(sceneData)
                .Inject(staticPlayerData)
                .Inject(prefabsData)
                .Inject(allWaveData)
                .Inject(runtimeData)

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