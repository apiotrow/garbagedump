using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class LSYSstringGen : MonoBehaviour
{
	int inf = 0;
	//	string Lstring;



	void Start ()
	{
		
		Dictionary<string, string> rand1 = LSYSgrammars.makeRandomDic(3);
		Dictionary<string, string> rand2 = LSYSgrammars.makeRandomDic(3);
//		Dictionary<string, string> rand3 = LSYSgrammars.makeRandomDic(3);

		string one = generateLString (rand1, 3, "a");
		string two = generateLString (rand2, 3, "a");
//		string three = generateLString (rand3, 3, "c");
		print (one);
		print (two);
		int dim = one.Length;
		List<Vector3> locs = new List<Vector3> ();


		char[] charArray = one.ToCharArray ();
		System.Array.Reverse (charArray);
		string LstringReverse = new string (charArray);

		Dictionary<char, float> hdic = new Dictionary<char, float>(){
			{'a', 1f},
			{'b', 2f},
			{'c', 3f},
			{'d', 4f}
		};

		//height
//		for (int i = 0; i < dim; i++) {
//			for (int j = 0; j < dim; j++) {
//				if (one [i] == two [j]){
//					float h = hdic[one[i]] + hdic[two[i]];
//					locs.Add (new Vector3 ((float)i, h, (float)j));
//				}
//			}
//		}


		//2d
		for (int i = 0; i < dim; i++) {
			for (int j = 0; j < dim; j++) {
				if (one [i] == one [j])
					locs.Add(new Vector3((float)i, 0f, (float)j));
			}
		}

		//3d
//		for (int i = 0; i < dim; i++) {
//			for (int j = 0; j < dim; j++) {
//				for (int k = 0; k < dim; k++) {
//					if (one [i] == one [j]
//						&& one [i] == three [k]
//						&& three [k] == one [j]) {
//						locs.Add (new Vector3 ((float)i, (float)k, (float)j));
//					}
//				}
//			}
//		}


		for (int i = 0; i < locs.Count; i++) {
//			GameObject bit = GameObject.CreatePrimitive (PrimitiveType.Cube);
			GameObject bit = GameObject.Instantiate (Resources.Load ("LSYS/Prefabs/marker")) as GameObject;
			bit.transform.position = locs [i];
//			bit.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
//			bit.transform.Rotate(new Vector3(90f, 0f, 0f));
		}



	}





	string generateLString (Dictionary<string, string> rules, int iterations, string initString)
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
		}
		return initString;
	}



}
