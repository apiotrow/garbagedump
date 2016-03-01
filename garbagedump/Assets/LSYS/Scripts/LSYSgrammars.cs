using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public static class LSYSgrammars {

	public static Dictionary<string, string> simple2 = new Dictionary<string, string>(){
		{"a", "abf"},
		{"b", "bcd"},
		{"c", "cda"},
		{"d", "deb"},
		{"e", "ebf"},
		{"f", "fcf"},
	};

	public static Dictionary<string, string> simple = new Dictionary<string, string>(){
		{"a", "afb"},
		{"b", "bbc"},
		{"c", "ccd"},
		{"d", "dea"},
		{"e", "efe"},
		{"f", "faf"},
	};

	//a
	public static Dictionary<string, string> wideSpiral = new Dictionary<string, string>(){
		{"a", "abb"},
		{"b", "bcc"},
		{"c", "cdd"},
		{"d", "daa"},
	};

	//a: x+, b: z+, c: x-, d: z-, starting: a
	public static Dictionary<string, string> levycurve = new Dictionary<string, string>(){
		{"a", "ab"},
		{"b", "bc"},
		{"c", "cd"},
		{"d", "da"}
	};
	
	//a: x+, b: z+, c: x-, d: z-, starting: a
	public static Dictionary<string, string> juliaSetish = new Dictionary<string, string>(){
		{"a", "bab"},
		{"b", "cbc"},
		{"c", "dcd"},
		{"d", "ada"}
	};
	
	//a: x+, b: z+, c: x-, d: z-, starting: ac
	public static Dictionary<string, string> spiraly = new Dictionary<string, string>(){
		{"a", "dad"},
		{"b", "ba"},
		{"c", "bcb"},
		{"d", "dc"}
	};
	
	//a: x+, b: z+, c: x-, d: z-, starting: ac
	public static Dictionary<string, string> rhombus = new Dictionary<string, string>(){
		{"a", "bcb"},
		{"b", "ba"},
		{"c", "dad"},
		{"d", "dc"}
	};
	
	////a: x+, b: z+, c: x-, d: z-, starting: ace
	public static Dictionary<string, string> loops = new Dictionary<string, string>(){
		{"a", "faf"},
		{"b", "ba"},
		{"c", "bcb"},
		{"d", "dc"},
		{"e", "ded"},
		{"f", "fe"}
	};

	
	public static Dictionary<string, string> rules = new Dictionary<string, string>(){
		{"a", "faf"},
		{"b", "ba"},
		{"c", "bcb"},
		{"d", "dc"},
		{"e", "ded"},
		{"f", "fe"}
	};

	public static Dictionary<string, string> makeRandomDic(int convertLength){
		string alphabet = "abcde";

		Dictionary<string, string> randomDic = new Dictionary<string, string>();

		for(int i = 0; i < alphabet.Length; i++){
			string randConvert = "";

			for(int k = 0; k < convertLength; k++){
				randConvert = randConvert +  alphabet[Random.Range(0, alphabet.Length)];
			}

			string keyString = "" + alphabet[i];
			randomDic.Add(keyString, randConvert);
		}

		return randomDic;
	}

}
