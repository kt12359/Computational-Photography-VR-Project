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

    [SerializeField] GameObject brushTipObject;
    [SerializeField] GameObject colorPalette;

    [SerializeField] RawImage mLocalizationThumbnail;
    [SerializeField] Image mLocalizationThumbnailContainer;

    public int drawingHistoryIndex = 0;

	// Use this for initialization
	void Start () {

        //FeaturesVisualizer.EnablePointcloud ();
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
		paintPanel.SetActive (false);
		colorPalette.SetActive(false);
		brushTipObject.SetActive(false);

		// Make sure this child is active for when its parent is active
		buttonPanel = paintPanel.transform.Find("ButtonPanel").gameObject;
		buttonPanel.SetActive(true);
    }

	public void onClickEnablePointCloud()
	{
		if (pointCloudOn == false) {
            FeaturesVisualizer.EnablePointcloud(new Color(1f, 1f, 1f, 0.2f), new Color(1f, 1f, 1f, 0.8f));
			pointCloudOn = true;
			Debug.Log ("Point Cloud On");
		} else {
			FeaturesVisualizer.DisablePointcloud ();
            FeaturesVisualizer.ClearPointcloud();
            pointCloudOn = false;
			Debug.Log ("Point Cloud Off");
		}

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


	public void OnSaveLayerClick (int layerNum)
	{
		if (!LibPlacenote.Instance.Initialized()) {
			Debug.Log ("SDK not yet initialized");
			return;
		}

		textLabel.text = "Saving Layer " + layerNum;
		GetComponent<DrawingHistoryManager>().saveLayer(layerNum);
		textLabel.text = "Layer " + layerNum + " saved!";
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
