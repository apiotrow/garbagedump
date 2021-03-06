﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

/*
 * Generates a fractal made of tiles using an L-system
 */
public class FractalGen : MonoBehaviour
{
	public string direction = "";

	List<Vector3> allTileVecs;
	
	int maxChunkSize = 500;
	//smaller chunks lead to higher framerates. larger makes fractal draw faster.
	int maxChunks = 1000;
	//max length of strip. larger will make more of fractal stay.
	bool addingCollider = false;
	//do we want to be able to walk on it?
	string constructionBit = "marker";
	//prefab fractal is composed of

	HashSet<Vector3> dontDupe = new HashSet<Vector3> ();
	public float x = 0;
	public float y = 0;
	public float z = 0;
	Queue<string> toRenderChunkQueue = new Queue<string> ();
	Vector3 camGoTo;
	GameObject[] chunkPool;
	GameObject[] tilePool;
	int chunkPoolIter = 0;
	int tilePoolIter = 0;

	public bool rotIt = false;
	GameObject lazyRotationHelper;


	Vector3 rodate(Vector3 v, float degrees) {
		float radians = degrees * Mathf.Deg2Rad;
		float sin = Mathf.Sin(radians);
		float cos = Mathf.Cos(radians);

		float tx = v.x;
		float ty = v.y;
		float tz = v.z;

		return new Vector3(cos * tx - sin * tz, ty, sin * tx + cos * tz);
	}

	void Update(){
		if(rotIt){

			for(int i = 0; i < chunkPool.Length; i++){
				Vector3 hey = chunkPool[i].transform.position;
//				hey = Quaternion.AngleAxis(30f, new Vector3(0, 1f, 0)) * hey;
				hey = rodate(hey, 30f);
				chunkPool[i].transform.position = hey;

//				chunkPool[i].transform.RotateAround(Vector3.zero, Vector3.left, 10f);
			}

//			for(int i = 0; i < allTileVecs.Count; i++){
//				lazyRotationHelper.transform.position = allTileVecs[i];
//				lazyRotationHelper.transform.rotation = allTileVecs[i];
//
//				lazyRotationHelper.transform.RotateAround(Vector3.zero, Vector3.left, 10f);
//
//				allTileVecs[i] = lazyRotationHelper.transform.position;
//				allTileVecs[i] = lazyRotationHelper.transform.rotation; 
//			}

			rotIt = false;
		}
	}

	void Start ()
	{
		allTileVecs = new List<Vector3>();

		//so we can rotate the fractal using GameObject.Transform function rather than
		//do the math ourselves
		lazyRotationHelper = new GameObject();
		lazyRotationHelper.name = "lazyRotationHelper";

		chunkPool = new GameObject[maxChunks];
		for (int i = 0; i < chunkPool.Length; i++) {
			GameObject newChunk = GameObject.Instantiate (Resources.Load ("LSYS/Prefabs/Chunk")) as GameObject;
			chunkPool [i] = newChunk;
			chunkPool [i].name = "chunk" + i;
			chunkPool [i].transform.SetParent (GameObject.Find ("Chunks").transform);
		}

		tilePool = new GameObject[maxChunkSize];
		for (int i = 0; i < tilePool.Length; i++) {
			GameObject newTile = GameObject.Instantiate (Resources.Load ("LSYS/Prefabs/" + constructionBit), 
				                      new Vector3 (0f, 0f, 0f), 
				                      Quaternion.Euler (new Vector3 (90f, 0f, 0f))) as GameObject;
			tilePool [i] = newTile;
			tilePool [i].SetActive (false);
		}
		
//		Dictionary<string, string> rand1 = LSYSgrammars.makeRandomDic(3);

		StartCoroutine (generateLStringDeterministic (LSYSgrammars.wideSpiral, 7, "a"));
		StartCoroutine (chunkFactory ());
		StartCoroutine (cameraFollow ());
	}

	#region L-System

	/*
	 * Generate an L string using specified rules.
	 */
	IEnumerator generateLStringDeterministic (Dictionary<string, string> rules, int iterations, string initString)
	{

		Stack<string> stringStack = new Stack<string> ();
		
		int n = 0;

		string part = initString;
		while (true) {
			//take us to n+1 by expanding the current part.
			//only do this if segment isn't on last iteration level.
			int s = 0;
			if (n != iterations) {
				while (s != part.Length) {
					string Lreplacement = rules [part [s].ToString ()];
					
					part = part.Remove (s, 1);
					part = part.Insert (s, Lreplacement);
					s += Lreplacement.Length;
				}
				n++;
			}
			
			//continually halve the new string until its under our size limit.
			//push remainders to the stack.
			while (part.Length > maxChunkSize) {
				//store excess with its iteration depth at the front
				stringStack.Push (n.ToString () + ":" + part.Substring ((int)Mathf.Floor (part.Length / 2)));
				part = part.Substring (0, (int)Mathf.Floor (part.Length / 2) - 1);
			}
			
			//if on last iteration and nothing is on the stack, we're on last segment
			//if on last iteration but things are on the stack, we have more
			if (n == iterations && stringStack.Count == 0) {
				toRenderChunkQueue.Enqueue (part);
				yield return null;
			} else if (n == iterations && stringStack.Count != 0) {
				toRenderChunkQueue.Enqueue (part);
				yield return null;
				
				//if next item on stack is on this level of iteration, it
				//must be same length or less, so we can chunk it without halving
				if (stringStack.Count != 0 && stringStack.Peek ().Contains (iterations.ToString ())) {
					part = stringStack.Pop ();
					part = part.Substring (part.IndexOf (":") + 1);
					toRenderChunkQueue.Enqueue (part);
					yield return null;
				}
				
				//if that was the last thing on the stack, we're done
				if (stringStack.Count == 0) {
					break;
					
					//if not, get part ready for next iteration
				} else {
					part = stringStack.Pop ();
					n = int.Parse (part.Substring (0, part.IndexOf (":")));
					part = part.Substring (part.IndexOf (":") + 1);
				}
			}
		}
		yield return null;
	}

	#endregion L-System

	#region Chunk

	/*
	 * Waits for L string segments to arrive in the chunk queue
	 * and generates them.
	 */
	IEnumerator chunkFactory ()
	{
		while (true) {
			if (toRenderChunkQueue.Count != 0) {
				makeChunk (toRenderChunkQueue.Dequeue ());
			}
			yield return null;
		}
	}

	/*
	 * Makes a chunk of size chunkSize.
	 */
	void makeChunk (string LString)
	{
		List<List<Vector3>> allNextChunkVecs = 
			divideTilePositionsIntoChunks (createTilePositions (LString));

		for (int i = 0; i < allNextChunkVecs.Count; i++) {
			if (chunkPoolIter >= chunkPool.Length - 1) {
				chunkPoolIter = 0;
			} else {
				chunkPoolIter++;
			}
			combineTileMeshes (createTiles (allNextChunkVecs [i]));
		}
	}

	/*
	 * Applies rules to create positions for fractal.
	 * Doesn't allow duplicate positions.
	 */
	List<Vector3> createTilePositions (string LString)
	{
		List<Vector3> finals = new List<Vector3> ();
		float increment = 1f;

		if(direction == "xz"){
			foreach (char c in LString) {
				switch (c) {
				case 'a':
					x += increment;
					break;
				case 'b':
					z += increment;
					break;
				case 'c':
					x -= increment;
					break;
				case 'd':
					z -= increment;
					break;	
				case 'e':
					z -= increment;
					break;
				case 'f':
					z -= increment;
					break;
				}

				//if fractal is not permanent, don't check for dupes, as little
				//holes will show up in the chunk
	//			if(dontDupe.Add(new Vector3(x, y, z))){
				finals.Add (new Vector3 (x, y, z));
	//			}

				//holds ALL the fucking verts, ever.
				allTileVecs.Add(new Vector3 (x, y, z));
			}
		}else if(direction == "xy"){
			foreach (char c in LString) {
				switch (c) {
				case 'a':
					x += increment;
					break;
				case 'b':
					y += increment;
					break;
				case 'c':
					x -= increment;
					break;
				case 'd':
					y -= increment;
					break;	
				case 'e':
					y -= increment;
					break;
				case 'f':
					y -= increment;
					break;
				}

				//if fractal is not permanent, don't check for dupes, as little
				//holes will show up in the chunk
				//			if(dontDupe.Add(new Vector3(x, y, z))){
				finals.Add (new Vector3 (x, y, z));
				//			}

				//holds ALL the fucking verts, ever.
				allTileVecs.Add(new Vector3 (x, y, z));
			}
		}

		print(allTileVecs.Count);

		if (finals.Count != 0)
			createNewCamPos (finals [0]);

		return finals;
	}

	/*
	 * Separates the list of tile positions to ensure no chunk exceeds
	 * max chunk size.
	 */
	List<List<Vector3>> divideTilePositionsIntoChunks (List<Vector3> finals)
	{
		List<List<Vector3>> allNextChunksVecs = new List<List<Vector3>> ();
		List<Vector3> nextChunkVecs = new List<Vector3> ();
		int q = 0;
		for (int i = 0; i < finals.Count; i++) {
			nextChunkVecs.Add (finals [i]);
			q++;
			
			if (q == maxChunkSize) {
				allNextChunksVecs.Add (nextChunkVecs);
				nextChunkVecs.Clear ();
				q = 0;
			} else if (i == finals.Count - 1) {
				allNextChunksVecs.Add (nextChunkVecs);
			}
		}
		return allNextChunksVecs;
	}

	/*
	 * Make a single game object whose mesh is a combination of multiple
	 * smaller meshes
	 */
	GameObject createTiles (List<Vector3> chunkVecs)
	{
		foreach (Vector3 vec in chunkVecs) {
			tilePool [tilePoolIter].transform.position = vec;
			tilePool [tilePoolIter].transform.SetParent (chunkPool [chunkPoolIter].gameObject.transform);
			tilePool [tilePoolIter].SetActive (true);
			if (tilePoolIter >= tilePool.Length - 1) {
				tilePoolIter = 0;
			} else {
				tilePoolIter++;
			}
		}
		return chunkPool [chunkPoolIter];
	}

	/*
	 * Combines meshes of the children of passed in GameObject
	 */
	void combineTileMeshes (GameObject newChunk)
	{
		newChunk.transform.GetComponent<MeshFilter> ().mesh.Clear ();

		MeshFilter[] meshFilters = newChunk.transform.GetComponentsInChildren<MeshFilter> ();
		CombineInstance[] combine = new CombineInstance[meshFilters.Length];

		//combine the meshes of the children of the chunk
		int i = 0;
		while (i < meshFilters.Length) {
			combine [i].mesh = meshFilters [i].sharedMesh;
			combine [i].transform = meshFilters [i].transform.localToWorldMatrix;
			meshFilters [i].gameObject.active = false;
			i++;
		}
		newChunk.transform.GetComponent<MeshFilter> ().mesh = new Mesh ();
		newChunk.transform.GetComponent<MeshFilter> ().mesh.CombineMeshes (combine);
		newChunk.transform.gameObject.active = true;

		if (addingCollider) {
			MeshCollider meshc = newChunk.AddComponent (typeof(MeshCollider)) as MeshCollider;
			meshc.sharedMesh = newChunk.transform.GetComponent<MeshFilter> ().mesh;
		}
	}

	#endregion Chunk

	#region Camera

	/*
	 * Make position for camera
	 */
	void createNewCamPos (Vector3 lookAt)
	{
		camGoTo = lookAt;
		camGoTo.y = Camera.main.transform.position.y;
	}
	
	/*
	 * Lerp camera to the x and z of point of focus
	 */
	IEnumerator cameraFollow ()
	{
		while (Camera.main.transform.position != camGoTo) {
			Camera.main.transform.position = Vector3.Lerp (Camera.main.transform.position, camGoTo, Time.deltaTime);
			yield return null;
		}
	}

	#endregion Camera
}
