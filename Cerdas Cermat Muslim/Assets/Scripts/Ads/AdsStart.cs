using GoogleMobileAds.Api;
using UnityEngine;

public class AdsStart : MonoBehaviour
{
    public void Start()
    {
        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize((InitializationStatus initStatus) =>
        {
            Debug.Log(initStatus);
        });
    }
}