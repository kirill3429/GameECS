using UnityEngine;

[CreateAssetMenu]
public class StaticPlayerData : ScriptableObject
{
    public float playerMoveSpeed;
    public float thresholdCamera;

    public float enemySpawnRadius;
    public int maxEnemies;
    public LayerMask layerMask;
    public float spawnDispersion;

    public float timeBetweenWaves;

    public GameObject NewAbilityWindow;
}
