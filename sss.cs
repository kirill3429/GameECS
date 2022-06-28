using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
public class sss : MonoBehaviour
{
    private void Start()
    {
        UserGameData UGD = new UserGameData();
        UGD.ActiveWeapon = "ssss";
        Debug.Log(JsonUtility.ToJson(UGD));
    }
}
