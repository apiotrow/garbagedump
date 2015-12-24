using UnityEngine;
using System.Collections;

public class MDESFatkcubeenter : MonoBehaviour {
	
	void Start () {
	
	}
	

	void OnTriggerEnter(Collider o)
	{
		print (o.gameObject.name);

//		if(o.gameObject.GetComponent<EnemyController>() != null){
//			o.gameObject.GetComponent<EnemyController>().takeHit(Random.Range(5f, 15f));
//			//			o.gameObject.GetComponent<EnemyController>().takeHit(playerController.privPower * 3f);
//			
//			playerController.performHit();
//		}
	}
}
