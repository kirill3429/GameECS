using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class EnemySpawnEventGenerator : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly StaticPlayerData staticPlayerData;
        readonly EcsWorld world = null;
        readonly EcsFilter<Spawner> filter = null;


        public void Run()
        {
            foreach (var i in filter)
            {
                ref var spawner = ref filter.Get1(i);

                if (spawner.isWork == true)
                {
                    if (spawner.creepsQueue.Count == 0 && spawner.currentEnemies == 0)
                    {
                        spawner.isWork = false;
                        spawner.endWaveTime = Time.time;
                        world.NewEntity().Get<OpenAbilityWindowEvent>();
                        continue;
                    }

                    if (spawner.currentEnemies < spawner.maxEnemies && spawner.creepsQueue.Count != 0)
                    {
                        int creepToSpawn = spawner.creepsQueue.Dequeue();
                        ref var spawnEvent = ref world.NewEntity().Get<EnemySpawnEvent>();

                        if (runtimeData.waveNumber % 10 == 0)
                            spawnEvent.creepType = CreepType.Boss;
                        else
                            spawnEvent.creepType = CreepType.Creep;

                        #region spawnPoint
                        ref var radius = ref staticPlayerData.enemySpawnRadius;
                        float x0 = spawner.playerTransform.position.x;
                        float z0 = spawner.playerTransform.position.z;

                        Vector3 spawnPoint = new Vector3();
                       

                        float alpha = Random.Range(0, 360);

                        float delta = Random.Range(0, staticPlayerData.spawnDispersion);

                        spawnPoint.x = x0 + ((radius + delta) * Mathf.Cos(ToRadians(alpha)));
                        spawnPoint.z = z0 + ((radius + delta) * Mathf.Sin(ToRadians(alpha)));
                        spawnPoint.y = 0;
                        #endregion

                        spawnEvent.spawnPoint = spawnPoint;
                        spawnEvent.prefabNumber = creepToSpawn;
                    }
                }
            }

        }
        private static float ToRadians(float angle)
        {
            return angle * Mathf.PI / 180;
        }

    }
}

