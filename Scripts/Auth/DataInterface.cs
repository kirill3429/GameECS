using UnityEngine;
using System.Runtime.InteropServices;
public class DataInterface : MonoBehaviour
{
    private bool auth;
    public YandexSDK yandexSDK;
    private void PreInit()
    {
        yandexSDK.AuthSuccess += YandexSDK_AuthSuccess; ;
    }

    private void YandexSDK_AuthSuccess()
    {
        auth = true;
    }

    public void SetActiveWeapon(string activeWeapon)
    {
        PlayerPrefs.SetString("ActiveWeapon", activeWeapon);
    }

    public void SaveWeapons(string stringToSave)
    {
        PlayerPrefs.SetString("Weapons", stringToSave);
    }
    public void SaveLearnedSkills(string stringToSave)
    {
        PlayerPrefs.SetString("LearnedSkills", stringToSave);
    }

    public string GetInventoryWeapons()
    {
        return PlayerPrefs.GetString("Weapons");
    }
    public string GetActiveWeapon()
    {
        return PlayerPrefs.GetString("ActiveWeapon");
    }
    public string GetLearnedSkills()
    {
        return PlayerPrefs.GetString("LearnedSkills");
    }


    public int GetLastDailyGivenWeapon()
    {
        return PlayerPrefs.GetInt("LastWeapon");
    }
    
    public string GetPlayerCoins()
    {
        return PlayerPrefs.GetString("Coins");
    }

    public string GetLastEnter()
    {
        return PlayerPrefs.GetString("LastEnter");
    }

    public void SaveToServer()
    {
        if (auth)
        {

            UserGameData UGD = new UserGameData();

            UGD.Inventory = GetInventoryWeapons();
            UGD.ActiveWeapon = GetActiveWeapon();
            UGD.Coins = GetPlayerCoins();
            UGD.Abilities = GetLearnedSkills();
            UGD.LastEnter = GetLastEnter();

            yandexSDK.DataSet(JsonUtility.ToJson(UGD));

        }
    }

}
