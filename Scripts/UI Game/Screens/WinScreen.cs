using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class WinScreen : Client.Screen
{
    [SerializeField] private TextMeshProUGUI rewardScoreUI;
    [SerializeField] private Image rewardIcon;

    private int lastLevel;
    private int levelNumber;
    private RewardBehavior reward;
    private RewardBehaviorFabric behaviorFabric;

    private void Start()
    {
        
        string[] rewardString = PlayerPrefs.GetString("RewardForWin").Split("-");

        behaviorFabric = new RewardBehaviorFabric(rewardIcon);

        reward = behaviorFabric.createBehavior(rewardString);

        reward.GiveReward();
    }

    private void OnEnable()
    {
        lastLevel = PlayerPrefs.GetInt("lastLevel");
        levelNumber = PlayerPrefs.GetInt("LevelNumber");


        if (levelNumber == lastLevel)
        {
            PlayerPrefs.SetInt("lastLevel", levelNumber + 1);
        }
    }

}
