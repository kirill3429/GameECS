using Client;
using Leopotam.Ecs;
using UnityEngine;

public class BossSpawnerStatus : MonoBehaviour
{
    public float cooldown;
    public int quantity;

    private void Start()
    {
        EcsEntity bossEntity = GetComponent<EntityLink>().entity;
        bossEntity.Get<BossCloneTag>().cooldown = cooldown;
        bossEntity.Get<BossCloneTag>().quantity = quantity;
        bossEntity.Get<BossCloneTag>().prefabNumber = Random.Range(0, 24);
    }
}
