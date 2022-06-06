using UnityEngine;
using UnityEngine.UI;


[CreateAssetMenu]
public class AbilityAsset : ScriptableObject
{
    public string Name;
    public string Description;
    public string AdvancedDescription;
    public int Id;
    public int DefaultCost;
    public Sprite Icon;

}
