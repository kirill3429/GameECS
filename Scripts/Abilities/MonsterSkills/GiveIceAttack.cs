using Client;
using Leopotam.Ecs;
using UnityEngine;

public class GiveIceAttack : MonoBehaviour
{
    private void Start()
    {
        GetComponent<EntityLink>().entity.Get<Equipment>().mainWeapon.Get<Ice>().level = 8;
        GetComponent<EntityLink>().entity.Get<Equipment>().mainWeapon.Get<Ice>().learnedLevel = 1;
    }
}
