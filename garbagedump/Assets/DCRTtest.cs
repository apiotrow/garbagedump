using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using DatabaseControl;

public class DCRTtest : MonoBehaviour
{
	bool isDatabaseSetup = true;


	void Start ()
	{



		StartCoroutine (sendGetDataRequest ("oneone1", "oneone1"));
		StartCoroutine (sendGetDataRequest ("oneone1", "oneone1"));

	}


	void Update ()
	{
//		StartCoroutine (sendGetDataRequest ("oneone1", "oneone1"));
	}


	IEnumerator sendGetDataRequest (string username, string password)
	{



		IEnumerator eeee = DC.GetUserData (username, password);
		while (eeee.MoveNext ()) {
			yield return eeee.Current;
		}
		WWW returnedddd = eeee.Current as WWW;

		if (returnedddd.text == "Error") {
			//Error occurred. For more information of the error, DC.Login could
			//be used with the same username and password

			Debug.Log ("Data Upload Error. Could be a server error. To check try again, if problem still occurs, contact us.");
		} else {
			if (returnedddd.text == "ContainsUnsupportedSymbol") {
				//One of the parameters contained a - symbol

				Debug.Log ("Get Data Error: Contains Unsupported Symbol '-'");
			} else {
				//Data received in returned.text variable
				string DataRecieved = returnedddd.text;
				print (DataRecieved);
			}
		}
		
	}

	IEnumerator sendLoginRequest (string username, string password)
	{



		IEnumerator e = DC.Login (username, password);
		while (e.MoveNext ()) {
			yield return e.Current;
		}
		WWW returned = e.Current as WWW;
		if (returned.text == "Success") {
			print ("success");
		}
		if (returned.text == "incorrectUser") {
			//Account with username not found in database
			print ("Username not found");

		}
		if (returned.text == "incorrectPass") {
			//Account with username found, but password incorrect

			print ("Incorrect Password");
		}
		if (returned.text == "ContainsUnsupportedSymbol") {
			//One of the parameters contained a - symbol

			print ("Unsupported Symbol '-'");
		}
		if (returned.text == "Error") {
			//Account Not Created, another error occurred
			print ("Database Error. Try again later.");
		}




	}
}
