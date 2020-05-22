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

	public Vector3 getRayEndPointReticle(float dist, Vector3 endpoint)
	{
		Ray ray = Camera.main.ViewportPointToRay (endpoint);
		Vector3 newEndPoint = ray.GetPoint(dist);
		return newEndPoint;
	}

	// Use this for initialization
	void Start () {

        paintLineColor = new Color();
        setLineColor(Color.red);

        setLineWidth(slider.value);

    }

	public void draw() {
		Vector3 endPoint;
		endPoint = getRayEndPoint (rayDist);
		paintLineColor = colorPicker.GetColor();

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

			textLabel.text = "Drawing";

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


			currLine.lmat.color = colorPicker.GetColor();

			numClicks = 0;

			prevPaintPoint = endPoint;

			// add to history and increment index

			Debug.Log ("Adding History 1");

			int index = GetComponent<PaintController> ().drawingHistoryIndex;
			index++;

			Debug.Log ("Adding History 2");

            if(!snapToSurfaceBrushTipObject.activeSelf)
                brushTipObject.GetComponent<TrailRenderer>().enabled = false;
			else
				snapToSurfaceBrushTipObject.GetComponent<TrailRenderer>().enabled = false;
			
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

				if(!snapToSurfaceBrushTipObject.activeSelf)
                	brushTipObject.GetComponent<TrailRenderer>().enabled = false;
				else
					snapToSurfaceBrushTipObject.GetComponent<TrailRenderer>().enabled = false;

				paintBrushSceneObject.GetComponent<DrawingHistoryManager> ().addDrawingCommand (index, 0, endPoint, currLine.lmat.color, paintLineThickness);
            }
        }

        else
        {
			if(!snapToSurfaceBrushTipObject.activeSelf)
            	brushTipObject.GetComponent<TrailRenderer>().enabled = true;
			else
				snapToSurfaceBrushTipObject.GetComponent<TrailRenderer>().enabled = true;
        }	

	}
	
	// Update is called once per frame
	void Update () {
		if(snapToSurfaceBrushTipObject.activeSelf)
			return;

		draw();
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
