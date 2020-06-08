using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


/*
    This class handles moving the Reticle for the
    Snap to Surface drawing mode.
*/
public class ReticleController : MonoBehaviour
{
    [SerializeField] GameObject mReticle;
    [SerializeField] Text notifications;

    [SerializeField] ARPointCloudManager mPointCloudManager;

    static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

    private int mCurrentTrackedFeatureCount = 1000;

    public ARRaycastManager m_RaycastManager;

    private IEnumerator mContinuousHittest;

    private float timeOfLastPtCloudUpdate;

    private Vector3 pos;

    private float distanceToReticle;


    // Initialization
    void Start()
    {
        mContinuousHittest = ContinuousHittest();
        mPointCloudManager.pointCloudsChanged += OnPointCloudChanged;
    }


    // Used to debug when the point cloud is changed
    void OnPointCloudChanged(ARPointCloudChangedEventArgs eventargs)
    {
        if (eventargs.updated.Count == 1)
        {
            foreach (var ptcloud in eventargs.updated)
            {
                mCurrentTrackedFeatureCount = ptcloud.positions.Length;
                Debug.Log("Cursor: Current tracked feature count = " + mCurrentTrackedFeatureCount);
            }

            timeOfLastPtCloudUpdate = Time.time;
        }
    }


    // Returns the position of the reticle
    public Vector3 getPos()
    {
        return pos;
    }


    // Toggle the Reticle on or off
    public void startStopReticle(bool start)
    {
        if(start)
            StartReticle();
        else
            StopReticle();
    }


    // Turn the Reticle on
    public void StartReticle()
    {
        StartCoroutine(mContinuousHittest);
    }


    // Turn the Reticle off
    public void StopReticle()
    {
        StopCoroutine(mContinuousHittest);
        mReticle.SetActive(false);
    }


    // Checks for raycast hits and updates the Reticle position
    // Runs once per frame while the Reticle is turned on
    private IEnumerator ContinuousHittest()
    {
        while (true)
        {
            // getting screen point
            var screenPosition = new Vector2(Screen.width / 2, Screen.height / 2);

            // World Hit Test
            if (m_RaycastManager.Raycast(screenPosition, s_Hits, TrackableType.PlaneWithinBounds))
            {
                // Raycast hits are sorted by distance, so get the closest hit.
                var targetPose = s_Hits[0].pose;

                mReticle.transform.position = targetPose.position;

                mReticle.SetActive(true);

                Vector3 screenCenter = Camera.main.ScreenToWorldPoint(screenPosition);
                distanceToReticle = Vector3.Magnitude(targetPose.position - screenCenter);

            }

            // go to next frame
            yield return null;
        }
    }
}