using UnityEngine;

public interface IItem
{
    string Name { get; set; }
    int Icon { get; set; }
    int Background { get; set; }
    int Level { get; set; }
    int PrefabNumber { get; set; }

    void ShowInfo(GameObject uiWindow, GameObject statPrefab);


}
