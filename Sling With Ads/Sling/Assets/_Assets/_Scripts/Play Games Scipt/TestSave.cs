using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
public class TestSave : MonoBehaviour {
    [SerializeField] private TMP_InputField intputField;
    [SerializeField] private PlayCloudDataManager cloudDataManager;


    public void SaveData(){
        cloudDataManager.SaveToCloud(intputField.text);
    }
    public void LoadData(){
        cloudDataManager.LoadFromCloud((data) =>{
            intputField.text = data;
        });
    }
    
    
}
