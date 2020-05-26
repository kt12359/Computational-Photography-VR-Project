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

        static List<ARRaycastHit> s_Hits = new List<ARRaycastHit>();

        private int mCurrentTrackedFeatureCount = 1000;

        public ARRaycastManager m_RaycastManager;

        private IEnumerator mContinuousHittest;

        private float timeOfLastPtCloudUpdate;

        private Vector3 pos;

        private float distanceToReticle;

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

        public Vector3 getPos()
        {
            return pos;
        }

        void Start()
        {
            mContinuousHittest = ContinuousHittest();
            //mPointCloudManager.pointCloudsChanged += OnPointCloudChanged;

        }

        public void startStopReticle(bool start)
        {
            if(start)
                StartReticle();
            else
                StopReticle();
        }

        // starts the cursor
        public void StartReticle()
        {

            //mReticle.SetActive(false);


            StartCoroutine(mContinuousHittest);
        }


        public void StopReticle()
        {
            StopCoroutine(mContinuousHittest);
            mReticle.SetActive(false);
        }


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
                //else
                //{
                //    mReticle.SetActive(false);
                //}

                // go to next frame
                yield return null;
            }
        }



    }