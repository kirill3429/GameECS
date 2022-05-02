using Leopotam.Ecs;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;

namespace Client
{
    sealed class EnemyPrefabsInitSystem : IEcsInitSystem
    {
        readonly AllWaveData allWaveData;
        readonly EcsWorld world = null;

        public void Init()
        {
            int levelNumber = PlayerPrefs.GetInt("LevelNumber");
            string monsterSet = PlayerPrefs.GetString("MonsterSet");

            WaveDataInit(levelNumber, monsterSet);
        }


        public void WaveDataInit(int levelNumber, string monsterSet)
        {
            allWaveData.waves.Clear();

            string[] monsterStringArray = monsterSet.Trim().Split(" ");
            List<int> monsterArray = new List<int>();

            foreach (string str in monsterStringArray)
            {
                monsterArray.Add(Convert.ToInt32(str));
            }

            for (int i = 0; i < 20; i++)
            {
                allWaveData.waves.Add(ScriptableObject.CreateInstance<WaveData>());
                allWaveData.waves[i].waveInfo = new Dictionary<int, int>();

                foreach(int monsterNum in monsterArray)
                {
                    allWaveData.waves[i].waveInfo.Add(monsterNum, 30 + i * 5);
                }
            }
        }
    }
}



