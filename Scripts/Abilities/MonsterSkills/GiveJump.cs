using Client;
using Leopotam.Ecs;
using UnityEngine;

public class GiveJump : MonoBehaviour
{
    public int JumpLevel;
    private void Start()
    {
        GetComponent<EntityLink>().entity.Get<Jump>().level = JumpLevel;
        GetComponent<EntityLink>().entity.Get<Jump>().jumpCooldown = 3;
    }
}
