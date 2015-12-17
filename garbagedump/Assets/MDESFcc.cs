using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MDESFcc : MonoBehaviour {
	Animator anim;
	CharacterController cc;
	float xGo, yGo, zGo;
	bool u, d, l, r;
	float walkSpeed = 10f;
	bool allowAttack = true;

	internal class animTriggers{
		public const string thrust = "thrust";
		public const string whirlwind = "whirlwind";
		public const string axe = "axe";
	}

	internal class animNames{
		public const string thrust = "MDESFthrust";
		public const string whirlwind = "MDESFwhirlwind";
		public const string axe = "MDESFaxe";
	}
	
	void Start () {
		anim = GetComponent<Animator>();
		cc = GetComponent<CharacterController>();

	}

	void Update () {
		xGo = 0f;
		yGo = 0f;
		zGo = 0f;
		
		u = false;
		d = false;
		l = false;
		r = false;

		if (Input.GetKey (KeyCode.LeftArrow)) {
			l = true;
		}
		if (Input.GetKey (KeyCode.DownArrow)) {
			d = true;
		}
		if (Input.GetKey (KeyCode.UpArrow)) {
			u = true;
		}
		if (Input.GetKey (KeyCode.RightArrow)) {
			r = true;
		}
		
		if(l)
			xGo = -walkSpeed;
		if(d)
			zGo = -walkSpeed;
		if(r)
			xGo = walkSpeed;
		if(u)
			zGo = walkSpeed;
		
		Vector3 goVec = new Vector3(xGo, yGo, zGo);
		cc.SimpleMove(goVec);

		if(allowAttack){
			if (Input.GetKeyDown (KeyCode.A)) {
				anim.SetTrigger(animTriggers.thrust);
				allowAttack = false;
				StartCoroutine ("waitForAnimToStart", animNames.thrust);
			}
			if (Input.GetKeyDown (KeyCode.S)) {
				anim.SetTrigger(animTriggers.axe);
				allowAttack = false;
				StartCoroutine ("waitForAnimToStart", animNames.axe);
			}
			if (Input.GetKeyDown (KeyCode.D)) {
				anim.SetTrigger(animTriggers.whirlwind);
				allowAttack = false;
				StartCoroutine ("waitForAnimToStart", animNames.whirlwind);
			}
		}

	}


	#region animationWaiter
	IEnumerator waitForAnimToStart (string attackName)
	{
		while (true) {
			if (gameObject.GetComponent<Animator> ().GetCurrentAnimatorStateInfo (0).IsName (attackName)) {
				StartCoroutine ("waitForAnimToEnd", attackName);
				yield break;
			}
			yield return null;
		}
	}
	
	IEnumerator waitForAnimToEnd (string attackName)
	{

		while (true) {
			if (!anim.GetCurrentAnimatorStateInfo (0).IsName (attackName)) {
				allowAttack = true;
				yield break;
			}
			yield return null;
		}
	}
	#endregion animationWaiter
}
