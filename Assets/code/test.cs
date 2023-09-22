//using System.Collections;
//using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {

        float x = gameObject.transform.position.x + 0.1f;
        float y = gameObject.transform.position.y;
        float z = gameObject.transform.position.z;
        Vector3 pos = new Vector3(x, y, z);
        gameObject.transform.position = pos;
        Debug.Log(gameObject.transform.position);
    }
}
