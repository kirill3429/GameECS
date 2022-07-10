using TMPro;
using UnityEngine.UI;
using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using System;

public class WeaponRewardBehavior : RewardBehavior
{
    private AllPrefabsData prefabsData;
    private int weaponPrefabNumber;
    private Image rewardIcon;

    public WeaponRewardBehavior(int prefabNumber, Image Icon)
    {
        weaponPrefabNumber = prefabNumber;
        rewardIcon = Icon;
    }

    public void GiveReward()
    {
        Show();
        DataInterface.AddWeapon(weaponPrefabNumber);
    }
    
    public void Show()
    {
        rewardIcon.sprite = prefabsData.weaponPrefabs[weaponPrefabNumber].GetComponent<WeaponInfoMono>().Icon;
    }

}
