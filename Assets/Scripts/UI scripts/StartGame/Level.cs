using UnityEngine.SceneManagement;
using UnityEngine;

public class Level : MonoBehaviour
{

    [SerializeField] private int _levelNumber;
    [SerializeField] private string _monsterSet;
    [SerializeField] private int _levelGround;
    [SerializeField] private bool _levelState;


    public void LoadLevel()
    {
        if (_levelState != false)
        {
            PlayerPrefs.SetInt("LevelNumber", _levelNumber);
            PlayerPrefs.SetString("MonsterSet", _monsterSet);
            PlayerPrefs.SetInt("LevelGround", _levelGround);
            Debug.Log("Материал пола: " + _levelGround);
            SceneManager.LoadScene(1);
        }
    }

}
