using UnityEngine.UI;
using UnityEngine;
using Leopotam.Ecs;
using Client;

public class WeaponRewardBehavior : RewardBehavior
{
    private AllPrefabsData prefabsData;
    private int weaponPrefabNumber;
    private Image rewardIcon;

    public WeaponRewardBehavior(int prefabNumber, Image Icon)
    {
        weaponPrefabNumber = prefabNumber;
        rewardIcon = Icon;
        prefabsData = GameObject.FindGameObjectWithTag("EcsStartUp").GetComponent<EcsStartup>().prefabsData;
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
