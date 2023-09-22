using System;
//using System.Collections;
using System.Collections.Generic;

using System.Threading;
using System.Threading.Tasks;

using UnityEngine;

using Microsoft.Azure.SpatialAnchors;
using Microsoft.Azure.SpatialAnchors.Unity;
using TMPro;

public class MeshAnchor : MonoBehaviour
{


    private SynchronizationContext context = null;


    /// <summary>
    /// Main interface to anything Spatial Anchors related
    /// </summary>
    private SpatialAnchorManager _spatialAnchorManager = null;

    /// <summary>
    /// Used to keep track of all GameObjects that represent a found or created anchor
    /// </summary>
    //private List<GameObject> _foundOrCreatedAnchorGameObjects = new List<GameObject>();

    /// <summary>
    /// Used to keep track of all the created Anchor IDs
    /// </summary>
    private List<String> _createdAnchorIDs = new List<String>();

    public string anchorID = "";

    TMP_Text tmp;

    // Start is called before the first frame update
    async void Start()
    {
        GameObject txtObject = new GameObject("text");
        txtObject.transform.position = new Vector3(0f, 0f, 1f);
        txtObject.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
        tmp = txtObject.AddComponent<TextMeshPro>();
        tmp.text = "Start";
        

//#if WINDOWS_UWP
        _spatialAnchorManager = GetComponent<SpatialAnchorManager>();
        _spatialAnchorManager.LogDebug += (sender, args) => Debug.Log($"ASA - Debug: {args.Message}");
        _spatialAnchorManager.Error += (sender, args) => Debug.LogError($"ASA - Error: {args.ErrorMessage}");
        _spatialAnchorManager.AnchorLocated += SpatialAnchorManager_AnchorLocated;
        //#endif
        //_createdAnchorIDs.Add("c4e475a3-b122-4b3f-81e9-c49cbc5682be");
        //_createdAnchorIDs.Add("f677fecf-945e-460c-9c53-be9e3d6add77");
        //_createdAnchorIDs.Add("82852523-d9e0-4866-8879-a499afd75e7e");
        _createdAnchorIDs.Add("299e8d33-543b-4e92-b5c0-6b35221683cb");
        
//#if WINDOWS_UWP
//await Initialize();
//#endif
    }

    // Update is called once per frame
    void Update()
    {

    }
//#if WINDOWS_UWP
    public async Task Initialize()
    {
        //await _spatialAnchorManager.StartSessionAsync();
        //LocateAnchor();
    }

    private async void SetAnchor()
    {
        tmp.text = "Begin to Set Anchor";
        //Add and configure ASA components
        CloudNativeAnchor cloudNativeAnchor = gameObject.AddComponent<CloudNativeAnchor>();
        //cloudNativeAnchor.SetPose(transform.position, transform.rotation);
        await cloudNativeAnchor.NativeToCloud();
        CloudSpatialAnchor cloudSpatialAnchor = cloudNativeAnchor.CloudAnchor;
        //cloudSpatialAnchor.Expiration = DateTimeOffset.Now.AddDays(3);

        //Collect Environment Data
        while (!_spatialAnchorManager.IsReadyForCreate)
        {
            float createProgress = _spatialAnchorManager.SessionStatus.RecommendedForCreateProgress;
            
             tmp.text = $"ASA - Move your device to capture more environment data: {createProgress:0%}";
            
        }

        try
        {
            // Now that the cloud spatial anchor has been prepared, we can try the actual save here.
            await _spatialAnchorManager.CreateAnchorAsync(cloudSpatialAnchor);

            bool saveSucceeded = cloudSpatialAnchor != null;
            if (!saveSucceeded)
            {
                Debug.LogError("ASA - Failed to save, but no exception was thrown.");
                return;
            }
            //gameObject.DeleteNativeAnchor();

            Debug.Log($"ASA - Saved cloud anchor with ID: {cloudSpatialAnchor.Identifier}");
            //_foundOrCreatedAnchorGameObjects.Add(gameObject);
            _createdAnchorIDs.Add(cloudSpatialAnchor.Identifier);
            Pose anchorPose = cloudSpatialAnchor.GetPose();

            tmp.text =  $"ASA - Saved cloud anchor with ID: {cloudSpatialAnchor.Identifier}\nAnchor Position: {anchorPose.position}\nAnchor Rotation: {anchorPose.rotation.eulerAngles}";
          
        }
        catch (Exception exception)
        {
            Debug.Log("ASA - Failed to save anchor: " + exception.ToString());
            Debug.LogException(exception);
        }
    }

    private void LocateAnchor()
    {
        if (_createdAnchorIDs.Count > 0)
        {
            //Create watcher to look for all stored anchor IDs
            Debug.Log($"ASA - Creating watcher to look for {_createdAnchorIDs.Count} spatial anchors");
            tmp.text =  "Locating experiment scene";

            AnchorLocateCriteria anchorLocateCriteria = new AnchorLocateCriteria();
            anchorLocateCriteria.Identifiers = _createdAnchorIDs.ToArray();
            _spatialAnchorManager.Session.CreateWatcher(anchorLocateCriteria);
        }
    }

    private void SpatialAnchorManager_AnchorLocated(object sender, AnchorLocatedEventArgs args)
    {
        anchorID = args.Identifier;
        tmp.text =  $"ASA - Anchor recognized as a possible anchor {args.Identifier} {args.Status}";
        if (args.Status == LocateAnchorStatus.Located)
        {
            //Creating and adjusting GameObjects have to run on the main thread. We are using the UnityDispatcher to make sure this happens.
            UnityDispatcher.InvokeOnAppThread(() =>
            {
                // Read out Cloud Anchor values
                CloudSpatialAnchor cloudSpatialAnchor = args.Anchor;

                Pose anchorPose = cloudSpatialAnchor.GetPose();
                Pose setPose = new Pose();
                //setPose.position = new Vector3(anchorPose.position.x, transform.position.y, anchorPose.position.z);
                setPose.position = anchorPose.position;
                //setPose.rotation.eulerAngles = new Vector3(transform.rotation.eulerAngles.x + 0.05f, anchorPose.rotation.eulerAngles.y, transform.rotation.eulerAngles.z - 0.15f);
                setPose.rotation=anchorPose.rotation;
                //transform.SetPositionAndRotation(anchorPose.position, anchorPose.rotation);
                transform.SetPositionAndRotation(setPose.position, setPose.rotation);


                // Link to Cloud Anchor
                //gameObject.AddComponent<CloudNativeAnchor>().CloudToNative(cloudSpatialAnchor);
                //_foundOrCreatedAnchorGameObjects.Add(gameObject);
                tmp.text =  $"ASA - Located cloud anchor with ID: {cloudSpatialAnchor.Identifier}";



                _spatialAnchorManager.StopSession();
            });
        }
    }

    private async void StartSession()
    {
        await _spatialAnchorManager.StartSessionAsync();
        tmp.text = "Start Session";
    }

    private void StopSession()
    {
        _spatialAnchorManager.StopSession();
        tmp.text =  "Stop Session";
    }

    public void SessionControl(string msg)
    {
        if (msg == "Stop Session")
        {
            if (_spatialAnchorManager.IsSessionStarted)
            {
                // Stop Session and remove all GameObjects. This does not delete the Anchors in the cloud
                tmp.text = "Ready to Stop Session";
                StopSession();
                //Debug.Log("ASA - Stopped Session and removed all Anchor Objects");
                //tmp.text =  "Stop Session";
            }
        }
        else if (msg == "Start Session")
        {
            //Start session
            if (!_spatialAnchorManager.IsSessionStarted)
            {
                tmp.text = "Ready to Start Session";
                StartSession();               
            }
        }
        else if (msg == "Locate Anchor")
        {
            LocateAnchor();
        }
        else if (msg == "Set Anchor")
        {
            tmp.text = "Ready to Set Anchor";
            SetAnchor();
        }
    }
//#endif
}
