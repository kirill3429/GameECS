using Client;
using Leopotam.Ecs;
using UnityEngine;

public class GiveFireAttack : MonoBehaviour
{
    private void Start()
    {
        GetComponent<EntityLink>().entity.Get<Equipment>().mainWeapon.Get<Fire>().level = 2;
        GetComponent<EntityLink>().entity.Get<Equipment>().mainWeapon.Get<Fire>().learnedLevel = 1;
    }
}
