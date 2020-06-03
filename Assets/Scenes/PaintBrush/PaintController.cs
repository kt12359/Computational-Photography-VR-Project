using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using System.Runtime.InteropServices;

public class PaintController : MonoBehaviour, PlacenoteListener {

	public GameObject drawingRootSceneObject;
	public Text textLabel;
	private bool pointCloudOn = false;

	public GameObject paintPanel;
	public GameObject startPanel;

    private GameObject buttonPanel;
	private bool snapToSurfaceEnabled;
	private int currentLayer;

    [SerializeField] GameObject brushTipObject;
	[SerializeField] GameObject brushTipGraphic;
	[SerializeField] GameObject snapToSurfaceBrushTipObject;
    [SerializeField] GameObject colorPalette;
    [SerializeField] GameObject mainButtonPanel;
    [SerializeField] GameObject saveLayerPanel;
    [SerializeField] GameObject loadLayerPanel;
	[SerializeField] GameObject moveLayerPanel;
    [SerializeField] GameObject modePanel;

    public enum DrawingMode
    {
    	none,
    	normal,
    	surface,
    	feature
    }

    [SerializeField] RawImage mLocalizationThumbnail;
    [SerializeField] Image mLocalizationThumbnailContainer;

    public int drawingHistoryIndex = 0;
    public DrawingMode currentDrawingMode;

	// Use this for initialization
	void Start () {
        LibPlacenote.Instance.RegisterListener (this);

        mLocalizationThumbnailContainer.gameObject.SetActive(false);

        // Set up the localization thumbnail texture event.
        LocalizationThumbnailSelector.Instance.TextureEvent += (thumbnailTexture) =>
        {
            if (mLocalizationThumbnail == null)
            {
                return;
            }

            // set the width and height of the thumbnail based on the texture obtained
            RectTransform rectTransform = mLocalizationThumbnailContainer.rectTransform;
            if (thumbnailTexture.width != (int)rectTransform.rect.width)
            {
                rectTransform.SetSizeWithCurrentAnchors(
                    RectTransform.Axis.Horizontal, thumbnailTexture.width * 2);
                rectTransform.SetSizeWithCurrentAnchors(
                    RectTransform.Axis.Vertical, thumbnailTexture.height * 2);
                rectTransform.ForceUpdateRectTransforms();
            }

            // set the texture
            mLocalizationThumbnail.texture = thumbnailTexture;
        };


        // Make sure panels match the defaults
        startPanel.SetActive (true);
        mainButtonPanel.SetActive(true);

        saveLayerPanel.SetActive(false);
        loadLayerPanel.SetActive(false);
        modePanel.SetActive(false);
		paintPanel.SetActive (false);
		colorPalette.SetActive(false);
		brushTipObject.SetActive(false);
		snapToSurfaceBrushTipObject.SetActive(false);
		snapToSurfaceEnabled = false;

		// Make sure this child is active for when its parent is active
		buttonPanel = paintPanel.transform.Find("ButtonPanel").gameObject;
		buttonPanel.SetActive(true);
		currentLayer = 1;

		currentDrawingMode = DrawingMode.normal;
    }

    public void OnToggleColorPaletteClick()
    {
        if (colorPalette.activeInHierarchy)
        {
            colorPalette.SetActive(false);
        }
        else
        {
            colorPalette.SetActive(true);
        }
    }


    // Update is called once per frame
    void Update () {
    

    }		

	public void onStartPaintingClick ()
	{
		startPanel.SetActive (false);
		paintPanel.SetActive (true);

        onClearAllClick();

        LibPlacenote.Instance.StartSession ();

        brushTipObject.SetActive(true);

        textLabel.text = "Press and hold the screen to paint";
	}

	public void TogglePanelMoveLayer(bool moveLayerPanelActive)
	{
		moveLayerPanel.SetActive(moveLayerPanelActive);
		mainButtonPanel.SetActive(!moveLayerPanelActive);
	}

	public void TogglePanelSaveLayer(bool saveLayerPanelActive)
	{
		saveLayerPanel.SetActive(saveLayerPanelActive);
        mainButtonPanel.SetActive(!saveLayerPanelActive);
	}

	public void TogglePanelLoadLayer(bool loadLayerPanelActive)
	{
		loadLayerPanel.SetActive(loadLayerPanelActive);
        mainButtonPanel.SetActive(!loadLayerPanelActive);
	}

	public void TogglePanelMode(bool modePanelActive)
	{
		modePanel.SetActive(modePanelActive);
        mainButtonPanel.SetActive(!modePanelActive);
	}

	public void OnMoveLayerClick(int layerNum)
	{
		if (!LibPlacenote.Instance.Initialized()) {
			Debug.Log ("SDK not yet initialized");
			return;
		}

		textLabel.text = "Moving Layer " + layerNum;
		Vector3 pos = GetComponent<DrawLineManager>().getNewPositionForLayer(0.3f);
		GetComponent<DrawingHistoryManager>().moveLayer(layerNum, pos);
		textLabel.text = "Layer " + layerNum + " moved!";
		TogglePanelMoveLayer(false);
	}


	public void OnSaveLayerClick (int layerNum)
	{
		if (!LibPlacenote.Instance.Initialized()) {
			Debug.Log ("SDK not yet initialized");
			return;
		}

		textLabel.text = "Saving Layer " + layerNum;
		GetComponent<DrawingHistoryManager>().saveLayer(layerNum);
		textLabel.text = "Layer " + layerNum + " saved!";
		TogglePanelSaveLayer(false);
	}

	public void OnLoadLayerClick (int layerNum)
	{
		if (!LibPlacenote.Instance.Initialized()) {
			Debug.Log ("SDK not yet initialized");
			return;
		}

		textLabel.text = "Loading Layer " + layerNum;
		GetComponent<DrawingHistoryManager>().loadLayer(layerNum);
		textLabel.text = "Layer " + layerNum + " loaded!";
		TogglePanelLoadLayer(false);
	}

	public void OnModeClick(string mode)
	{
		// Handle turning off the current mode
		switch (currentDrawingMode) {
			case DrawingMode.normal:
				ToggleModeNormal(false);
				break;
			case DrawingMode.feature:
				ToggleModeFeature(false);
				break;
			case DrawingMode.surface:
				ToggleModeSurface(false);
				break;
			default:
				break;
		}

		// Handle turning on the new mode
		if (mode == "normal") {
			ToggleModeNormal(true);
		}
		else if (mode == "feature") {
			ToggleModeFeature(true);
		}
		else if (mode == "surface") {
			ToggleModeSurface(true);
		}
		else {
			Debug.Log("Invalid mode passed to OnModeClick: " + mode);
		}

		TogglePanelMode(false);
	}

	private void ToggleModeNormal(bool modeNormalOn) {
		if (modeNormalOn) {
			// Turn on
			currentDrawingMode = DrawingMode.normal;
			textLabel.text = "Press the Screen to Paint";
		} else {
			// Turn off
			currentDrawingMode = DrawingMode.none;
		}
	}

	// When user clicks snap to surface button, activate snap to surface panel
	// and snap to surface brush tip object. On return to main click, deactivate.
	private void ToggleModeSurface(bool modeSurfaceOn) {
		if (modeSurfaceOn) {
			// Turn on
			if (!LibPlacenote.Instance.Initialized()) {
				Debug.Log ("SDK not yet initialized");
				return;
			}
			currentDrawingMode = DrawingMode.surface;
			
			textLabel.text = "Snap to Surface Enabled";

	        snapToSurfaceBrushTipObject.SetActive(true);
			brushTipObject.SetActive(false);
			GetComponent<ReticleController>().StartReticle();
		} else {
			// Turn off
			currentDrawingMode = DrawingMode.none;
			textLabel.text = "Returning to Main Session";
			snapToSurfaceBrushTipObject.SetActive(false);
			brushTipObject.SetActive(true);
			GetComponent<ReticleController>().StopReticle();
		}
	}

	private void ToggleModeFeature(bool modeFeatureOn) {
		if (modeFeatureOn) {
			// Turn on
			currentDrawingMode = DrawingMode.feature;
			if (pointCloudOn == false) {
				FeaturesVisualizer.EnablePointcloud(new Color(1f, 1f, 1f, 0.2f), new Color(1f, 1f, 1f, 0.8f));
				pointCloudOn = true;
				Debug.Log ("Point Cloud On");
			}
			GetComponent<FeatureHighlightController>().ToggleHighlight(true);
			textLabel.text = "Highlight a Feature and Tap the Screen to Connect";
		} else {
			// Turn off
			currentDrawingMode = DrawingMode.none;
			if (pointCloudOn == true) {
				FeaturesVisualizer.DisablePointcloud ();
	            pointCloudOn = false;
				Debug.Log ("Point Cloud Off");
			}
			GetComponent<FeatureHighlightController>().ToggleHighlight(false);
		}
	}


    public void OnExitLoadedPaintingClick()
    {
        mLocalizationThumbnailContainer.gameObject.SetActive(false);

        LibPlacenote.Instance.StopSession();
        FeaturesVisualizer.ClearPointcloud();

        onClearAllClick();
    }

	public void deleteAllObjects()
	{
		int numChildren = drawingRootSceneObject.transform.childCount;

		for (int i = 0; i < numChildren; i++) {

			GameObject toDestroy = drawingRootSceneObject.transform.GetChild (i).gameObject;

			if (string.Compare (toDestroy.name, "CubeBrushTip") != 0  && string.Compare (toDestroy.name, "SphereBrushTip") != 0   ) {
				Destroy (drawingRootSceneObject.transform.GetChild (i).gameObject);
			}
		}

	}


	public void onClearAllClick()
	{
		deleteAllObjects ();
		GetComponent<DrawingHistoryManager>().resetHistory ();
	}


	public void OnPose (Matrix4x4 outputPose, Matrix4x4 arkitPose) {}


	// This function runs when LibPlacenote sends a status change message like Localized!

	public void OnStatusChange (LibPlacenote.MappingStatus prevStatus, LibPlacenote.MappingStatus currStatus)
	{
		Debug.Log ("prevStatus: " + prevStatus.ToString() + " currStatus: " + currStatus.ToString());


		if (currStatus == LibPlacenote.MappingStatus.RUNNING && prevStatus == LibPlacenote.MappingStatus.LOST) {

			Debug.Log ("Localized!");

		} else if (currStatus == LibPlacenote.MappingStatus.RUNNING && prevStatus == LibPlacenote.MappingStatus.WAITING) {
			Debug.Log ("Mapping");

		} else if (currStatus == LibPlacenote.MappingStatus.LOST) {
			Debug.Log("Searching for position lock");

		} else if (currStatus == LibPlacenote.MappingStatus.WAITING) {

		}

	}

    public void OnLocalized()
    {
    	// Not being used right now
    	return;
        // textLabel.text = "Found It!";

        // loadSavedScene();

        // mLocalizationThumbnailContainer.gameObject.SetActive(false);

        // // To increase tracking smoothness after localization
        // LibPlacenote.Instance.StopSendingFrames();
    }
}
