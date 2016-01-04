using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class MDESFfigurecc : MonoBehaviour {
	Animator anim;
	public bool performHit;
	GameObject attLoc;
	List<GameObject> hitList;
	Transform enemy;
	
	void Start () {
		anim = GetComponent<Animator>();
		performHit = false;
		attLoc = transform.Find("attLoc").gameObject;
		hitList = new List<GameObject>();
	}

	void Update () {
		if(Input.GetKeyDown("1"))
			anim.SetTrigger("punch");
		else if(Input.GetKeyDown("2"))
			anim.SetTrigger("kick");

//			if(gotHit == true){
//				float step = gotHitSpeed * Time.deltaTime;
//				transform.position = Vector3.Lerp(transform.position, gotHitFlyToPos, step);
//	
//				//threshhold keeps player from slowing down too much near end of knockback
//				if((transform.position - gotHitFlyToPos).magnitude < 2f){
//					gotHit = false;
////					readyToTakeDmgAgain = true;
//				}
//			}



		if(performHit){
			performHit = false;
			print ("hit");
			Collider[] hitColliders = Physics.OverlapSphere (attLoc.transform.position, 1.5f);
			hitList.Clear ();

			int i = 0;
			while (i < hitColliders.Length) {
				if (hitColliders [i].gameObject.tag == "egethit") {
					enemy = hitColliders [i].transform.root;
					Vector3 newEnemyPos = enemy.position;
					newEnemyPos.x += 1f;
					hitColliders [i].transform.root.position = newEnemyPos;
					break;
				}
				i++;
			}
//			print (hitList.Count);
			
//			foreach(MDEec e in hitList){
//				e.beenHit = true;
//				//					Vector3 enemyFlytoPos = Vector3.Normalize(e.gameObject.transform.position - transform.position);
//				Vector3 enemyFlytoPos = e.gameObject.transform.position - transform.position;
//				
//				enemyFlytoPos = enemyFlytoPos * 2f;
//				enemyFlytoPos.y = e.gameObject.transform.position.y;
//				
//				e.gotHitFlyToPos = enemyFlytoPos;
//			}
		}
	}

}
