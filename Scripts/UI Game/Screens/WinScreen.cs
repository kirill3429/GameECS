using TMPro;
using UnityEngine.UI;
using UnityEngine;

public class WinScreen : Client.Screen
{
    [SerializeField] private TextMeshProUGUI rewardScoreUI;
    [SerializeField] private Image rewardIcon;

    private RewardBehavior reward;
    private RewardBehaviorFabric behaviorFabric;

    private void Start()
    {
        string[] rewardString = PlayerPrefs.GetString("RewardForWin").Split("-");

        behaviorFabric = new RewardBehaviorFabric(rewardIcon);

        reward = behaviorFabric.createBehavior(rewardString);

        reward.GiveReward();
    }

}
