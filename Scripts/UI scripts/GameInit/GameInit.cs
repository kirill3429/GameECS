using UnityEngine;

public class GameInit : MonoBehaviour
{
    public static void FirstEnterInit()
    {
        if (!PlayerPrefs.HasKey("IsFirstEnter"))
        {
            DataInterface.SetActiveWeapon("0");
            DataInterface.SaveLearnedSkills("-0:1-1:1");
            PlayerPrefs.SetInt("IsFirstEnter", 1);
        }
        Debug.Log("First Enter Time");
    }

    
}
