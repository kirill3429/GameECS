using UnityEngine;
using UnityEngine.UI;

public class WeaponCell : ItemCell, IWeaponItem
{

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

    public override void ShowInfo(GameObject uiWindow, GameObject statPrefab)
    {
        Debug.Log("WeaponCellShowInfo");

        Transform statsHolder = uiWindow.transform.Find("ItemInfo");

        Text emptyObject = statPrefab.GetComponent<Text>();
        Text nameField = GameObject.Instantiate(emptyObject, statsHolder);
        Text damageField = GameObject.Instantiate(emptyObject, statsHolder);
        Text levelField = GameObject.Instantiate(emptyObject, statsHolder);
        Text attackSpeedField = GameObject.Instantiate(emptyObject, statsHolder);
        Text reloadSpeedField = GameObject.Instantiate(emptyObject, statsHolder);
        Text criticalDamageMultiplierField = GameObject.Instantiate(emptyObject, statsHolder);
        Text criticalDamageChanceField = GameObject.Instantiate(emptyObject, statsHolder);
        GameObject.Destroy(emptyObject);

        nameField.text = Name;
        nameField.color = Color.red;
        damageField.text = Damage.ToString();
        levelField.text = Level.ToString();
        attackSpeedField.text = AttackSpeed.ToString();
        reloadSpeedField.text = ReloadSpeed.ToString();
        criticalDamageMultiplierField.text = CirticalDamageMultiplier.ToString();
        criticalDamageChanceField.text = CriticalDamageChance.ToString();
    }
}
