using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;
using TMPro;
using HmsPlugin;


public class GameManager : MonoBehaviour
{

  public AdsManager adsManager;
  public GameObject mainMenu;
  public GameObject startPrompt;
  public GameObject gemCounter;
  public GameObject progressBar;
  public GameObject gameButtons;
  public GameObject mutedButton;
  public GameObject pauseMenu;
  public GameObject watchAdsButtonVic;
  public GameObject watchAdsButtonDef;
  public static bool restartGame = false;
  public bool showAds = true;
  public GameObject StoreScreen;
  public IAPManager iapManager;
  public int gemCount = 0; 
  public TMP_Text gemCountText;
  bool audioEnabled = true;

  void Start()
  { 
    gemCount = PlayerPrefs.GetInt("gemCount", 0);
    
    AudioListener.volume = 0.5f;
    Time.timeScale = 1;

    if (restartGame)
    {
      StartGame();
    }

  }

  void Update()
  {
    
    gemCountText.text = (gemCount.ToString());
    PlayerPrefs.SetInt("gemCount", gemCount);
    Debug.Log("set gem count to " + PlayerPrefs.GetInt("gemCount"));
    if (startPrompt.activeInHierarchy == false)
    {
      Debug.Log("returned empty screen startPrompt.activeInHierarchy");
      return ;
    }
    if (Input.GetMouseButtonDown(0))
    {
      startPrompt.SetActive(false);
      gemCounter.SetActive(true);
      progressBar.SetActive(true);
      gameButtons.SetActive(true);
    }
  }

  public void AddGemsCount(int count){
    gemCount+= count;
    PlayerPrefs.SetInt("gemCount", gemCount);
  }

  public void OpenBuyScreen() {
    mainMenu.SetActive(false);
    StoreScreen.SetActive(true);
  }

  public void CloseBuyScreen(){
    StoreScreen.SetActive(false);
    mainMenu.SetActive(true);
  }
  

  public void DestroyWatchAdsButton(){
    Destroy(watchAdsButtonVic);
    Destroy(watchAdsButtonDef);
  }
  public void AddGems(){
    gemCount *= 2;
    PlayerPrefs.SetInt("gemCount", gemCount);

  }
  public void StartGame()
  {
    Destroy(mainMenu);
    startPrompt.SetActive(true);

  }

  public void PauseGame()
  {
    Time.timeScale = 0;
    pauseMenu.SetActive(true);

  }

  public void ResumeGame()
  {
    Time.timeScale = 1;
    pauseMenu.SetActive(false);
  }

  public void RestartGame()
  {
    restartGame = true;
    SceneManager.LoadScene(SceneManager.GetActiveScene().name);
  }

  public void MainMenu()
  {
    restartGame = false;
    SceneManager.LoadScene(SceneManager.GetActiveScene().name);
  }

  public void ManageAudio()
  {
    if (audioEnabled)
    {
      AudioListener.volume = 0;
      audioEnabled = false;
      mutedButton.SetActive(true);
    }
    else if (!audioEnabled)
    {
      AudioListener.volume = 0.5f;
      audioEnabled = true;
      mutedButton.SetActive(false);
    }
  }

}
