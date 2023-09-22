//using System.Collections;
//using System.Collections.Generic;
using UnityEngine;

public class SetScale : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        

    }

    public void Set_Scale(float s)
    {
        float x = s;
        float y = gameObject.transform.localScale.y;
        float z = gameObject.transform.localScale.z;
        Vector3 scale = new Vector3(x, y, z);
        gameObject.transform.localScale = scale;
        Debug.Log(gameObject.transform.localScale);

    }


}
