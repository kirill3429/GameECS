using UnityEngine.SceneManagement;
using UnityEngine;

public class Level : MonoBehaviour
{

    [SerializeField] private int _levelNumber;
    [SerializeField] private bool _levelState;
    [SerializeField] private int _levelGround;


    public void LoadLevel()
    {
        if (_levelState != false)
        {
            PlayerPrefs.SetInt("LevelNumber", _levelNumber);
            PlayerPrefs.SetInt("LevelGround", _levelGround);
            Debug.Log("Материал пола: " + _levelGround);
            SceneManager.LoadScene(1);
        }
    }

}
