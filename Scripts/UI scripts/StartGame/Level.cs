using UnityEngine.SceneManagement;
using UnityEngine;

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
            PlayerPrefs.SetInt("LevelNumber", levelNumber);
            PlayerPrefs.SetString("MonsterSet", _monsterSet);
            PlayerPrefs.SetInt("LevelGround", _levelGround);

            PlayerPrefs.SetString("RewardForWin", _levelReward);

            SceneManager.LoadScene(1);
        }
    }

    public void OpenLevel()
    {
        _levelState = true;
    }

}

