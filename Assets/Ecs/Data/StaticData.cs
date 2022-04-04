using UnityEngine;

[CreateAssetMenu]
public class StaticData : ScriptableObject
{
    public float playerMoveSpeed;
    public float threshold;
    public LayerMask layerMask;
    public GameObject[] bulletPrefabs;
}
