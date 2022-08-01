using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class DashInputSystem : IEcsRunSystem
    {
        readonly UI ui;
        float lastDashTime;
        bool dashReady;
        float dashCooldown = 5f;
        readonly EcsWorld world = null;
        readonly EcsFilter<InputHandlerComponent> filter = null;
        public void Run()
        {
            foreach (var i in filter)
            {
                ref var input = ref filter.Get1(i);
                ref var inputEntity = ref filter.GetEntity(i);

                float timePast = Time.time - lastDashTime;


                if (timePast > dashCooldown)
                {
                    if (input.dash && input.movementInput != Vector3.zero)
                    {
                        inputEntity.Get<DashEvent>().point = inputEntity.Get<PlayerTag>().transform.position + input.movementInput * 5;
                        lastDashTime = Time.time;
                        inputEntity.Get<DashEvent>().dashTimeStamp = lastDashTime;
                        ui.gameScreen.dashImage.fillAmount = timePast / dashCooldown;
                    }
                }
                else
                {
                    ui.gameScreen.dashImage.fillAmount = timePast / dashCooldown;
                }

            }
        }

    }
}

