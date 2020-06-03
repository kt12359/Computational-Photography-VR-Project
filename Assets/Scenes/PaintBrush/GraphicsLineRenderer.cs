﻿using UnityEngine;
using System.Collections.Generic;


[RequireComponent (typeof(MeshRenderer))]
[RequireComponent (typeof(MeshFilter))]

public class GraphicsLineRenderer : MonoBehaviour {


	private Mesh ml;
	private Vector3 s;

	private float lineSize = 0.03f;
	private bool firstQuad = true;

	void Start ()
	{
		ml = GetComponent<MeshFilter>().mesh;
	}

	// Sets the material that appears on top
	public void SetPrimaryMaterial(Material mat)
	{
		Material[] mats = GetComponent<MeshRenderer>().materials;
		mats[0] = mat;
		GetComponent<MeshRenderer>().materials = mats;
	}

	// Sets the material that appears underneath
	public void SetSecondaryMaterial(Material mat)
	{
		Material[] mats = new Material[2];
		mats[0] = GetComponent<MeshRenderer>().materials[0];
		mats[1] = mat;
		GetComponent<MeshRenderer>().materials = mats;
	}

	// Sets the color of the primary and secondary materials
	public void SetColor(Color color)
	{
		Color c = color;
		if (GetComponent<MeshRenderer>().materials.Length == 2) {
			c.a = 0.5f;
			GetComponent<MeshRenderer>().materials[0].color = c;
			GetComponent<MeshRenderer>().materials[1].color = c;
		}
		else {
			c.a = 1.0f;
			GetComponent<MeshRenderer>().materials[0].color = c;
		}
	}

	public Color GetColor()
	{
		return GetComponent<MeshRenderer>().materials[0].color;
	}

	public void SetWidth(float width)
	{
		lineSize = width;
	}

	public void AddPoint(Vector3 point){

		if (s != Vector3.zero) {
			AddLine(ml, MakeQuad(s, point, lineSize, firstQuad));
			firstQuad = false;
		}
		s = point;
	}

	Vector3[] MakeQuad(Vector3 s, Vector3 e, float w, bool all) {
		w = w / 2;

		Vector3[] q;

		if (all)
			q = new Vector3[4];
		else
			q = new Vector3[2];

		Vector3 n = Vector3.Cross(s, e);
		Vector3 l = Vector3.Cross(n, e-s);
		l.Normalize();

		if (all) {
			q [0] = transform.InverseTransformPoint (s + l * w);
			q [1] = transform.InverseTransformPoint (s + l * -w);
			q [2] = transform.InverseTransformPoint (e + l * w);
			q [3] = transform.InverseTransformPoint (e + l * -w);
		} else {
			q [0] = transform.InverseTransformPoint (e + l * w);
			q [1] = transform.InverseTransformPoint (e + l * -w);
		}
		return q;
	}


	void AddLine(Mesh m, Vector3[] quad) {

		int vl = m.vertices.Length;

		Vector3[] vs = m.vertices;
		vs = resizeVertices (vs, 2 * quad.Length);

		for (int i = 0; i < 2 * quad.Length; i += 2) {
			vs [vl + i] = quad [i / 2];
			vs [vl + i+1] = quad [i / 2];
		}

		Vector2[] uvs = m.uv;
		uvs = resizeUVs (uvs, 2 * quad.Length);

		if (quad.Length == 4) {

			uvs [vl] = Vector2.zero;
			uvs [vl + 1] = Vector2.zero;
			uvs [vl + 2] = Vector2.right;
			uvs [vl + 3] = Vector2.right;
			uvs [vl + 4] = Vector2.up;
			uvs [vl + 5] = Vector2.up;
			uvs [vl + 6] = Vector2.one;
			uvs [vl + 7] = Vector2.one;

		} else {

			if (vl % 8 == 0) {
				uvs [vl] = Vector2.zero;
				uvs [vl + 1] = Vector2.zero;
				uvs [vl + 2] = Vector2.right;
				uvs [vl + 3] = Vector2.right;
			} else {
				uvs [vl] = Vector2.up;
				uvs [vl + 1] = Vector2.up;
				uvs [vl + 2] = Vector2.one;
				uvs [vl + 3] = Vector2.one;
			}
		}

		int tl = m.triangles.Length;

		int[] ts = m.triangles;
		ts = resizeTraingles (ts, 12);

		if (quad.Length == 2)
			vl -= 4;

		// front facing quad
		ts[tl] = vl;
		ts [tl + 1] = vl + 2;
		ts [tl + 2] = vl + 4;

		ts [tl + 3] = vl + 2;
		ts [tl + 4] = vl + 6;
		ts [tl + 5] = vl + 4;

		// back facing quad

		ts [tl + 6] = vl + 5;
		ts [tl + 7] = vl + 3;
		ts [tl + 8] = vl + 1;

		ts [tl + 9] = vl + 5;
		ts [tl + 10] = vl + 7;
		ts [tl + 11] = vl + 3;

		m.vertices = vs;
		m.uv = uvs;
		m.triangles = ts;
		m.RecalculateBounds ();
		m.RecalculateNormals ();
	}


	Vector3[] resizeVertices(Vector3[] ovs, int ns) {
		Vector3[] nvs = new Vector3[ovs.Length + ns];
		for(int i = 0; i < ovs.Length; i++) nvs[i] = ovs[i];
		return nvs;
	}

	int[] resizeTraingles(int[] ovs, int ns) {
		int[] nvs = new int[ovs.Length + ns];
		for(int i = 0; i < ovs.Length; i++) nvs[i] = ovs[i];
		return nvs;
	}

	Vector2[] resizeUVs(Vector2[] uvs, int ns) {

		Vector2[] nvs = new Vector2[uvs.Length + ns];
		for (int i = 0; i < uvs.Length; i++)
			nvs [i] = uvs [i];
		return nvs;
	}


	/*
	void Draw() {
		Graphics.DrawMesh(ml, transform.localToWorldMatrix, lmat, 0);
		Graphics.DrawMesh(ms, transform.localToWorldMatrix, smat, 0);
	}

	void Update() {
		if(Input.GetMouseButton(0)) {

			Vector3 e = GetNewPoint();

			if(first == null) {
				first = new Point();
				first.p = transform.InverseTransformPoint(e);
			}

			if(s != Vector3.zero) {
				Vector3 ls = transform.TransformPoint(s);
				AddLine(ml, MakeQuad(ls, e, lineSize), false);

				Point points = first;
				while(points.next != null) {
					Vector3 next = transform.TransformPoint(points.p);
					float d = Vector3.Distance(next, ls);
					if(d < 1 && Random.value > 0.9f) {
						AddLine(ms, MakeQuad(next, ls, lineSize), false);
					}
					points = points.next;
				}

				Point np = new Point();
				np.p = transform.InverseTransformPoint(e);
				points.next = np;

			}

			s = transform.InverseTransformPoint(e);
		} else {
			s = Vector3.zero;
		}

		Draw();

	}		

  */


}







