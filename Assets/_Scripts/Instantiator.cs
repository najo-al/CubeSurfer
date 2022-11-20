using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Instantiator : MonoBehaviour
{
  [SerializeField] int count = 0;
  [SerializeField] GameObject objectPrefab;

  private void OnEnable()
  {
    for (int i = 0; i < count; i++)
    {
      Instantiate(objectPrefab, new Vector3(transform.position.x, transform.position.y + i, transform.position.z), Quaternion.identity, transform);
    }
    Destroy(transform.GetChild(0).gameObject);
  }
}
