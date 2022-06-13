using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
public class UiManager : MonoBehaviour {
    
    [SerializeField] private float maxTime = 3f;
    [SerializeField] private GameDataSO gameDataSO;


    [SerializeField] private TextMeshProUGUI[] scoreTexts;


    [SerializeField] private GameObject setttingWindow;
    [SerializeField] private GameObject extraLifeWindow;
    [SerializeField] private Image extraChanceTimerImageBar;

    [SerializeField] private bool isSettingMenuOn,isShopMenuOn;
    [SerializeField] private ShopManager shopManager;

    private float currentTime;
    private Coroutine AdsPlayRoutine;
    
    private void Start(){
        ToggleAdsWindow(false);
        setttingWindow.SetActive(isSettingMenuOn);
        currentTime = maxTime;
        GameHandler.current.onPlayerDead += ()=>{
            currentTime = maxTime;
            ToggleAdsWindow(true);
        };
        GameHandler.current.onPlayerRevive += ()=>{
            ToggleAdsWindow(false);
            Debug.Log("Revive Routine End");
        };
        GameHandler.current.OnScoreChange += ()=>{
            ChangeScore();
        };
    }
    private void ChangeScore(){
        for (int i = 0; i < scoreTexts.Length; i++){
            scoreTexts[i].SetText(GameHandler.current.GetCurrentScore().ToString());
        }
    }
    public void SettingOpenClose(){
        isSettingMenuOn = !isSettingMenuOn;
        if(isSettingMenuOn){
            isShopMenuOn = false;
            ToggleShop();
        }
        ToggleSettingMenu();
    }
    
    public void ShopOpeClose(){
        isShopMenuOn = !isShopMenuOn;
        if(isShopMenuOn){
            isSettingMenuOn = false;
            ToggleSettingMenu();
        }
        ToggleShop();
    }

    public void ToggleAds(bool value){
        gameDataSO.SetHasAds(value);
    }
    
    public void ToggleAdsWindow(bool _on){
        if(_on){
            
            Debug.Log("Reviveing Routine Start");
            if(AdsPlayRoutine != null){
                StopCoroutine(AdsPlayRoutine);
            }
            AdsPlayRoutine = StartCoroutine(ExtraLifeWindowTimerRoutine());
        }else{
            if(AdsPlayRoutine != null){
                StopCoroutine(AdsPlayRoutine);
            }
        }
        extraLifeWindow.SetActive(_on);
    }
    public void RevivePlayer(){
        // ToggleAdsWindow(false);
        // GameHandler.current.RevivePlayer();
        AdManager.revive = true;
        AdManager.current.ShowRewardAd();
    }
    public void DenyRevive(){
        ToggleAdsWindow(false);
        GameHandler.current.GameOver();
    }
    private IEnumerator ExtraLifeWindowTimerRoutine(){
        while(currentTime > 0f){
            currentTime -= Time.deltaTime;
            float normalizeTime = currentTime / maxTime;
            extraChanceTimerImageBar.fillAmount = normalizeTime;
            yield return null;
        }
        ToggleAds(false);

        
    }
    private void ToggleShop(){
        shopManager.ToggleShopOpenClose(isShopMenuOn);
    }
    private void ToggleSettingMenu(){
        setttingWindow.SetActive(isSettingMenuOn);
    }
    
}
