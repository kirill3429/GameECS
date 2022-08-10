using Agava.YandexGames;
using UnityEngine;
using Client;
using System;
using Leopotam.Ecs;
public class LeaderboardScript : Client.Screen
{
   
    private string leaderboadName = "TopWaves";
    private string playerName;
    
    [SerializeField] private GameObject entryPrefab;
    [SerializeField] private RectTransform entriesHolder;

    private void OnEnable()
    {
        ShowLeaderboad();
    }
    private void OnDisable()
    {
        foreach (Transform i in entriesHolder)
        {
            Destroy(i.gameObject);
        }
    }

    public void ShowLeaderboad()
    {
        if (YandexGamesSdk.IsInitialized)
        {
            PlayerAccount.GetProfileData((result) =>
            {
                playerName = result.publicName;
                if (string.IsNullOrEmpty(playerName))
                    playerName = "Player";
            });

            RuntimeData runtimeData = GameObject.FindGameObjectWithTag("EcsStartUp").GetComponent<EcsStartup>().runtimeData;


            Leaderboard.GetPlayerEntry(leaderboadName, (result) =>
            {
                if (result.score < (runtimeData.waveNumber + 1))
                {
                    Leaderboard.SetScore(leaderboadName, runtimeData.waveNumber + 1);
                }
            });
            

            GetLeaderboardEntries();

        }


    }
    public void GetLeaderboardEntries()
    {
        Leaderboard.GetEntries(leaderboadName, (result) =>
        {
            foreach (var entry in result.entries)
            {
                string name = entry.player.publicName;
                if (string.IsNullOrEmpty(name))
                    name = "Player";
                Entry entryView = Instantiate(entryPrefab, entriesHolder).GetComponent<Entry>();

                entryView.playerName.text = name;
                entryView.playerWave.text = entry.score.ToString();
                entryView.playerPlace.text = entry.rank.ToString();

            }
        }, null , 15);
    }
    
}
