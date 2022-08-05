using UnityEngine;

public class GameInit : MonoBehaviour
{
    public static void FirstEnterInit()
    {
        if (!PlayerPrefs.HasKey("IsFirstEnter"))
        {
            DataInterface.SetActiveWeapon("0");
            DataInterface.SaveLearnedSkills("-0:1-1:1-2:1-3:1-4:1-5:1-6:1-7:1");
            PlayerPrefs.SetInt("IsFirstEnter", 1);
        }
        Debug.Log("First Enter Time");
    }

    
}
