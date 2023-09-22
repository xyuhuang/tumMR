//using System.Collections;
//using System.Collections.Generic;
using UnityEngine;

public class ShowCoordinates : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(gameObject.name+": "+transform.position);
        Coordinate c = new Coordinate();
        Vector3 vec_converted = c.Func1(transform.position);
        Debug.Log(gameObject.name + "_converted: " + vec_converted);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
