using Leopotam.Ecs;
using System.Collections.Generic;

namespace Client
{
    sealed class EnemyPrefabsInitSystem : IEcsInitSystem
    {
        readonly AllWaveData allWaveData;
        readonly EcsWorld world = null;

        public void Init()
        {
            //allWaveData.waves[0].waveInfo = new Dictionary<int, int>();
            //allWaveData.waves[0].waveInfo.Add(0,10);
            //allWaveData.waves[0].waveInfo.Add(1,10);
            

        }
    }
}



