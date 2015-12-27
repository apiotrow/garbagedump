using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MDESFrampcc : MonoBehaviour {
	MDESFrampec enemyc;

	Slider ramp;
	public Text txt;
	public float rampVal;
	
	void Start () {
		ramp = GetComponent<Slider>();
		enemyc = GameObject.Find("EnemyRamp").GetComponent<MDESFrampec>();
		txt = transform.Find("Text").GetComponent<Text>();
	}

	void Update () {


		if(enemyc.currMove != -1){
			if(pressedRightButton()){
				enemyc.resetMove();
			}else if(pressedWrongButton()){
				enemyc.rampFillColor = Color.red;
			}
		}

	}

	void rampUp(float speed){
		ramp.value = Mathf.MoveTowards(ramp.value, 1f, Time.deltaTime * speed);
	}

	bool pressedRightButton(){
		if(Input.GetKeyDown(enemyc.buttons[enemyc.currMove]))
			return true;
		return false;
	}

	bool pressedWrongButton(){
		//least invasive
		return enemyc.wrongButton();

		//invasive method
//		for(int i = 0; i < enemyc.buttons.Length; i++){
//			if(enemyc.currMove != i && Input.GetKeyDown(enemyc.buttons[i])){
//				return true;
//			}
//		}
//		return false;



		//neat but still invasive
		//		KeyCode[] k = enemyc.buttons;
		//		int cm = enemyc.currMove;
		//
		//		for(int i = 0; i < k.Length; i++){
		//			if(cm != i && Input.GetKeyDown(k[i])){
		//				return true;
		//			}
		//		}
		//		return false;
	}
}
