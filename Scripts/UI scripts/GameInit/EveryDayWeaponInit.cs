using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class EveryDayWeaponInit : MonoBehaviour
{
    private bool auth;
    private void Awake()
    {
        DateTime lastEnter = GetLastEnter();

        if (lastEnter != DateTime.Today)
        {
            //AddNextWeapon();
        }
    }

    private DateTime GetLastEnter()
    {
        if (auth)
        {
            // get from yandex
            return DateTime.Parse("form yandex");
        }
        else
        {
            string lastEnter = PlayerPrefs.GetString("LastEnter");
            return DateTime.Parse(lastEnter);
        }
    }



    //private void AddNextWeapon()
    //{
    //    int lastWeapon = GetLastWeapon();
    //    int nextWeapon = lastWeapon + 1;

    //    PlayerPrefs.SetString("Weapons", GetInventory() + nextWeapon.ToString());

    //}
}
