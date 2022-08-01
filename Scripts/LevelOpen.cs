using Michsky.UI.Shift;
using UnityEngine;
public class LevelOpen : MonoBehaviour
{
    private int lastLevel;
    void OnEnable()
    {
        lastLevel = PlayerPrefs.GetInt("lastLevel");


        foreach (Transform level in gameObject.transform)
        {
            if (level.TryGetComponent(out Level levelComp))
            {
                var levelView = level.GetComponent<ChapterButton>();
                if (levelComp.levelNumber < lastLevel)
                {
                    levelComp.OpenLevel();
                    levelView.statusItem = ChapterButton.StatusItem.Completed;
                }
                else if (levelComp.levelNumber == lastLevel)
                {
                    levelComp.OpenLevel();
                    levelView.statusItem = ChapterButton.StatusItem.None;
                }
                else
                {
                    levelView.statusItem = ChapterButton.StatusItem.Locked;
                }
            }

        }
    }

}
