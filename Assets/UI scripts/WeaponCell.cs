using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class WeaponCell : ItemCell, IWeaponItem
{
    public readonly AllPrefabsData AllPrefabsData;
    public int Damage { get { return _damage; } set { _damage = value; } }
    public float AttackSpeed { get { return _attackSpeed; } set { _attackSpeed = value; } }
    public float ReloadSpeed { get { return _reloadSpeed; } set { _reloadSpeed = value; } }
    public float CirticalDamageMultiplier { get { return _criticalDamageMultiplier; } set { _criticalDamageMultiplier = value; } }
    public float CriticalDamageChance { get { return _criticalDamageChance; } set { _criticalDamageChance = value; } }

    [SerializeField] private string _name;
    [SerializeField] private Sprite _uiIcon;
    [SerializeField] private Sprite _background;
    [SerializeField] private int _prefabNumber;
    [SerializeField] private int _damage;
    [SerializeField] private int _level;
    [SerializeField] private float _attackSpeed;
    [SerializeField] private float _reloadSpeed;
    [SerializeField] private float _criticalDamageMultiplier;
    [SerializeField] private float _criticalDamageChance;
    [SerializeField] private Transform _statsHolder;


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
        TMP_Text reloadSpeedField = GameObject.Instantiate(emptyObject, StatsHolder);
        TMP_Text criticalDamageMultiplierField = GameObject.Instantiate(emptyObject, StatsHolder);
        TMP_Text criticalDamageChanceField = GameObject.Instantiate(emptyObject, StatsHolder);
        

        nameField.text = "Название " + Name;
        nameField.color = Color.red;
        damageField.text = "Урон " + Damage.ToString();
        levelField.text = "Уровень " + Level.ToString();
        attackSpeedField.text = "Скорость атаки " + AttackSpeed.ToString();
        reloadSpeedField.text = "Скорость перезарядки " + ReloadSpeed.ToString();
        criticalDamageMultiplierField.text = "Множитель крит. урона " + CirticalDamageMultiplier.ToString();
        criticalDamageChanceField.text = "Шанс крит. атаки " + CriticalDamageChance.ToString();
    }

}
