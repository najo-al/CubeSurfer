
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