using Leopotam.Ecs;
using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    sealed class EnemyPrefabsInitSystem : IEcsInitSystem
    {
        readonly AllWaveData allWaveData;
        readonly EcsWorld world = null;

        public void Init()
        {
            allWaveData.waves.Clear();
            allWaveData.waves.Add(ScriptableObject.CreateInstance<WaveData>());
            allWaveData.waves[0].waveInfo = new Dictionary<int, int>();
            allWaveData.waves[0].waveInfo.Add(0, 50);
            allWaveData.waves[0].waveInfo.Add(1, 20);
            allWaveData.waves.Add(ScriptableObject.CreateInstance<WaveData>());
            allWaveData.waves[1].waveInfo = new Dictionary<int, int>();
            allWaveData.waves[1].waveInfo.Add(0, 10);
            allWaveData.waves[1].waveInfo.Add(1, 10);
            //allWaveData.waves[2].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[2].waveInfo.Add(0, 10);
            //allWaveData.waves[2].waveInfo.Add(1, 10);
            //allWaveData.waves[3].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[3].waveInfo.Add(0, 10);
            //allWaveData.waves[3].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[4].waveInfo.Add(0, 10);
            //allWaveData.waves[4].waveInfo.Add(1, 10);
            //allWaveData.waves[4].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[5].waveInfo.Add(0, 10);
            //allWaveData.waves[5].waveInfo.Add(1, 10);
            //allWaveData.waves[5].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[6].waveInfo.Add(0, 10);
            //allWaveData.waves[6].waveInfo.Add(1, 10);
            //allWaveData.waves[6].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[7].waveInfo.Add(0, 10);
            //allWaveData.waves[7].waveInfo.Add(1, 10);
            //allWaveData.waves[7].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[8].waveInfo.Add(0, 10);
            //allWaveData.waves[8].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[8].waveInfo.Add(0, 10);
            //allWaveData.waves[9].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[9].waveInfo.Add(0, 10);
            //allWaveData.waves[9].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[10].waveInfo.Add(0, 10);
            //allWaveData.waves[10].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[10].waveInfo.Add(0, 10);
            //allWaveData.waves[11].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[11].waveInfo.Add(0, 10);
            //allWaveData.waves[11].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[12].waveInfo.Add(0, 10);
            //allWaveData.waves[12].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[12].waveInfo.Add(0, 10);
            //allWaveData.waves[13].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[13].waveInfo.Add(0, 10);
            //allWaveData.waves[13].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[14].waveInfo.Add(0, 10);
            //allWaveData.waves[14].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[14].waveInfo.Add(0, 10);
            //allWaveData.waves[15].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[15].waveInfo.Add(0, 10);
            //allWaveData.waves[15].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[16].waveInfo.Add(0, 10);
            //allWaveData.waves[16].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[16].waveInfo.Add(0, 10);
            //allWaveData.waves[17].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[17].waveInfo.Add(0, 10);
            //allWaveData.waves[17].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[1].waveInfo.Add(0, 10);

            //allWaveData.waves[1].waveInfo.Add(1, 10);
            
        }
    }
}



