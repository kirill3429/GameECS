using Client;
using Leopotam.Ecs;
using UnityEngine;

public class GiveShift : MonoBehaviour
{
    public float cooldown = 10;
    private void Start()
    {
        GetComponent<EntityLink>().entity.Get<BossShiftTag>().cooldown = cooldown;
    }
}
