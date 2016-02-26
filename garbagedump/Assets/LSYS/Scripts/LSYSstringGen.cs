using UnityEngine;
using System;
using System.Collections.Generic;

public class LSYSstringGen : MonoBehaviour
{
	int inf = 0;
	string Lstring;

	void Start ()
	{
//		StartCoroutine(generateLString(LSYSgrammars.rhombus, 5, "ac"));
		generateLString (LSYSgrammars.levycurve, 5, "a");

//		print(Lstring);

		int dim = Lstring.Length;
		List<Vector3> locs = new List<Vector3> ();

		char[] charArray = Lstring.ToCharArray ();
		Array.Reverse (charArray);
		string LstringReverse = new string (charArray);
//		string LstringReverse = Lstring;

		for (int i = 0; i < dim; i++) {
			for (int j = 0; j < dim; j++) {
				for (int k = 0; k < dim; k++) {
					if (Lstring [i] == Lstring [j]
					   && Lstring [i] == Lstring [k]
					   && Lstring [k] == Lstring [j]) {
						locs.Add (new Vector3 ((float)i, (float)k, (float)j));
//						locs.Add(new Vector3((float)i, 0f, (float)j));
					}
				}
			}
		}

		print (locs.Count);

		for (int i = 0; i < locs.Count; i++) {
			GameObject bit = GameObject.CreatePrimitive (PrimitiveType.Cube);
			bit.transform.position = locs [i];
//			bit.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
//			bit.transform.Rotate(new Vector3(90f, 0f, 0f));
		}


//		Vector3[,] side = new Vector3[dim, dim];
//		for(int i = 0; i < dim; i++){
//			for(int j = 0; j < dim; j++){
//				side[i][j] 
//			}
//
//		}

	}


	void Update ()
	{
	
	}

	void generateLString (Dictionary<string, string> rules, int iterations, string initString)
	{
		Stack<string> stringStack = new Stack<string> ();

		int n = 0;

		while (n != iterations) {
			int s = 0;

			while (s != initString.Length) {
				string Lreplacement = rules [initString [s].ToString ()];

				initString = initString.Remove (s, 1);
				initString = initString.Insert (s, Lreplacement);
				s += Lreplacement.Length;

				inf++;
				if (inf > 1000) {
					print ("inf");
					break;
				}
			}

			n++;
			print (initString.Length);
			print (initString);
		}
		Lstring = initString;
	}



}
