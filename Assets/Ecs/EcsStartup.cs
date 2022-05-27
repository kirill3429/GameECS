using LeoEcsPhysics;
using Leopotam.Ecs;
using UnityEngine;


namespace Client
{
    sealed class EcsStartup : MonoBehaviour
    {
        public EcsWorld _world;
        EcsSystems _systems;
        EcsSystems _abilitySystems;
        EcsSystems _fixedSystems;

        public SceneData sceneData;
        public TerrainMaterialsData materialsData;
        public StaticPlayerData staticPlayerData;
        public AllPrefabsData prefabsData;
        public AllWaveData allWaveData;
        public UI ui;
        public RuntimeData runtimeData = new RuntimeData();
        
        void Start()
        {
            runtimeData.gameState = GameState.Running;
            _world = new EcsWorld();
            _systems = new EcsSystems(_world);
            _abilitySystems = new EcsSystems(_world);
            _fixedSystems = new EcsSystems(_world);
            EcsPhysicsEvents.ecsWorld = _world;
#if UNITY_EDITOR
            Leopotam.Ecs.UnityIntegration.EcsWorldObserver.Create(_world);
            Leopotam.Ecs.UnityIntegration.EcsSystemsObserver.Create(_systems);
            Leopotam.Ecs.UnityIntegration.EcsSystemsObserver.Create(_abilitySystems);
            Leopotam.Ecs.UnityIntegration.EcsSystemsObserver.Create(_fixedSystems);
#endif
            _systems
                .Add(new LevelInitSystem())
                
                .Add(new PlayerInitSystem())
                
                .Add(new PlayerInputSystem())
                .Add(new PlayerMoveSystem())
                
                .Add(new PickUpSystem())

                .Add(new EventGeneratorSystem())
                .Add(new CameraInitSystem())
                .Add(new CameraSystem())
                .Add(new EnemyPrefabsInitSystem())
                .Add(new SpawnerInitSystem())
                .Add(new EnemyInputMeleeSystem())
                .Add(new EnemyMeleeAttackChecker())
                .Add(new AttackSystem())
                .Add(new ProjectileSpawnSystem())
                .Add(new ProjectileHitEventSystem())
                .Add(new ProjectileHitSystem())
                .Add(new TakeDamageSystem())
                
                .Add(new DashInputSystem())
                
                .Add(new RewardSystem())
                
                .Add(new OpenAbilityWindowSystem())
                .Add(new PauseSystem())

                .OneFramePhysics()

                .OneFrame<HitEvent>()
                .OneFrame<AttackEvent>()
                .OneFrame<SpawnProjectile>()

                .Inject(sceneData)
                .Inject(staticPlayerData)
                .Inject(prefabsData)
                .Inject(allWaveData)
                .Inject(runtimeData)
                .Inject(materialsData)
                .Inject(ui)
                .Init();

            _abilitySystems
                .Add(new AddDamageSystem())
                .Add(new FireAttackSystem())
                .Add(new IceAttackSystem())
                .Add(new ExplosionAttackSystem())
                .Add(new LifestealAttackSystem())
                .Add(new AddHealthSystem())
                .Add(new RicochetSystem())
                .Inject(ui)
                .Inject(prefabsData)
                .Init();

            _fixedSystems
                .Add(new HealSystem())
                .Add(new DeathSystem())
                .Add(new DashSystem())
                .Add(new CurrentEnemiesUpdateSystem())
                .Add(new WaveManagerSystem())
                .Add(new QueueFillerSystem())
                .Add(new ProjectileMoveSystem())
                .Add(new EnemyMoveSystem())
                .Add(new EnemySpawnEventGenerator())
                .Add(new EnemySpawnSystem())
                .Add(new AvaibleSystem())
                .Add(new WeaponGetSystem())
                .Add(new AbilityAddSystem())
                .Add(new WeaponInitSystem())
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
            _abilitySystems?.Run();
            _fixedSystems?.Run();
        }

        void OnDestroy()
        {
            {
                EcsPhysicsEvents.ecsWorld = null;
                _systems.Destroy();
                _fixedSystems.Destroy();
                _abilitySystems.Destroy();
                _systems = null;
                _fixedSystems = null;
                _abilitySystems = null;
                _world.Destroy();
                _world = null;
            }
        }
    }
}