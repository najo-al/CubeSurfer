/*using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static System.Net.Mime.MediaTypeNames;
using HuaweiConstants;
using HuaweiMobileServices.Base;
using HuaweiMobileServices.IAP;
using System;
using UnityEngine.Events;
using HuaweiMobileServices.Id;
using HmsPlugin;
using HuaweiMobileServices.Utils;
using UnityEngine.UI;


public class IAPManager : MonoBehaviour
{

    public GameManager gameManager;

    //private Text statusText;
    private List<InAppPurchaseData> productPurchasedList;

   

    // Please insert your products via custom editor. You can find it in Huawei > Kit Settings > IAP tab.

    void Start()
    {
        //HMSIAPManager.Instance.InitializeIAP();
        Debug.Log("[HMS]: IapDemoManager Started");
      //HMSIAPManager.Instance.CheckIapAvailability();    
      // HMSIAPManager.Instance.OnBuyProductSuccess += OnBuyProductSuccess;
      // HMSIAPManager.Instance.OnCheckIapAvailabilitySuccess += OnCheckIapAvailabilitySuccess;
      // HMSIAPManager.Instance.OnCheckIapAvailabilityFailure += OnCheckIapAvailabilityFailure;

        
    }


    public void InitIAP()
    {
        //HMSIAPManager.Instance.InitializeIAP();
        Debug.Log("[HMS]: IapDemoManager Started");
        HMSIAPManager.Instance.CheckIapAvailability();    
        // HMSIAPManager.Instance.OnBuyProductSuccess += OnBuyProductSuccess;
        // HMSIAPManager.Instance.OnCheckIapAvailabilitySuccess += OnCheckIapAvailabilitySuccess;
        // HMSIAPManager.Instance.OnCheckIapAvailabilityFailure += OnCheckIapAvailabilityFailure;
    }





    public void BuyProduct(string productID)
    {
        HMSIAPManager.Instance.BuyProduct(productID);
    }

    private void OnBuyProductSuccess(PurchaseResultInfo obj)


    {
        Debug.Log("PURCHASED ITEM ID" + obj.InAppPurchaseData.ProductId);
        if (obj.InAppPurchaseData.ProductId == "removeAds")
        {
            // Hide banner Ad for example
            // HMSAdsKitManager.Instance.HideBannerAd();
            gameManager.showAds = false;
            Debug.Log("BOUGHT REMOVE ADS");
        }
        else if (obj.InAppPurchaseData.ProductId == "gems100")
        {
            gameManager.AddGemsCount(100);
            Debug.Log("BOUGHT 100 gems");
        }
        else if (obj.InAppPurchaseData.ProductId == "gems500")
        {
            gameManager.AddGemsCount(500);
            Debug.Log("BOUGHT 500 gems");
        }
        else if (obj.InAppPurchaseData.ProductId == "gems1000")
        {
            gameManager.AddGemsCount(1000);
            Debug.Log("BOUGHT 1000 gems");
        }
    }
    private void OnCheckIapAvailabilityFailure(HMSException obj)
    {
        Debug.Log("IAP is not ready.");
    }

    private void OnCheckIapAvailabilitySuccess()
    {
        Debug.Log("IAP is ready.");
    }
}
*/
using HmsPlugin;
using HuaweiMobileServices.Base;
using HuaweiMobileServices.IAP;
using HuaweiMobileServices.Utils;
using System.Collections;
using System.Collections.Generic;
//using System.Diagnostics;
using UnityEngine;
using UnityEngine.SceneManagement;

public class IAPManager : MonoBehaviour
{
    List<InAppPurchaseData> consumablePurchaseRecord = new List<InAppPurchaseData>();
    List<InAppPurchaseData> activeNonConsumables = new List<InAppPurchaseData>();
    List<InAppPurchaseData> activeSubscriptions = new List<InAppPurchaseData>();

    public GameManager gm;

    void Start()
    {
        HMSIAPManager.Instance.OnBuyProductSuccess = OnBuyProductSuccess;

        HMSIAPManager.Instance.InitializeIAP();
        HMSIAPManager.Instance.OnInitializeIAPSuccess = OnInitializeIAPSuccess;
        HMSIAPManager.Instance.OnInitializeIAPFailure = OnInitializeIAPFailure;

        HMSIAPManager.Instance.OnBuyProductFailure = OnBuyProductFailure;

        //gm = GameObject.FindGameObjectWithTag("GameManager").GetComponent<GameManager>();
    }

    void OnInitializeIAPSuccess()
    {
        Debug.Log("Initialize successful!");
    }

    void OnInitializeIAPFailure(HMSException ex)
    {
        Debug.Log("Initialize failed!" + ex);
    }


    public void BuyProduct(string id)
    {
        Debug.Log(id);
        HMSIAPManager.Instance.PurchaseProduct(id);
        //HMSIAPManager.Instance.BuyProduct(id);
    }

    private void OnBuyProductSuccess(PurchaseResultInfo obj)
    {
        StartCoroutine(AfterBuyProductSuccess(obj));
    }

    IEnumerator AfterBuyProductSuccess(PurchaseResultInfo obj)
    {
        yield return new WaitForSeconds(1f);
        Debug.Log("[IAPManager]: AfterBuyProductSuccess");


        Debug.Log("PURCHASED ITEM ID" + obj.InAppPurchaseData.ProductId);
        if (obj.InAppPurchaseData.ProductId == "removeAds")
        {
            // Hide banner Ad for example
            // HMSAdsKitManager.Instance.HideBannerAd();
            gm.showAds = false;
            Debug.Log("BOUGHT REMOVE ADS");
        }
        else if (obj.InAppPurchaseData.ProductId == "gems100")
        {
            gm.AddGemsCount(100);
            Debug.Log("BOUGHT 100 gems");
        }
        else if (obj.InAppPurchaseData.ProductId == "gems500")
        {
            gm.AddGemsCount(500);
            Debug.Log("BOUGHT 500 gems");
        }
        else if (obj.InAppPurchaseData.ProductId == "gems1000")
        {
            gm.AddGemsCount(1000);
            Debug.Log("BOUGHT 1000 gems");
        }

    }

    private void OnBuyProductFailure(int code)
    {
        if (code == OrderStatusCode.ORDER_PRODUCT_OWNED)
        {
            HMSIAPManager.Instance.OnObtainOwnedPurchasesSuccess = OnObtainOwnedPurchasesSuccess;
            HMSIAPManager.Instance.ObtainOwnedPurchases(PriceType.IN_APP_CONSUMABLE);
        }
    }

    private void OnObtainOwnedPurchasesSuccess(OwnedPurchasesResult result)
    {
        if (result != null)
        {
            foreach (var obj in result.InAppPurchaseDataList)
            {
                Debug.Log("[IAPManager]: OnObtainOwnedPurchasesSuccess : " + obj.ProductId);
                HMSIAPManager.Instance.ConsumePurchaseWithToken(obj.PurchaseToken);
            }
        }
    }
}