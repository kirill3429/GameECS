using System;
using UnityEngine.UI;
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

                if (DataInterface.GetWeaponIDList().Contains(Convert.ToInt32(rewardString[1])) || DataInterface.GetActiveWeapon() == rewardString[1])
                {
                    return new ScoreRewardBehavior(Convert.ToInt32(rewardString[1]), Icon);
                }
                else
                {
                    return new WeaponRewardBehavior(Convert.ToInt32(rewardString[1]), Icon);
                }

               

            case "score":
                return new ScoreRewardBehavior(Convert.ToInt32(rewardString[1]), Icon);
        }

        return new ScoreRewardBehavior(1000, Icon);

    }
}