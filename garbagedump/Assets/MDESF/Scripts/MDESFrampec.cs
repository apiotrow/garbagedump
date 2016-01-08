using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MDESFrampec : MonoBehaviour {
	MDESFrampcc pc;

	Slider ramp;
	public Text txt;
	public KeyCode[] buttons = new KeyCode[3]{KeyCode.Q, KeyCode.W, KeyCode.E};
	string[] moves = new string[3] {"Q", "W", "E"};
	float[] rampSpeeds = new float[3] {0.5f, 0.7f, 1f};
	public int currMove = -1;
	Image rampFill;
	public Color rampFillColor = Color.green;
	
	void Start () {
		ramp = GetComponent<Slider>();
		pc = GameObject.Find("PlayerRamp").GetComponent<MDESFrampcc>();
		txt = transform.Find("Text").GetComponent<Text>();
		rampFill = transform.Find("Fill Area/Fill").GetComponent<Image>();
	}
	
	void Update () {
		rampFill.color = rampFillColor;

		if(currMove == -1)
			currMove = (int)Mathf.Floor(Random.Range(0f, (float)moves.Length));
			
		txt.text = moves[currMove];
		rampUp(rampSpeeds[currMove]);

		if(ramp.value == 1f){
			resetMove();
		}
	}
	
	void rampUp(float speed){
		ramp.value = Mathf.MoveTowards(ramp.value, 1f, Time.deltaTime * speed);
	}

	public bool wrongButton(){
		for(int i = 0; i < buttons.Length; i++){
			if(currMove != i && Input.GetKeyDown(buttons[i])){
				return true;
			}
		}
		return false;
	}

	public void resetMove(){
		currMove = -1;
		ramp.value = 0f;
		rampFillColor = Color.green;
	}
}
