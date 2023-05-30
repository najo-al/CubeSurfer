using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HmsPlugin;


public class InterstitialAdLoad : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {

        Debug.Log("loaded interstital ad on new scene");
        HMSAdsKitManager.Instance.ShowInterstitialAd();
        
    }

    // Update is called once per frame
  
}
