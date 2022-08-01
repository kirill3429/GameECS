using Leopotam.Ecs;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Client
{
    sealed class EnemyPrefabsInitSystem : IEcsInitSystem
    {
        UI ui;
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

            for (int i = 0; i < monsterArray.Count; i++)
            {
                allWaveData.waves.Add(ScriptableObject.CreateInstance<WaveData>());
                allWaveData.waves[i].waveInfo = new Dictionary<int, int>();

                allWaveData.waves[i].waveInfo.Add(monsterArray[i], 50);
            }
        }
    }
}



