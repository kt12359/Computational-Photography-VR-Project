using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
// TODO remove unused using

    public class FeatureHighlightController : MonoBehaviour
    {
        [SerializeField] GameObject m_featureHighlight;
        [SerializeField] Text notifications;

        private bool highlightOn = false;
        private IEnumerator m_ContinuousUpdate;
        private Vector3 currentHighlightedPoint = Vector3.positiveInfinity;

        void Start()
        {
            m_ContinuousUpdate = ContinuousUpdate();
        }

        public void ToggleHighlight(bool turnHighlightOn)
        {
            this.highlightOn = turnHighlightOn;
            if (this.highlightOn) {
                StartCoroutine(m_ContinuousUpdate);
            }
            else {
                StopCoroutine(m_ContinuousUpdate);
                m_featureHighlight.SetActive(false);
            }
        }

        public Vector3 GetPoint()
        {
            return currentHighlightedPoint;
        }

        private void HighlightPoint(Vector3 point)
        {
            if (currentHighlightedPoint == point)
                return;
            currentHighlightedPoint = point;
            Debug.Log("HighlightPoint " + currentHighlightedPoint);
            m_featureHighlight.transform.position = currentHighlightedPoint;
            m_featureHighlight.SetActive(true);
        }

        private void ClearHighlight()
        {
            currentHighlightedPoint = Vector3.positiveInfinity;
            m_featureHighlight.SetActive(false);
        }

        private float DistanceBetweenRayAndPoint(Ray ray, Vector3 point)
        {
            return Vector3.Cross(ray.direction, point - ray.origin).magnitude;
        }

        private IEnumerator ContinuousUpdate()
        {
            while (true)
            {
                // Do this first so continue works as expected
                // For performance, only run 10 times per second
                yield return new WaitForSeconds(0.1f);

                List<Vector3> pointCloud = FeaturesVisualizer.GetPointCloud();
                if (pointCloud == null) {
                    ClearHighlight();
                    continue;
                }

                // The ray of the user's view
                Ray viewpointRay = Camera.main.ViewportPointToRay (new Vector3 (0.5f, 0.5f, 0.5f));

                // The point must be within this threshold of the line
                float distanceThreshold = 0.02f;

                // Find the closest feature point to the ray within the threshold
                Vector3 closestPoint = new Vector3(0,0,0);
                float curDistance;
                bool pointFound = false;
                foreach (Vector3 featurePoint in pointCloud) {
                    curDistance = DistanceBetweenRayAndPoint(viewpointRay, featurePoint);
                    if (curDistance < distanceThreshold) {
                        closestPoint.Set(featurePoint.x, featurePoint.y, featurePoint.z);
                        HighlightPoint(closestPoint);
                        pointFound = true;
                        break;
                    }
                }

                if (!pointFound)
                    ClearHighlight();
            }
        }
    }