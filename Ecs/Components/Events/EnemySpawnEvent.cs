using UnityEngine;
namespace Client
{
    struct EnemySpawnEvent
    {
        public Vector3 spawnPoint;
        public CreepType creepType;
        public int prefabNumber;
    }

    public enum CreepType
    {
        Boss,
        Creep
    }
}