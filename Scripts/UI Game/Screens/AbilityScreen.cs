using Agava.YandexGames;
public class AbilityScreen : Client.Screen
{
    private void OnEnable()
    {
        if (YandexGamesSdk.IsInitialized)
        InterstitialAd.Show();
    }
}
