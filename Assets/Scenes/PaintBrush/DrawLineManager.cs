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

	// To keep track of feature point drawing mode
	private bool doKeepDrawingFeature = false;

	private int numClicks = 0;
	private int numReplayClicks = 0;

	private Vector3 prevPaintPoint;
    private float paintLineThickness;
	private Color paintLineColor;

    [SerializeField] Material brushTrailMaterial;

	public Slider slider;


	public EventSystem eventSystemManager;

	public GameObject drawingRootSceneObject;
	public GameObject paintBrushSceneObject;

    [SerializeField] GameObject brushTipObject;
	[SerializeField] GameObject snapToSurfaceBrushTipObject;

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

	public Vector3 getRayEndPointSurface(float dist)
	{
		return snapToSurfaceBrushTipObject.transform.position;
	}

	// Use this for initialization
	void Start () {

        paintLineColor = new Color();
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
			case PaintController.DrawingMode.surface:
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
		draw();
	}

	public void draw() 
	{
		Vector3 endPoint;
		if(snapToSurfaceBrushTipObject.activeSelf)
			endPoint = getRayEndPointSurface(rayDist);
		else
			endPoint = getRayEndPoint(rayDist);
		paintLineColor = colorPicker.GetColor();
		//renderSphereAsBrushTip (endPoint);


		bool firstTouchCondition;
		bool whileTouchedCondition;

		GameObject currentSelection = eventSystemManager.currentSelectedGameObject;
		bool isPanelSelected = currentSelection == null;

        firstTouchCondition = (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Began && isPanelSelected);
        whileTouchedCondition = (Input.touchCount == 1 && isPanelSelected);

        if (firstTouchCondition == true) {
			startNewLine(endPoint);
		} else if (whileTouchedCondition == true) {
			addPointToLine(endPoint);
        }
        else
        {
        	if(brushTipObject.activeSelf)
            	brushTipObject.GetComponent<TrailRenderer>().enabled = true;
        }
    } // draw()


    // TODO is this being used?
	public void drawOnSurface()
	{
		Vector3 endPoint = getRayEndPointSurface(0.0f);
		draw();
	}

	// Update for DrawingMode.feature
    private void _UpdateFeature()
    {
    	bool firstTouchCondition;
		bool whileTouchedCondition;

		GameObject currentSelection = eventSystemManager.currentSelectedGameObject;
		bool isPanelSelected = currentSelection == null;

		// Reset when the user stops drawing
		if (Input.touchCount == 0) {
			doKeepDrawingFeature = false;
			brushTipObject.GetComponent<TrailRenderer>().enabled = true;
        	return;
		}

        firstTouchCondition   = (Input.touchCount == 1 && isPanelSelected && (doKeepDrawingFeature==false));
        whileTouchedCondition = (Input.touchCount == 1 && isPanelSelected && (doKeepDrawingFeature==true));

        /*
			Return immediately if there will be no updates
        */
        if (firstTouchCondition == false && whileTouchedCondition == false) {
        	brushTipObject.GetComponent<TrailRenderer>().enabled = true;
        	return;
        }


        List<Vector3> pointCloud = FeaturesVisualizer.GetPointCloud();
        if (pointCloud == null) {
        	brushTipObject.GetComponent<TrailRenderer>().enabled = true;
        	return;
        }

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

    	Debug.Log(
    		"_UpdateFeature() endPoint = " + endPoint + "\n" +
    		"_UpdateFeature() pointToDraw = " + pointToDraw + "\n" +
    		"_UpdateFeature() firstTouchCondition = " + firstTouchCondition + "\n" +
    		"_UpdateFeature() whileTouchedCondition = " + whileTouchedCondition + "\n");

    
        if (firstTouchCondition == true) {
			startNewLine(pointToDraw);
			// Make sure we continue this line
			doKeepDrawingFeature = true;

		} else if (whileTouchedCondition == true) {
			addPointToLine(pointToDraw);
        }
    } // _UpdateFeature()

    // Starts drawing a new line with the given point
    private void startNewLine(Vector3 firstPoint) {
    	Debug.Log ("startNewLine()");

    	// Make sure we are in drawing mode
		if (!paintPanel.activeSelf && !snapToSurfaceBrushTipObject.activeSelf) {
			return;
		}

		// Create a new line object
		GameObject go = new GameObject ();
		go.transform.position = firstPoint;
		go.transform.parent = drawingRootSceneObject.transform;
		go.AddComponent<MeshFilter> ();
		go.AddComponent<MeshRenderer> ();

		// Keep track of this line
		currLine = go.AddComponent<GraphicsLineRenderer> ();

		// Configure the color, etc. of the line
		currLine.lmat = new Material(lMat);
		currLine.SetWidth (paintLineThickness);
		currLine.lmat.color = colorPicker.GetColor();

		// TODO is this being used?
		numClicks = 0;

		// Keep track of the last point on the line
		prevPaintPoint = firstPoint;

		// Add to history and increment index
		Debug.Log ("Adding History 1");
		int index = GetComponent<PaintController> ().drawingHistoryIndex;
		index++;

		Debug.Log ("Adding History 2");
        paintBrushSceneObject.GetComponent<DrawingHistoryManager> ().addDrawingCommand (index, 0, firstPoint, currLine.lmat.color, paintLineThickness);

		Debug.Log ("Adding History 3");
		GetComponent<PaintController>().drawingHistoryIndex = index;

		Debug.Log ("Done Adding History");

		// Make sure the trail is off
        if(brushTipObject.activeSelf)
        	brushTipObject.GetComponent<TrailRenderer>().enabled = false;
    }

    // Adds a point to the line currently being drawn
    private void addPointToLine(Vector3 pointToAdd, bool overrideThreshold=false) {
    	if (!overrideThreshold && (pointToAdd - prevPaintPoint).magnitude <= 0.01f) {
    		Debug.Log("Change in distance not large enough. Start: " + prevPaintPoint + " End: " + pointToAdd);
    		return;
    	}

		currLine.AddPoint (pointToAdd);
		numClicks++;
		prevPaintPoint = pointToAdd;

		// add to history without incrementing index
		int index = GetComponent<PaintController> ().drawingHistoryIndex;
		paintBrushSceneObject.GetComponent<DrawingHistoryManager> ().addDrawingCommand (index, 0, pointToAdd, currLine.lmat.color, paintLineThickness);

		// Make sure the trail is off
        if(brushTipObject.activeSelf)
        	brushTipObject.GetComponent<TrailRenderer>().enabled = false;
    }


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
