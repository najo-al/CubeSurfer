using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using HuaweiMobileServices.Ads;
using HmsPlugin;
using UnityEngine.UI;



public class AdsManager : MonoBehaviour
{
    [SerializeField]

    public GameManager gm;

    private void Start()
    {
        HMSAdsKitManager.Instance.OnRewarded = OnRewarded;
        HMSAdsKitManager.Instance.OnInterstitialAdClosed = OnInterstitialAdClosed;
    }

    public void ShowBannerAd()
    {
        HMSAdsKitManager.Instance.ShowBannerAd();
    }

    public void HideBannerAd()
    {

        HMSAdsKitManager.Instance.HideBannerAd();
    }


    public void OnRewarded(Reward reward){
        Debug.Log("[HMS] AdsManager rewarded!");
        gm.AddGems();
        
    
    }

    public void ShowRewardedAd()
    {
        Debug.Log("[HMS] AdsManager ShowRewardedAd");
        HMSAdsKitManager.Instance.OnRewarded = OnRewarded;
        HMSAdsKitManager.Instance.ShowRewardedAd();


    }

    public void ShowInterstitialAd()
    {
        Debug.Log("[HMS] AdsManager ShowInterstitialAd");
        HMSAdsKitManager.Instance.ShowInterstitialAd();
    }


    public void OnInterstitialAdClosed()
    {
        Debug.Log("[HMS] AdsManager interstitial ad closed");
    }

    public void SetTestAdStatus()
    {
        HMSAdsKitManager.Instance.DestroyBannerAd();
        HMSAdsKitManager.Instance.LoadAllAds();
    }
}
