using System.Collections.Generic;
using UnityEngine;
namespace Client
{
    struct Spawner
    {
        public Transform playerTransform;
        public int currentEnemies;
        public int maxEnemies;
        public bool isWork;
        public Queue<int> creepsQueue;
        public float endWaveTime;
    }
}