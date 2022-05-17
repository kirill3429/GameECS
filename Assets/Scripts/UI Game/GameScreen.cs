using TMPro;
using UnityEngine.UI;
using UnityEngine;
public class GameScreen : Client.Screen
{
    [SerializeField] private TMP_Text _currentHealth;
    [SerializeField] private Slider _currentHealthSlider;

    public void SetHealth(float currentHealth, float maxHealth)
    {
        _currentHealth.text = currentHealth.ToString() + " / " + maxHealth.ToString();
        _currentHealthSlider.value = currentHealth / maxHealth;
    }
}
