using System.Collections.Generic;
using System.Xml;
using UnityEngine;
using Agava.YandexGames;
using System.Collections;
using System.Globalization;

public class LocalizationManager : MonoBehaviour
{
    public static int SelectedLanguage { get; private set; }


    public static event LanguageChangeHandler OnLanguageChange;
    public delegate void LanguageChangeHandler();

    private static Dictionary<string, List<string>> localization;

    [SerializeField]
    private TextAsset textFile;
    private void Awake()
    {
        string culture = CultureInfo.InstalledUICulture.ToString();

        bool choosed = false;


        switch (culture)
        {
            case ("ru-RU"):
                SelectedLanguage = 1;
                choosed = true;
                break;
            case ("en-US"):
                SelectedLanguage = 0;
                choosed = true;
                break;
            case ("tr-TR"):
                SelectedLanguage = 2;
                choosed = true;
                break;
        }
        if (choosed == false)
        {
            SelectedLanguage = 0;
        }
        if (localization == null)
        {
            LoadLocalization();
        }
    }


    private IEnumerator Start()
    {
#if !UNITY_WEBGL || UNITY_EDITOR
        yield break;
#endif

        yield return YandexGamesSdk.WaitForInitialization();


        while (!YandexGamesSdk.IsInitialized)
        {
            yield return new WaitForSecondsRealtime(0.25f);
        }

        string culture = YandexGamesSdk.Environment.i18n.lang;
        switch (culture)
        {
            case ("ru"):
                SelectedLanguage = 1;
                break;
            case ("en"):
                SelectedLanguage = 0;
                break;
            case ("tr"):
                SelectedLanguage = 2;
                break;
        }
        SetLanguage(SelectedLanguage);


    }

    private void LoadLocalization()
    {
        localization = new Dictionary<string, List<string>>();

        XmlDocument xmlDocument = new XmlDocument();
        xmlDocument.LoadXml(textFile.text);

        foreach (XmlNode key in xmlDocument["Keys"].ChildNodes)
        {
            string keyStr = key.Attributes["Name"].Value;
            var values = new List<string>();

            foreach (XmlNode translate in key["Translates"].ChildNodes)
            {
                values.Add(translate.InnerText);
            }
            localization[keyStr] = values;
        }
    }

    public static string GetTranslate(string key, int languageId = -1)
    {
        if (languageId == -1)
            languageId = SelectedLanguage;
        if (localization.ContainsKey(key))
            return localization[key][languageId];
        return key;
    }

    public static void SetLanguage(int id)
    {
        SelectedLanguage = id;
        OnLanguageChange?.Invoke();
    }
}
