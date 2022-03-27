using Leopotam.Ecs;
using UnityEngine;

namespace Client
{
    sealed class PlayerInputSystem : IEcsRunSystem
    {

        readonly SceneData sceneData;
        readonly StaticData staticData;
        readonly EcsWorld _world = null;
        readonly EcsFilter<InputHandlerComponent, PlayerTag> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var playerInput = ref filter.Get1(i);

                playerInput.horizontal = Input.GetAxisRaw("Horizontal");
                playerInput.vertical = Input.GetAxisRaw("Vertical");
                playerInput.movementInput = new Vector2(playerInput.horizontal, playerInput.vertical);
                playerInput.moveAmount = Mathf.Clamp01(Mathf.Abs(playerInput.horizontal) + Mathf.Abs(playerInput.vertical));

                playerInput.shooting = Input.GetMouseButtonDown(0);
                playerInput.switchWeapon = Input.GetKeyDown(KeyCode.Q);

                Ray ray = sceneData.mainCamera.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(ray, out var hit, 100, staticData.layerMask))
                {
                    playerInput.mouse = hit.point;
                };

            }
        }
    }
}