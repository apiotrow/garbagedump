using UnityEngine;
using System.Collections;

public class MDEec : MonoBehaviour {
	CharacterController controller;
	MDEpc pc;
	Vector3 playerPos;
	float moveSpeed;
	public bool beenHit = false;

	float gotHitSpeed = 5f;
	public Vector3 gotHitFlyToPos;
	bool readyToGetHitAgain;
	
	void Start () {
		controller = GetComponent<CharacterController>();
		pc = GameObject.Find("player").GetComponent<MDEpc>();
		playerPos = pc.transform.position;
		moveSpeed = Random.Range(1f, 2f);
	}

	void Update () {
		playerPos = pc.transform.position;
		Vector3 goDir = playerPos - transform.position;
		goDir = goDir.normalized;

		if(beenHit){
			float step = gotHitSpeed * Time.deltaTime;
			transform.position = Vector3.Lerp(transform.position, gotHitFlyToPos, step);

			//threshhold keeps player from slowing down too much near end of knockback
			if((transform.position - gotHitFlyToPos).magnitude < 1f){
				beenHit = false;
				readyToGetHitAgain = true;
			}
		}else{
			controller.SimpleMove(goDir * moveSpeed);
		}
	}
}
