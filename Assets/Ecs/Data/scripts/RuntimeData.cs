using UnityEngine;

public class RuntimeData
{
    public int[] spawnedCreeps;
    public int waveNumber;
    public bool isPaused;
    public bool isAbilityWindowOpen = false;
    public GameState gameState;
    public int score;
    
}
public enum GameState
{
    AbilityWindow,
    GameOver,
    Menu,
    Running,
    Waiting
}