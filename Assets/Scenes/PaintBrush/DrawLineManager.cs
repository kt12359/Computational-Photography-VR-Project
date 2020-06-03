using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;


using System.Runtime.InteropServices;


public class DrawLineManager : MonoBehaviour {

	private float rayDist = 0.3f;
	public Material lMat;
	private Material lMat_texture;

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

    public void OnLineWidthSliderChanged()
    {
        setLineWidth(slider.value);
    }

	public void OnPaintBrushTypeClick(Material selectedMaterial)
	{
		setPaintBrushType(selectedMaterial);
	}

	public void OnPaintBrushTextureClick(Material selectedTexture)
	{
		setPaintBrushTexture(selectedTexture);
	}

	public void setPaintBrushType(Material selectedMaterial)
	{
		lMat = selectedMaterial;
	}

	public void setPaintBrushTexture(Material selectedTexture)
	{
		lMat_texture = selectedTexture;
	}

	public Vector3 getNewPositionForLayer(float offset)
	{
		Vector3 camPosition = Camera.main.transform.position;
		Vector3 camAim = Camera.main.transform.forward;
		return camPosition + camAim * offset;
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

	private float DistanceBetweenRayAndPoint(Ray ray, Vector3 point)
	{
		return Vector3.Cross(ray.direction, point - ray.origin).magnitude;
	}

	// Update for DrawingMode.feature
    private void _UpdateFeature()
    {
    	// Check this first for performance
		if (Input.touchCount == 0) {
			brushTipObject.GetComponent<TrailRenderer>().enabled = true;
        	return;
		}

    	bool firstTouchCondition;
		bool whileTouchedCondition;

		GameObject currentSelection = eventSystemManager.currentSelectedGameObject;
		bool isPanelSelected = currentSelection == null;

        firstTouchCondition   = (Input.touchCount == 1 && isPanelSelected && (doKeepDrawingFeature==false));
        whileTouchedCondition = (Input.touchCount == 1 && isPanelSelected && (doKeepDrawingFeature==true));

        /*
			Return immediately if there will be no updates
        */
        if (firstTouchCondition == false && whileTouchedCondition == false) {
        	brushTipObject.GetComponent<TrailRenderer>().enabled = true;
        	return;
        }


        paintLineColor = colorPicker.GetColor();

        Vector3 pointToDraw = GetComponent<FeatureHighlightController>().GetPoint();
        Debug.Log("pointToDraw = " + pointToDraw);

    	// Only continue if a satisfactory point was found
    	if (pointToDraw == Vector3.positiveInfinity) {
    		return;
    	}

    
        if (firstTouchCondition == true) {
			startNewLine(pointToDraw);
			Debug.Log("start new line");
			// Make sure we continue this line
			// For simplicity, only draw a single line
			doKeepDrawingFeature = true;

		} else if (whileTouchedCondition == true) {
			addPointToLine(pointToDraw, overrideThreshold: true);
			Debug.Log("add to line");
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
		currLine.SetPrimaryMaterial(new Material(lMat));
		if (lMat_texture) 
			currLine.SetSecondaryMaterial(new Material(lMat_texture));
		currLine.SetWidth (paintLineThickness);
		currLine.SetColor(colorPicker.GetColor());

		// TODO is this being used?
		numClicks = 0;

		// Keep track of the last point on the line
		prevPaintPoint = firstPoint;

		// Add to history and increment index
		Debug.Log ("Adding History 1");
		int index = GetComponent<PaintController> ().drawingHistoryIndex;
		index++;

		Debug.Log ("Adding History 2");
        paintBrushSceneObject.GetComponent<DrawingHistoryManager> ().addDrawingCommand (index, 0, firstPoint, currLine.GetColor(), paintLineThickness);

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

    	if (prevPaintPoint == pointToAdd) {
    		Debug.Log("Point to add is same as previous point: " + pointToAdd);
    		return;
    	}

		currLine.AddPoint (pointToAdd);
		numClicks++;
		prevPaintPoint = pointToAdd;

		// add to history without incrementing index
		int index = GetComponent<PaintController> ().drawingHistoryIndex;
		paintBrushSceneObject.GetComponent<DrawingHistoryManager> ().addDrawingCommand (index, 0, pointToAdd, currLine.GetColor(), paintLineThickness);

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

			currLine.SetPrimaryMaterial(new Material(lMat));
			if (lMat_texture) 
				currLine.SetSecondaryMaterial(new Material(lMat_texture));
			currLine.SetWidth (lineThickness);
			currLine.SetColor(color);
			numReplayClicks = 0;


		} else {

			// continue line
			currLine.AddPoint (position);
			numReplayClicks++;

		}

	}

}
