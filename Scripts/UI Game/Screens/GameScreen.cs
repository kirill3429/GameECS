using TMPro;
using UnityEngine.UI;
using UnityEngine;
using System;
public class GameScreen : Client.Screen
{
    [SerializeField] private TMP_Text _currentHealth;
    [SerializeField] private Slider _currentHealthSlider;
    public Image dashImage;
    public TMP_Text score;
    public TMP_Text wave;

    public void SetHealth(float currentHealth, float maxHealth)
    {
        currentHealth = (float)Math.Round(currentHealth, 2);
        _currentHealth.text = currentHealth.ToString() + " / " + maxHealth.ToString();
        _currentHealthSlider.value = currentHealth / maxHealth;
    }
}
