using Leopotam.Ecs;
using UnityEngine;


namespace Client
{
    sealed class PlayerInputSystem : IEcsRunSystem
    {
        
        readonly Agava.YandexGames.DeviceType deviceType;
        readonly JoySticksMassive joySticksMassive;
        readonly SceneData sceneData;
        readonly UI ui;
        readonly StaticPlayerData staticData;
        readonly EcsWorld _world = null;
        readonly EcsFilter<InputHandlerComponent, PlayerTag> filter = null;
        void IEcsRunSystem.Run()
        {
            foreach (var i in filter)
            {
                ref var playerInput = ref filter.Get1(i);
                ref var player = ref filter.Get2(i);

                if (deviceType == Agava.YandexGames.DeviceType.Mobile || deviceType == Agava.YandexGames.DeviceType.Tablet)
                {
                    playerInput.horizontal = joySticksMassive.movementJoystick.Horizontal;
                    playerInput.vertical = joySticksMassive.movementJoystick.Vertical;
                    playerInput.movementInput = new Vector3(playerInput.horizontal, 0, playerInput.vertical);
                    playerInput.moveAmount = Mathf.Clamp01(Mathf.Abs(playerInput.horizontal) + Mathf.Abs(playerInput.vertical));

                    playerInput.attack = joySticksMassive.fireJoystick.IsDragging;
                    
                    playerInput.dash = ui.gameScreen.dash;

                    playerInput.mouse = player.transform.position + new Vector3(joySticksMassive.fireJoystick.Horizontal, 0, joySticksMassive.fireJoystick.Vertical) * 100;

                }

                else
                {
                    playerInput.horizontal = Input.GetAxisRaw("Horizontal");
                    playerInput.vertical = Input.GetAxisRaw("Vertical");

                    playerInput.movementInput = new Vector3(playerInput.horizontal, 0, playerInput.vertical);
                    playerInput.moveAmount = Mathf.Clamp01(Mathf.Abs(playerInput.horizontal) + Mathf.Abs(playerInput.vertical));

                    playerInput.attack = Input.GetMouseButton(0);
                    playerInput.pause = Input.GetKeyDown(KeyCode.Tab);
                    playerInput.dash = Input.GetKeyDown(KeyCode.Space);


                    Ray ray = sceneData.mainCamera.ScreenPointToRay(Input.mousePosition);
                    if (Physics.Raycast(ray, out var hit, 100, staticData.layerMask))
                    {
                        playerInput.mouse = hit.point;
                    };
                }
                

            }
        }
    }
}