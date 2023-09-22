//using System.Collections;
//using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.Utilities;

public class SetPoints : MonoBehaviour
{
    public float validTouchDistance; 
    public string layerName;

    private void Update()
    {
        string vm = "";
        SetP(vm);
    }

    public void SetP(string voicemessage)
    {
        
        if (voicemessage == "Set Point")//Input.GetKeyDown(KeyCode.I)
        {
            Vector3 startPoint = new Vector3();
            Vector3 endPoint = new Vector3();
            //foreach (var source in CoreServices.InputSystem.DetectedInputSources)
            //{
            //    // Ignore anything that is not a hand because we want articulated hands
            //    if (source.SourceType == Microsoft.MixedReality.Toolkit.Input.InputSourceType.Hand)
            //    {
            //        foreach (var p in source.Pointers)
            //        {
            //            if (p is IMixedRealityNearPointer)
            //            {
            //                // Ignore near pointers, we only want the rays
            //                continue;
            //            }
            //            if (p.Result != null)
            //            {
            //                //var startPoint = p.Position;
            //                //var endPoint = p.Result.Details.Point;
            //                //var hitObject = p.Result.Details.Object;
            //                startPoint = p.Position;
            //                endPoint = p.Result.Details.Point;
            //                //if (hitObject)
            //                //{
            //                //    var sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            //                //    sphere.transform.localScale = Vector3.one * 0.01f;
            //                //    sphere.transform.position = endPoint;
            //                //}
            //            }

            //        }
            //    }
            //}


            //Debug.Log("Key I");
            //Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);

            //Vector3 camreaPosition = Camera.main.transform.position;
            //Vector3 camreaForward = Camera.main.transform.forward;


            bool flag_hit = PointerUtils.TryGetPointerEndpoint<ShellHandRayPointer>(Handedness.Right, out endPoint);

            if(!flag_hit)
            {
                return;
            }
            Vector3 pointerPosition = startPoint;
            Vector3 pointerForward = endPoint-startPoint;
            Ray ray = new Ray(pointerPosition, pointerForward);
           
            //RaycastHit hit;
            //bool flag_hit = false;
            //flag_hit = Physics.Raycast(ray, out hit);
            //Debug.Log(flag_hit);
            if (flag_hit)
            {
                //GameObject gameObj = hit.collider.gameObject;
                //Vector3 hitPoint = hit.point;

                Vector3 hitPoint = endPoint;
                //Debug.Log("click object name is " + gameObj.name + " , hit point " + hitPoint.ToString());

                //create new sphere
                GameObject sphereModel = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                sphereModel.name = "Sphere_Model";
                sphereModel.transform.position = hitPoint;
                sphereModel.transform.localScale = new Vector3(.1f,.1f,.1f);

                Vector3 newP = new Vector3(0, 0, 0);

                Coordinate C = new Coordinate();
                newP = C.Func1(hitPoint);

                //create new sphere
                GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                sphere.name = "Sphere_World";
                sphere.transform.position = newP;
            }
                       
        }
        if (Input.GetKeyDown(KeyCode.O))
        {
            GameObject corner1 = null;
            GameObject corner2 = null;
            GameObject corner3 = null;
            GameObject corner4 = null;

            corner1 = GameObject.Find("corner1");
            corner2 = GameObject.Find("corner2");
            corner3 = GameObject.Find("corner3");
            corner4 = GameObject.Find("corner4");

            Vector3 newP = new Vector3(0, 0, 0);

            Coordinate C = new Coordinate();
            newP = C.Func1(corner1.transform.position); ;

            //create new sphere
            GameObject sphere1 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere1.name = "Sphere_World1";
            sphere1.transform.position = newP;


            newP = new Vector3(0, 0, 0);

            C = new Coordinate();
            newP = C.Func1(corner2.transform.position); ;

            //create new sphere
            GameObject sphere2 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere2.name = "Sphere_World2";
            sphere2.transform.position = newP;


            newP = new Vector3(0, 0, 0);

            C = new Coordinate();
            newP = C.Func1(corner3.transform.position); ;

            //create new sphere
            GameObject sphere3 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere3.name = "Sphere_World3";
            sphere3.transform.position = newP;



            newP = new Vector3(0, 0, 0);

            C = new Coordinate();
            newP = C.Func1(corner4.transform.position); ;

            //create new sphere
            GameObject sphere4 = GameObject.CreatePrimitive(PrimitiveType.Sphere);
            sphere4.name = "Sphere_World4";
            sphere4.transform.position = newP;
        }







    }



}