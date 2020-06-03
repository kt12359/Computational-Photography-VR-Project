﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.IO;
using System.Linq;

public class DrawingHistoryManager : MonoBehaviour {

	public GameObject paintBrushSceneObject;

	public class DrawingCommand{
		public int index;
		public int objType;
		public Vector3 position;
		public Color color;
		public float lineWidth;
		public int layerNum;

		// A drawing command from individual values
		public DrawingCommand(int _index, int _objType, Vector3 _position, Color _color, float _lineWidth)
		{
			index = _index;
			objType = _objType;
			position = _position;
			color = _color;
			lineWidth = _lineWidth;
			layerNum = 1;
		}

		// A drawing command from a single string representation
		public DrawingCommand(string commandString)
		{
			string[] values = commandString.Split(',');

			index = Int32.Parse(values[0]);
			objType = Int32.Parse(values[1]);
			position = new Vector3 (Convert.ToSingle(values[2]), Convert.ToSingle(values[3]), Convert.ToSingle(values[4]));
			Debug.Log("Loaded position: " + position);
			color = new Color(Convert.ToSingle(values[5]), Convert.ToSingle(values[6]), Convert.ToSingle(values[7]));
			lineWidth = Convert.ToSingle (values [8]);
			layerNum = Int32.Parse(values[9]);
		}

		// Comma-delimited string representation
		override public string ToString()
		{
			string commandString = 
				index.ToString() + "," + 
				objType.ToString() + "," + 
				position.x.ToString() + "," + 
				position.y.ToString() + "," + 
				position.z.ToString() + "," + 
				color.r.ToString() + "," + 
				color.g.ToString() + "," + 
				color.b.ToString() + "," + 
				lineWidth.ToString() + "," +
				layerNum.ToString();
			return commandString;
		}
	}

	public List<DrawingCommand> drawingHistory;
	private bool layer1Active;
	private bool layer2Active;
	private bool layer3Active;
	private bool layer4Active;

	// Use this for initialization
	void Start () {
		// initialize the queue.
		drawingHistory = new List<DrawingCommand>();
		layer1Active = false;
		layer2Active = false;
		layer3Active = false;
		layer4Active = false;
	}

	// Update is called once per frame
	void Update () {}

	public void resetHistory()
	{
		for(int i = 1; i <= 4; ++i)
			setLayerActive(i, false);
		drawingHistory.Clear();
	}

	public void deleteAllInLayer(int layerNum)
	{
		GetComponent<PaintController>().deleteAllObjects();
		if(layer1Active){
			loadLayer(1);
			setLayerActive(1, false);
		}
		if(layer2Active){
			loadLayer(2);
			setLayerActive(2, false);
		}
		if(layer3Active){
			loadLayer(3);
			setLayerActive(3, false);
		}
		if(layer4Active){
			loadLayer(4);
			setLayerActive(4, false);
		}
	}

	public void addDrawingCommand(int index, int objType, Vector3 position, Color color, float lineWidth)
	{
		DrawingCommand newCommand = new DrawingCommand (index, objType, position, color, lineWidth);
		drawingHistory.Add (newCommand);
	}


	// TODO Either remove or use this
	public void saveMapIDToFile(string mapid, int layerNum)
	{
		// string filePath = Application.persistentDataPath + "/mapIDFile" + layerNum + ".txt";
		string filePath = Application.persistentDataPath + "/mapIDFile.txt";
		StreamWriter sr = File.CreateText (filePath);
		sr.WriteLine (mapid);
		sr.Close ();
	}

	// TODO Either remove or use this
	public string loadMapIDFromFile (int layerNum)
	{
		string savedMapID;

		// read history file
		FileInfo historyFile = new FileInfo(Application.persistentDataPath + "/mapIDFile.txt");
		StreamReader sr = historyFile.OpenText ();
		string text;

		do {
			text = sr.ReadLine();

			if (text != null)
			{
				// Create drawing command structure from string.
				savedMapID = text;
				return savedMapID;
			}

		} while (text != null);

		return null;
	}

	public void moveLayer(int layerNum, Vector3 newPos)
	{
		Debug.Log("Moving layer " + layerNum + " to position " + newPos);

		foreach(DrawingCommand command in drawingHistory)
		{
			Debug.Log("Command position: " + command.position);
			if(command.layerNum == layerNum)
			{
				Debug.Log("Start position: " + command.position);
				Debug.Log("New position: "+ newPos);
				command.position += newPos;
				Debug.Log("End position: " + command.position);

			}
		}
		saveLayer(layerNum);
		deleteAllInLayer(layerNum);
		//loadLayer(layerNum);
		//resetHistory();
		//loadLayer(layerNum);
		/*for(int i = 1; i <= 4; ++i)
		{
			if(drawingHistory.Exists(delegate(DrawingCommand command) { return command.layerNum == i; }))
				loadLayer(i);
		}*/
		//loadLayer(layerNum);
	}


	// Save a layer to a file
	public void saveLayer(int layerNum)
	{
		string layerFilepath = Application.persistentDataPath + "/layer" + layerNum + ".txt";

		Debug.Log ("saveLayer(" + layerNum + "); filepath = " + layerFilepath);

		StreamWriter writer = File.CreateText (layerFilepath);

		foreach (DrawingCommand command in drawingHistory)
		{
			command.layerNum = layerNum;
			writer.WriteLine (command.ToString());
		}
		writer.Close();
		setLayerActive(layerNum, true);
	}

	public void setLayerActive(int layerNum, bool active)
	{
		if(layerNum == 1)
			layer1Active = active;
		else if(layerNum == 2)
			layer2Active = active;
		else if(layerNum == 3)
			layer3Active = active;
		else
			layer4Active = active;
	}

	// Loads a saved layer and renders to the screen
	public void loadLayer(int layerNum)
	{
		FileInfo layerFile = new FileInfo(Application.persistentDataPath + "/layer" + layerNum + ".txt");
		StreamReader reader = layerFile.OpenText();
		string commandString;
		List<DrawingCommand> commands = new List<DrawingCommand>();

		// Read the commands from the file
		while (true) 
		{
			commandString = reader.ReadLine();
			if (commandString == null) break;
			commands.Add(new DrawingCommand(commandString));
		}
		setLayerActive(layerNum, true);
		StartCoroutine(renderCommands(commands));
	}

	// Renders a list of commands to the screen
	public IEnumerator renderCommands(List<DrawingCommand> commands)
	{
		int currentIndex = -1;

		foreach (DrawingCommand command in commands) {

			// Add to history
			drawingHistory.Add(command);

			// Render the command
			if (command.index == currentIndex) {
				// Continue drawing the same object/line
				paintBrushSceneObject.GetComponent<DrawLineManager>().addReplayLineSegment(true, command.lineWidth, command.position, command.color);
				currentIndex = command.index;

			} else if (command.index > currentIndex) {
				// Start new object/line
				if (command.objType == 0)
				{
					// It's a line
					paintBrushSceneObject.GetComponent<DrawLineManager>().addReplayLineSegment(false, command.lineWidth, command.position, command.color);
					currentIndex = command.index;
				}
				else if (command.objType == 1)
				{
					// add cube
					// TODO - do we need this? Right now only objType=1 is being used
					//cubePanel.GetComponent<DrawCubeManager>().addReplayCubeAtEndpoint(command.position, command.color);
					currentIndex = command.index;
				}
			}

            yield return null;
		}
	}
}
