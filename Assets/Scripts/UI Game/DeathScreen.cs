using TMPro;
using UnityEngine.UI;
using UnityEngine;

public class DeathScreen : Client.Screen
{
    public bool deathFlag = false;

    public void ReviveButton()
    {
        // on ad closed: add HP, runtimeData.gameState = GameState.Running;
    }
}
