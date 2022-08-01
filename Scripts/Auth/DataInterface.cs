using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class DataInterface : MonoBehaviour
{

    public static string GetActiveWeapon()
    {
        return PlayerPrefs.GetString("ActiveWeapon");
    }

    public static void SetActiveWeapon(string activeWeapon)
    {
        PlayerPrefs.SetString("ActiveWeapon", activeWeapon);
    }

    public static void SaveWeapons(string stringToSave)
    {
        PlayerPrefs.SetString("Weapons", stringToSave);
    }
    public static void SaveLearnedSkills(string stringToSave)
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
        PlayerPrefs.SetInt("Score", GetPlayerScore() + Score);
    }
    public static string GetLearnedSkills()
    {
        return PlayerPrefs.GetString("LearnedSkills");
    }


    public static int GetPlayerScore()
    {
        return PlayerPrefs.GetInt("Score");
    }

    public static void SetPlayerScore(int score)
    {
        PlayerPrefs.SetInt("Score", score);
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

   

}
