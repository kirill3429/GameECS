using UnityEngine;
using UnityEngine.UI;
using System;
public class RewardBehaviorFabric
{
    public Image Icon;

    public RewardBehaviorFabric(Image icon)
    {
        Icon = icon;
    }

    public RewardBehavior createBehavior(string[] rewardString)
    {
 
        switch (rewardString[0])
        {
            case "weapon":
                return new WeaponRewardBehavior(Convert.ToInt32(rewardString[1]), Icon);
                
            case "score":
                return new ScoreRewardBehavior(Convert.ToInt32(rewardString[1]), Icon);
        }

        return new ScoreRewardBehavior(1000, Icon);
        
    }
}