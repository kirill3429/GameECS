using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class LevelInitSystem : IEcsInitSystem
    {
        readonly TerrainMaterialsData terrainMaterialsData;
        private RuntimeData runtimeData;
        readonly EcsWorld world = null;

        public void Init()
        {
            Terrain terrain = GameObject.FindGameObjectWithTag("Ground").GetComponent<Terrain>();
            int materialNum = PlayerPrefs.GetInt("LevelGround");
            int levelNumber = PlayerPrefs.GetInt("LevelNumber");

            Debug.Log("Уровень загружен, материал пола: " + materialNum);
            Debug.Log("Уровень : " + levelNumber);

            terrain.materialTemplate = terrainMaterialsData.materials[materialNum];
            runtimeData.waveNumber = levelNumber;

        }
    }
}



