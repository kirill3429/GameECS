
using UnityEngine;

public class EnemyInfo : MonoBehaviour
{
    public int reward;

    public float moveSpeed;
    public float health;
    public float damage;
    public float delayBetweenAttack;
    public float projectileLifeTime;
    public float bulletSpeed;
    public int projectilePrefabNumber;

    public float moveSpeedProgress;
    public float healthProgress;
    public float damageProgress;
    public float delayBetweenAttackProgress;
    public float bulletSpeedProgress;
    public EnemyType enemyType;
    public enum EnemyType
    {
        Range,
        Melee
    }

}
