using Client;
using Leopotam.Ecs;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class RewardForBoss : MonoBehaviour
{
    public AllPrefabsData allPrefabsData;
    public Image rewardIcon;
    public Sprite scoreIcon;

    private void OnEnable()
    {
        var weapons = DataInterface.GetWeaponIDList();
        var activeWeapon = System.Convert.ToInt32(DataInterface.GetActiveWeapon());
        weapons.Add(activeWeapon);

        if (weapons.Count < 5)
        {
            rewardIcon.sprite = allPrefabsData.weaponPrefabs[weapons.Count + 1].GetComponent<WeaponInfoMono>().Icon;
            DataInterface.AddWeapon(weapons.Count + 1);
        }
        else
        {
            var world = GameObject.FindGameObjectWithTag("EcsStartUp").GetComponent<EcsStartup>()._world;
            world.NewEntity().Get<RewardEvent>().reward = 500;
            rewardIcon.sprite = scoreIcon;
        }

        StartCoroutine(Close());
        
    }

    private IEnumerator Close()
    {
        yield return new WaitForSeconds(4f);
        gameObject.SetActive(false);
    }
}
