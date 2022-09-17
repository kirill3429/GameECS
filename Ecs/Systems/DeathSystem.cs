using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    public sealed class DeathSystem : IEcsRunSystem
    {
        readonly RuntimeData runtimeData;
        readonly UI ui;
        readonly EcsWorld world = null;
        readonly EcsFilter<DeathEvent, EnemyTag> enemyFilter = null;
        readonly EcsFilter<DeathEvent, Projectile> projectileFilter = null;
        readonly EcsFilter<DeathEvent, PlayerTag> playerFilter = null;
        public void Run()
        {
            foreach (var i in projectileFilter)
            {
                ref var objectToDeath = ref projectileFilter.GetEntity(i).Get<ObjectLink>().Object;
                GameObject.Destroy(objectToDeath);
                projectileFilter.GetEntity(i).Destroy();

            }
            foreach (var i in enemyFilter)
            {
                if (enemyFilter.GetEntity(i).Has<BossTag>())
                {
                    ui.gameScreen.rewardForBoss.gameObject.SetActive(true);
                }
                ref var objectToDeath = ref enemyFilter.GetEntity(i).Get<ObjectLink>().Object;
                if (enemyFilter.GetEntity(i).Has<Equipment>())
                {
                    enemyFilter.GetEntity(i).Get<Equipment>().mainWeapon.Destroy();
                }
                
                world.NewEntity().Get<RewardEvent>().reward = enemyFilter.GetEntity(i).Get<Reward>().reward;
                GameObject.Destroy(objectToDeath);
                enemyFilter.GetEntity(i).Destroy();

            }
            foreach (var i in playerFilter)
            {
                runtimeData.gameState = GameState.GameOver;
                world.NewEntity().Get<PauseEvent>();
                playerFilter.GetEntity(i).Del<DeathEvent>();
            }
        }
    }
}



