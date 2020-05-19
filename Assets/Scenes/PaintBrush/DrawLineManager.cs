using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;


using System.Runtime.InteropServices;


public class DrawLineManager : MonoBehaviour {

	private float rayDist = 0.3f;
	public Material lMat;

	public GameObject paintPanel;
	public Text textLabel;

	private GraphicsLineRenderer currLine;

	private int numClicks = 0;
	private int numReplayClicks = 0;

	private Vector3 prevPaintPoint;
    private float paintLineThickness;
    //private Color paintLineColor;
	private Color paintLineColor;

    [SerializeField] Material brushTrailMaterial;

	public Slider slider;


	public EventSystem eventSystemManager;

	public GameObject drawingRootSceneObject;
	public GameObject paintBrushSceneObject;

    [SerializeField] GameObject brushTipObject;

	public FlexibleColorPicker colorPicker;


    public void setLineWidth(float thickness)
	{
		paintLineThickness = thickness;
	}


	public void setLineColor(Color lineColor)
	{
        // set the line color
        paintLineColor.r = lineColor.r;
        paintLineColor.g = lineColor.g;
        paintLineColor.b = lineColor.b;

        // set the brush trail color to indicate to the user
        brushTrailMaterial.color = paintLineColor;

	}

    public void OnColorChoiceClick(Image buttonImage)
    {
        // set line color to match color of the button
		buttonImage.color = colorPicker.GetColor();
		setLineColor(buttonImage.color);
        //setLineColor(buttonImage.color);
    }

	public void OnPaintBrushTypeClick(Material selectedMaterial)
	{
		setBrushMaterial(selectedMaterial);
	}

    public void OnLineWidthSliderChanged()
    {
        setLineWidth(slider.value);
    }

	public void setBrushMaterial(Material selectedMaterial)
	{
		lMat = selectedMaterial;
	}


    public Vector3 getRayEndPoint(float dist)
	{
		Ray ray = Camera.main.ViewportPointToRay (new Vector3 (0.5f, 0.5f, 0.5f));
		Vector3 endPoint = ray.GetPoint (dist);
		return endPoint;
	}

	// Use this for initialization
	void Start () {

        paintLineColor = new Color();
		//cw = new ColorWheelControl();
        setLineColor(Color.red);

        setLineWidth(slider.value);

    }

    // Update is called once per frame
    void Update() {
    	PaintController.DrawingMode currentDrawingMode = GetComponent<PaintController>().currentDrawingMode;
		Debug.Log("Drawing Mode: " + currentDrawingMode);

		switch (currentDrawingMode) {
			case PaintController.DrawingMode.normal:
				_UpdateNormal();
				break;
			case PaintController.DrawingMode.feature:
				_UpdateFeature();
				break;
			default:
				break;
		}
    }
	
	// Update is called once per frame
	void _UpdateNormal () {
		Vector3 endPoint = getRayEndPoint (rayDist);
		paintLineColor = colorPicker.GetColor();//cw.updateColor();

		//renderSphereAsBrushTip (endPoint);


		bool firstTouchCondition;
		bool whileTouchedCondition;

		GameObject currentSelection = eventSystemManager.currentSelectedGameObject;
		bool isPanelSelected = currentSelection == null;

        firstTouchCondition = (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Began && isPanelSelected);
        whileTouchedCondition = (Input.touchCount == 1 && isPanelSelected);


        if (firstTouchCondition == true) {

			// check if you're in drawing mode. if not, return.
			if (!paintPanel.activeSelf) {

				return;
			}

			Debug.Log ("First touch");

			// start drawing line
			GameObject go = new GameObject ();
			go.transform.position = endPoint;
			go.transform.parent = drawingRootSceneObject.transform;

			go.AddComponent<MeshFilter> ();
			go.AddComponent<MeshRenderer> ();
			currLine = go.AddComponent<GraphicsLineRenderer> ();

			currLine.lmat = new Material(lMat);
			currLine.SetWidth (paintLineThickness);


            Color newColor = paintLineColor;//new Color(Random.Range(0.0f, 1.0f), Random.Range(0.0f, 1.0f), Random.Range(0.0f, 1.0f));

            //currLine.lmat.color = paintLineColor;
			currLine.lmat.color = colorPicker.GetColor();//newColor;

			numClicks = 0;

			prevPaintPoint = endPoint;

			// add to history and increment index

			Debug.Log ("Adding History 1");

			int index = GetComponent<PaintController> ().drawingHistoryIndex;
			index++;

			Debug.Log ("Adding History 2");

            brushTipObject.GetComponent<TrailRenderer>().enabled = false;
            paintBrushSceneObject.GetComponent<DrawingHistoryManager> ().addDrawingCommand (index, 0, endPoint, currLine.lmat.color, paintLineThickness);

			Debug.Log ("Adding History 3");
			GetComponent<PaintController> ().drawingHistoryIndex = index;

			Debug.Log ("Done Adding History");

		} else if (whileTouchedCondition == true) {

			if ((endPoint - prevPaintPoint).magnitude > 0.01f) {

				// continue drawing line
				//currLine.SetVertexCount (numClicks + 1);
				//currLine.SetPosition (numClicks, endPoint); 

				currLine.AddPoint (endPoint);
				numClicks++;

				prevPaintPoint = endPoint;

				// add to history without incrementing index
				int index = GetComponent<PaintController> ().drawingHistoryIndex;

				paintBrushSceneObject.GetComponent<DrawingHistoryManager> ().addDrawingCommand (index, 0, endPoint, currLine.lmat.color, paintLineThickness);

                brushTipObject.GetComponent<TrailRenderer>().enabled = false;
            }
        }

        else
        {
            brushTipObject.GetComponent<TrailRenderer>().enabled = true;
        }
    } // _UpdateNormal()

    /*
		TODO - Make sure this stays in sync with _UpdateNormal. 
		Right now this is separate so we can both work on this file more easily.
    */
    void _UpdateFeature()
    {
    	bool firstTouchCondition;
		bool whileTouchedCondition;

		GameObject currentSelection = eventSystemManager.currentSelectedGameObject;
		bool isPanelSelected = currentSelection == null;

        firstTouchCondition = (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Began && isPanelSelected);
        whileTouchedCondition = (Input.touchCount == 1 && isPanelSelected);

        /*
			Return immediately if there will be no updates
        */
        if (firstTouchCondition == false && whileTouchedCondition == false) {
        	brushTipObject.GetComponent<TrailRenderer>().enabled = true;
        	return;
        }


        List<Vector3> pointCloud = FeaturesVisualizer.GetPointCloud();
    	float distanceThreshold = 0.05f; // How close the point must be

    	Vector3 endPoint = getRayEndPoint (rayDist);
		paintLineColor = colorPicker.GetColor();//cw.updateColor();

		// Find the closest feature point within the threshold
    	Vector3 pointToDraw = new Vector3(float.PositiveInfinity, float.PositiveInfinity, float.PositiveInfinity);
    	float curDistance;
    	bool doDraw = false;
    	foreach (Vector3 featurePoint in pointCloud) {
    		curDistance = Vector3.Distance(endPoint, featurePoint);
    		if (curDistance < distanceThreshold) {
    			Debug.Log("curDistance = " + curDistance);
    			pointToDraw.Set(featurePoint.x, featurePoint.y, featurePoint.z);
    			doDraw = true;
    			break;
    		}
    	}

    	// Only continue if a satisfactory point was found
    	if (!doDraw) {
    		return;
    	}

    	Debug.Log("_UpdateFeature() endPoint = " + endPoint);
    	Debug.Log("_UpdateFeature() pointToDraw = " + pointToDraw);

    
        if (firstTouchCondition == true) {

			// check if you're in drawing mode. if not, return.
			if (!paintPanel.activeSelf) {
				return;
			}

			Debug.Log ("First touch");

			// start drawing line
			GameObject go = new GameObject ();
			go.transform.position = pointToDraw;
			go.transform.parent = drawingRootSceneObject.transform;

			go.AddComponent<MeshFilter> ();
			go.AddComponent<MeshRenderer> ();
			currLine = go.AddComponent<GraphicsLineRenderer> ();

			currLine.lmat = new Material(lMat);
			currLine.SetWidth (paintLineThickness);


            Color newColor = paintLineColor;//new Color(Random.Range(0.0f, 1.0f), Random.Range(0.0f, 1.0f), Random.Range(0.0f, 1.0f));

            //currLine.lmat.color = paintLineColor;
			currLine.lmat.color = colorPicker.GetColor();//newColor;

			numClicks = 0;

			prevPaintPoint = pointToDraw;

			// add to history and increment index

			Debug.Log ("Adding History 1");

			int index = GetComponent<PaintController> ().drawingHistoryIndex;
			index++;

			Debug.Log ("Adding History 2");

            brushTipObject.GetComponent<TrailRenderer>().enabled = false;
            paintBrushSceneObject.GetComponent<DrawingHistoryManager> ().addDrawingCommand (index, 0, pointToDraw, currLine.lmat.color, paintLineThickness);

			Debug.Log ("Adding History 3");
			GetComponent<PaintController> ().drawingHistoryIndex = index;

			Debug.Log ("Done Adding History");

		} else if (whileTouchedCondition == true) {

			if ((pointToDraw - prevPaintPoint).magnitude > 0.01f) {

				// continue drawing line
				//currLine.SetVertexCount (numClicks + 1);
				//currLine.SetPosition (numClicks, pointToDraw); 

				currLine.AddPoint (pointToDraw);
				numClicks++;

				prevPaintPoint = pointToDraw;

				// add to history without incrementing index
				int index = GetComponent<PaintController> ().drawingHistoryIndex;

				paintBrushSceneObject.GetComponent<DrawingHistoryManager> ().addDrawingCommand (index, 0, pointToDraw, currLine.lmat.color, paintLineThickness);

                brushTipObject.GetComponent<TrailRenderer>().enabled = false;
            }
        }
    } // _UpdateFeature()


	public void addReplayLineSegment(bool toContinue, float lineThickness, Vector3 position, Color color)
	{
		if (toContinue == false) {

			// start drawing line
			GameObject go = new GameObject ();
			go.transform.position = position;
			go.transform.parent = drawingRootSceneObject.transform;

			go.AddComponent<MeshFilter> ();
			go.AddComponent<MeshRenderer> ();
			currLine = go.AddComponent<GraphicsLineRenderer> ();

			currLine.lmat = new Material(lMat);
			currLine.SetWidth (lineThickness);
			currLine.lmat.color = color;
			numReplayClicks = 0;


		} else {

			// continue line
			currLine.AddPoint (position);
			numReplayClicks++;

		}

	}

}
