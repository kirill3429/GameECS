﻿using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace Michsky.UI.Shift
{
    public class SliderManager : MonoBehaviour
    {
        [Header("Resources")]
        public TextMeshProUGUI valueText;

        [Header("Saving")]
        public bool enableSaving = false;
        public string sliderTag = "Tag Text";
        public float defaultValue = 1;

        [Header("Settings")]
        public bool usePercent = false;
        public bool showValue = true;
        public bool useRoundValue = false;

        Slider mainSlider;
        float saveValue;

        void Start()
        {
            mainSlider = gameObject.GetComponent<Slider>();

            if (showValue == false)
                valueText.enabled = false;

            if (enableSaving == true)
            {
                if (PlayerPrefs.HasKey(sliderTag + "SliderValue") == false)
                    saveValue = defaultValue;
                else
                    saveValue = PlayerPrefs.GetFloat(sliderTag + "SliderValue");

                mainSlider.value = saveValue;

                mainSlider.onValueChanged.AddListener(delegate
                {
                    saveValue = mainSlider.value;
                    PlayerPrefs.SetFloat(sliderTag + "SliderValue", saveValue);
                });
            }
        }
    }
}