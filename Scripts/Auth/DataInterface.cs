using UnityEngine;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System;
using System.Linq;

public class DataInterface : MonoBehaviour
{
    private static bool auth;
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

    public static void SaveWeapons(string stringToSave)
    {
        PlayerPrefs.SetString("Weapons", stringToSave);
    }
    public void SaveLearnedSkills(string stringToSave)
    {
        PlayerPrefs.SetString("LearnedSkills", stringToSave);
    }

    public static string GetInventoryWeapons()
    {
        return PlayerPrefs.GetString("Weapons");
    }

    public static List<int> GetWeaponIDList()
    {
        return ConvertStringToList(GetInventoryWeapons());
    }
    private static List<int> ConvertStringToList(string weaponString)
    {
        List<string> stringWeaponList = weaponString.Split("-").ToList();
        List<int> weaponIDList = new List<int>(stringWeaponList.Where(id => id != "").Select(id => Convert.ToInt32(id)));
        return weaponIDList;
    }

    public static void AddWeapon(int weapon)
    {
        SaveWeapons(GetInventoryWeapons() + weapon.ToString() + "-");
    }

    public static void AddScore(int Score)
    {
        PlayerPrefs.SetInt("Score",GetPlayerScore() + Score); 
    }
    public string GetActiveWeapon()
    {
        return PlayerPrefs.GetString("ActiveWeapon");
    }
    public string GetLearnedSkills()
    {
        return PlayerPrefs.GetString("LearnedSkills");
    }

    
    public static int GetPlayerScore()
    {
        return PlayerPrefs.GetInt("Score");
    }


    public string GetLastEnter()
    {
        return PlayerPrefs.GetString("LastEnter");
    }

    public static int GetLastLevel()
    {
        return PlayerPrefs.GetInt("lastLevel");
    }
    public static void SetLastLevel(int level)
    {
        PlayerPrefs.SetInt("lastLevel", level);
    }

    public void SaveToServer()
    {
        if (auth)
        {

            UserGameData UGD = new UserGameData();

            UGD.Inventory = GetInventoryWeapons();
            UGD.ActiveWeapon = GetActiveWeapon();
            UGD.Coins = GetPlayerScore().ToString();
            UGD.Abilities = GetLearnedSkills();
            UGD.LastEnter = GetLastEnter();

            yandexSDK.DataSet(JsonUtility.ToJson(UGD));

        }
    }

}
