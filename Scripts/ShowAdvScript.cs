using Agava.YandexGames;
using UnityEngine;

public class ShowAdvScript : MonoBehaviour
{

    private void OnEnable()
    {
        if (YandexGamesSdk.IsInitialized)
        InterstitialAd.Show();
    }
    private void OnDisable()
    {
        if (YandexGamesSdk.IsInitialized)
            InterstitialAd.Show();
    }
}
