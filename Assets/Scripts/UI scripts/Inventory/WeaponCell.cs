using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class WeaponCell : ItemCell
{

    public float finalDamage;
    public float finalAttackSpeed;
    public float finalDmgMultiplier;
    public float finalDmgChance;

    public override void ItemInit(AllPrefabsData allPrefabsData)
    {
       
        WeaponInfoMono weaponInfo = allPrefabsData.weaponPrefabs[PrefabNumber].GetComponent<WeaponInfoMono>();
        finalDamage = FinalValue(weaponInfo.damage);
        finalAttackSpeed = FinalValue(weaponInfo.delayBetweenAttack);
        finalDmgMultiplier = FinalValue(weaponInfo.criticalDamageMultiplier);
        finalDmgChance = FinalValue(weaponInfo.criticalDamageChance);
    }


    public override void ShowInfo(GameObject uiWindow, GameObject statPrefab)
    {
        
        Debug.Log("WeaponCellShowInfo");

        StatsHolder = uiWindow.transform.Find("ItemInfo");
        Debug.Log("StatsHolder was founded");
        TMP_Text emptyObject = statPrefab.GetComponent<TMP_Text>();
        TMP_Text nameField = GameObject.Instantiate(emptyObject, StatsHolder);
        TMP_Text damageField = GameObject.Instantiate(emptyObject, StatsHolder);
        TMP_Text levelField = GameObject.Instantiate(emptyObject, StatsHolder);
        TMP_Text attackSpeedField = GameObject.Instantiate(emptyObject, StatsHolder);
        TMP_Text criticalDamageMultiplierField = GameObject.Instantiate(emptyObject, StatsHolder);
        TMP_Text criticalDamageChanceField = GameObject.Instantiate(emptyObject, StatsHolder);

        

        nameField.text = "Название " + Name;
        nameField.color = Color.red;
        damageField.text = "Урон " + finalDamage.ToString();
        levelField.text = "Уровень " + Level.ToString();
        attackSpeedField.text = "Скорость атаки " + System.Math.Round(finalAttackSpeed, 2).ToString();
        criticalDamageMultiplierField.text = "Множитель крит. урона " + finalDmgMultiplier.ToString();
        criticalDamageChanceField.text = "Шанс крит. атаки " + finalDmgChance.ToString();
    }

    private float FinalValue(float stat)
    {
        stat += stat * Level * 0.1f;
        return stat;
    }

}
