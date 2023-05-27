using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using HuaweiMobileServices.Ads;
using HmsPlugin;
using UnityEngine.UI;


public class BuyGems : MonoBehaviour
{
    public GameManager gm;
    // Start is called before the first frame update
    void Start()
    {
        
    }
    public void purchase(){
        // HMSIAPManager.Instance.PurchaseProduct(HMSIAPConstants.gems100);
    }
    public void OnBuyProductSuccess(){
        gm.gemCount += 100000;
        Debug.Log("This is the greatest IAP of all time");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}


