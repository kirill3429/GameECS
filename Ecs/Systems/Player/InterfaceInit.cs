using Leopotam.Ecs;
using UnityEngine;
namespace Client
{
    sealed class InterfaceInit : IEcsInitSystem
    {
        readonly UI ui;
        readonly Agava.YandexGames.DeviceType device;
        readonly EcsWorld world = null;

        public void Init()
        {

            if (device == Agava.YandexGames.DeviceType.Mobile || device == Agava.YandexGames.DeviceType.Tablet)
            {
                ui.gameScreen = GameObject.FindGameObjectWithTag("MobileInterface").GetComponent<GameScreen>();
                GameObject.FindGameObjectWithTag("DesktopInterface").SetActive(false);
            }
            else
            {
                ui.gameScreen = GameObject.FindGameObjectWithTag("DesktopInterface").GetComponent<GameScreen>();
                GameObject.FindGameObjectWithTag("MobileInterface").SetActive(false);
            }

        }
    }
}



