using UnityEngine.SceneManagement;
public interface ILevel
{
    public int LevelNumber { get; set; } // �� ����� ������� �����
    public bool LevelState { get; set; }
    public int LevelGround { get; set; }

}
