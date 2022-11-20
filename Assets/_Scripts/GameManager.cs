using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;
using TMPro;


public class GameManager : MonoBehaviour
{

  public GameObject mainMenu;
  public GameObject startPrompt;
  public GameObject gemCounter;
  public GameObject progressBar;
  public GameObject gameButtons;
  public GameObject mutedButton;
  public GameObject pauseMenu;
  public static bool restartGame = false;
  public int gemCount = 0;
  public TMP_Text gemCountText;
  bool audioEnabled = true;

  void Start()
  {
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

    if (startPrompt.activeInHierarchy == false)
    {
      return;
    }
    if (Input.GetMouseButtonDown(0))
    {
      startPrompt.SetActive(false);
      gemCounter.SetActive(true);
      progressBar.SetActive(true);
      gameButtons.SetActive(true);
    }
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
