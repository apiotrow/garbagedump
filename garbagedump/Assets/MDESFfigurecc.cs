using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class MDESFfigurecc : MonoBehaviour {
	Animator anim;
	
	void Start () {
		anim = GetComponent<Animator>();
	}

	void Update () {
		if(Input.GetKeyDown("1"))
			anim.SetTrigger("punch");
		else if(Input.GetKeyDown("2"))
			anim.SetTrigger("kick");
	}
}
