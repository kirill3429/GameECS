using UnityEngine;

[CreateAssetMenu]
public class StaticPlayerData : ScriptableObject
{
    public float playerMoveSpeed;
    public float threshold;
    public float enemySpawnRadius;
    public int maxEnemies;
    public LayerMask layerMask;
}
