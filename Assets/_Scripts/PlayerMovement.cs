using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
  public float forwardSpeed = 10f;
  public float sideSpeed = 10f;
  public bool isMoving = false;
  public GameObject MainMenu;
  public GameObject defeatMenu;
  public GameObject victoryMenu;


  public void StartSpeedBoost()
  {
    StartCoroutine(SpeedBoost());
  }

  public IEnumerator SpeedBoost()
  {
    forwardSpeed = 15;
    yield return new WaitForSeconds(2);
    forwardSpeed = 10;
  }


  void Update()
  {
    if (!isMoving)
    {
      if (Input.GetMouseButtonDown(0) && MainMenu == null && defeatMenu.activeInHierarchy == false && victoryMenu.activeInHierarchy == false)
      {
        isMoving = true;
      }

      return;
    }

    transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + forwardSpeed * Time.deltaTime);

    if (transform.position.x >= -2)
    {
      transform.position = new Vector3(transform.position.x - sideSpeed * Time.deltaTime, transform.position.y, transform.position.z);
    }

    if (transform.position.x <= 2)
    {
      transform.position = new Vector3(transform.position.x + sideSpeed * Time.deltaTime, transform.position.y, transform.position.z);
    }

  }
}
