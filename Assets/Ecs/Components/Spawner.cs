using UnityEngine;
namespace Client
{
    struct Spawner
    {
        public Transform playerTransform;
        public int currentEnemies;
        public int maxEnemies;
        public bool isWork;
        public int spawnDelay;
    }
}