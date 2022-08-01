using UnityEngine;
using UnityEngine.SceneManagement;

public class Level : MonoBehaviour
{

    public int levelNumber;
    [SerializeField] private string _monsterSet;
    [SerializeField] private int _levelGround;
    [SerializeField] private bool _levelState;


    [SerializeField] private string _levelReward;


    public void LoadLevel()
    {
        if (_levelState != false)
        {
            if (DataInterface.GetActiveWeapon() != "")
            {
                PlayerPrefs.SetInt("LevelNumber", levelNumber);
                PlayerPrefs.SetString("MonsterSet", _monsterSet);
                PlayerPrefs.SetInt("LevelGround", _levelGround);

                PlayerPrefs.SetString("RewardForWin", _levelReward);

                SceneManager.LoadScene(1);
            }
            else
            {
                
            }
            
        }
    }

    public void OpenLevel()
    {
        _levelState = true;
    }

}

