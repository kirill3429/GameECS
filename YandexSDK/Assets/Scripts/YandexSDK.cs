using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;



public class YandexSDK : MonoBehaviour
{
    // Создание SINGLETON
    private static YandexSDK _instance;
    public static YandexSDK Instance
    {
        get
        {
            if (_instance == null)
                _instance = GameObject.FindObjectOfType<YandexSDK>();
            
            return _instance;
        }
    }
    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
       
    }
    
    private UserGameData UGD;
    private UserData UD;

    public UserGameData GetUserGameData => UGD;
    public UserData GetUserData => UD;
    


    // ФУНКЦИИ ИЗ JAVASCRIPT
    [DllImport("__Internal")]
    private static extern void Auth();    // Авторизация - внешняя функция для связи с плагином
    [DllImport("__Internal")]
    private static extern void ShowCommonADV();    // Показ обычной рекламы - внешняя функция для связи с плагином
    [DllImport("__Internal")]
    private static extern void GetData();    // Получение данных - внешняя функция для связи с плагином
    [DllImport("__Internal")]
    private static extern void SetData(string data);    // Отправка данных - внешняя функция для связи с плагином
    [DllImport("__Internal")]
    private static extern void ShowRewardADV();    // Показ рекламы с наградой - внешняя функция для связи с плагином
    [DllImport("__Internal")]
    private static extern void GetLeaderBoardEntries();
    [DllImport("__Internal")]
    private static extern void SetLeaderBoard(int score); 
    
    
    
    public event Action AuthSuccess;    //События
    public event Action DataGet;    //События
    public event Action RewardGet;  //События
    public event Action<string> LeaderBoardReady; 


    public void Authenticate()    //    Авторизация - отправка запроса на Авторизацию
    {
        Auth();
    }

    public void AuthenticateSuccess(string data)    // Авторизация успешно пройдена - Вызывается из JS
    {
        UD.Name = data;
        AuthSuccess?.Invoke();
    }

    public void GettingData()    // Получение данных
    {
        GetData();
    }

    public void DataGetting(string data) // Данные получены
    {
        UserDataSaving UDS = new UserDataSaving();
        UDS = JsonUtility.FromJson<UserDataSaving>(data);
        UGD = JsonUtility.FromJson<UserGameData>(UDS.data);
        DataGet?.Invoke();
    }

    public void DataSet(string JSONStringData)    // Сохранение данных
    {
        SetData(JSONStringData);
    }

    public void getLeaderEntries()
    {
        GetLeaderBoardEntries();
    }

    public void setLeaderScore(int score)
    {
        SetLeaderBoard(score);
    }

    public void BoardEntriesReady(string _data)
    {
        LeaderBoardReady?.Invoke(_data);
    }

    public void ShowCommonAdvertisment()    // Показ обычной рекламы
    {
        ShowCommonADV();
    }

    public void ShowRewardAdvertisment()    // Показ рекламы с наградой
    {
        ShowRewardADV();
    }

    

    

    
    public void RewardGetting() // Реклама просмотрена
    {
        RewardGet?.Invoke();
    }



}

[Serializable]
public class UserData
{
    public string Name;
    public string image;
}

[Serializable]
public class UserGameData
{
    public string Inventory;
    public string Abilities;
    public string ActiveWeapon;
    public string LastEnter;
    public string Coins;
}
[Serializable]
public class UserDataSaving
{
    public string data;
}

