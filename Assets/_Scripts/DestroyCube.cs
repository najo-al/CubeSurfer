using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyCube : MonoBehaviour
{

  public AudioClip dropCube;
  private AudioSource audioSource;

  void Start()
  {
    audioSource = GetComponent<AudioSource>();
  }

  private void OnTriggerEnter(Collider other)
  {


    if (other.CompareTag("Obstacle"))
    {
      other.tag = "Untagged";
      transform.parent = other.transform.parent;
    }
    if (other.CompareTag("ObstacleStack"))
    {
      PlayDestroy();
      other.tag = "Untagged";

    }
    if (other.CompareTag("Multiplier"))
    {
      PlayDestroy();
      other.tag = "Untagged";
      transform.parent = other.transform.parent;
    }
    if (other.CompareTag("SpinningObstacle"))
    {
      other.tag = "Untagged";
      transform.parent = other.transform.parent.parent;
      transform.GetComponent<Rigidbody>().isKinematic = true;
      transform.eulerAngles = new Vector3(0, 0, 0);
    }

    if (transform.tag == "Lava")
    {
      if (other.CompareTag("Cube"))
      {
        PlayDestroy();
        Destroy(other.gameObject);
      }
    }
  }

  private void PlayDestroy()
  {
    audioSource.clip = dropCube;
    audioSource.Play();
  }
}
