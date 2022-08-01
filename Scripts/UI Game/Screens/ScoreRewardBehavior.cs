
using UnityEngine.UI;


public class ScoreRewardBehavior : RewardBehavior
{
    private AllPrefabsData prefabsData;
    private int score;
    private Image rewardIcon;

    public ScoreRewardBehavior(int score, Image Icon)
    {
        this.score = score;
    }

    public void GiveReward()
    {
        DataInterface.AddScore(score);
    }

}
