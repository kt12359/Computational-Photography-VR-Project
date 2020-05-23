using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;


    public class ReticleController : MonoBehaviour
    {
        [SerializeField] GameObject mReticle;
        [SerializeField] Text notifications;

        [SerializeField] ARPointCloudManager mPointCloudManager;
        private Vector3 lastCursorPosition;
        private int mCurrentTrackedFeatureCount = 1000;
        private float timeOfLastPtCloudUpdate;

        static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();
        public ARRaycastManager m_RaycastManager;

        private IEnumerator mGoToTarget;
        private IEnumerator mContinuousHittest;

        public Vector3 getLastCursorPosition()
        {
            return lastCursorPosition;
        }

        public Vector3 updatePos()
        {
            var screenPosition = new Vector2(Screen.width / 2, Screen.height / 2);

            if (m_RaycastManager.Raycast(screenPosition, s_Hits, TrackableType.FeaturePoint))
            {
                // Raycast hits are sorted by distance, so get the closest hit.
                var targetPose = s_Hits[0].pose;

                // move reticle to the hit test point
                mReticle.transform.position = targetPose.position;

                // Show reticle if there's an active hit result
                mReticle.SetActive(true);

                return mReticle.transform.position;
            }

            return new Vector3 (-99999999, -99999999, -99999999);
        }

        void Start()
        {
            mContinuousHittest = ContinuousHittest();

            lastCursorPosition = new Vector3(-200f, -200f, -200f);
            mPointCloudManager.pointCloudsChanged += OnPointCloudChanged;

        }

        // starts the cursor
        public void StartReticle()
        {

            mReticle.SetActive(true);

            StartCoroutine(mContinuousHittest);
        }


        public void StopReticle()
        {
            StopCoroutine(mContinuousHittest);
            mReticle.SetActive(false);
        }

        // Add this
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

//Continuous hit test was private
        public IEnumerator ContinuousHittest()
        {

            bool withinDistance = false;
            int badTrackingCounter = 0;

            while (true)
            {
                notifications.text = "In continuous hit test";
                // getting screen point
                var screenPosition = new Vector2(Screen.width / 2, Screen.height / 2);

                // World Hit Test - Type PlaneWithinBounds
                if (m_RaycastManager.Raycast(screenPosition, s_Hits, TrackableType.FeaturePoint))
                {
                    // Raycast hits are sorted by distance, so get the closest hit.
                    var targetPose = s_Hits[0].pose;

                    // move reticle to the hit test point
                    //mReticle.transform.position = targetPose.position;

                    // Show reticle if there's an active hit result
                    //mReticle.SetActive(true);
                   

                    Vector3 screenCenter = Camera.main.ScreenToWorldPoint(screenPosition);
                    float distanceToReticle = Vector3.Magnitude(targetPose.position - screenCenter);
                    float reticleDistanceChange = (targetPose.position - lastCursorPosition).magnitude;

                    Debug.Log("Cursor: Distance = " + distanceToReticle);


                    if (reticleDistanceChange < 0.03f)
                    {
                        // do nothing
                    }

                    else
                    {

                        if (mCurrentTrackedFeatureCount < 30) //  && trustworthyHitTestDistanceChange > 0.15f
                        {

                            // too few features
                            Debug.Log("Cursor: Too few features");
                            mReticle.SetActive(false);


                        }
                        else if ((Time.time - timeOfLastPtCloudUpdate > 3.0f && distanceToReticle > 1.1f) ||
                                 (Time.time - timeOfLastPtCloudUpdate > 3.0f && distanceToReticle <= 1.1f && reticleDistanceChange > 0.14f))
                        {

                            mReticle.SetActive(false);

                            //GetComponent<PromptManager>().SetPrompt("No surface detected");


                        }
                        else if (withinDistance == false && distanceToReticle > 1.7f)
                        {

                            mReticle.SetActive(false);
                            //GetComponent<PromptManager>().SetPrompt("Move closer to activate the focus ring");
                            badTrackingCounter = 0;
                        }

                        else if (withinDistance == true && distanceToReticle > 1.73f) // hysteresis for distance
                        {

                            // too far
                            withinDistance = false;

                            mReticle.SetActive(false);
                            //GetComponent<PromptManager>().SetPrompt("Move closer to activate the focus ring");
                            badTrackingCounter = 0;
                        }

                        else
                        {
                            Debug.Log("Cursor: Passed all checks");

                            // Passed all checks
                            withinDistance = true;

                            badTrackingCounter++;

                            if (badTrackingCounter > 10)
                            {

                                Debug.Log("Cursor: Showing cursor");

                                mReticle.SetActive(true);

                                mReticle.transform.LookAt(Camera.main.transform);
                                //GetComponent<PromptManager>().SetPrompt("");

                                // update the last cursor position
                                lastCursorPosition = targetPose.position;

                                //mReticle.transform.position = targetPose.position;

                                // stop the previous animation
                                if (mGoToTarget != null)
                                {
                                    StopCoroutine(mGoToTarget);
                                }

                                // start new animation to go to this destination
                                mGoToTarget = GoToTarget(targetPose.position);
                                yield return StartCoroutine(mGoToTarget);

                            }
                        }
                    }
                        // hide reticle if there's no hit test result
                        //mReticle.SetActive(false);
                    

                    // go to next frame
                    yield return null;
                }
            }

        }

        IEnumerator GoToTarget(Vector3 destination)
        {
            float distance = (destination - mReticle.transform.position).magnitude;
            while (distance > 0)
            {
                float step = distance * Time.deltaTime / 0.2f;

                // THIS WAS INITIALLY POSITIVE
                // Move our position a step closer to the target.
                mReticle.transform.position = (Vector3.MoveTowards(mReticle.transform.position, destination, step));


                // update distance
                distance = (destination - mReticle.transform.position).magnitude;

                yield return null;
            }

        }
    }