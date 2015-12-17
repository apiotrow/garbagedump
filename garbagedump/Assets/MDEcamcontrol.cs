using UnityEngine;
using System.Collections;

public class MDEcamcontrol : MonoBehaviour {
	MDEpc pc;
	float xOffset;
	float zOffset;
	
	void Start () {
		pc = GameObject.Find("player").GetComponent<MDEpc>();
		Vector3 playerPos = pc.transform.position;

		xOffset = playerPos.x - transform.position.x;
		zOffset = playerPos.z - transform.position.z;
	}

	void Update () {
		Vector3 playerPos = pc.transform.position;
		float newCamX = playerPos.x - xOffset;
		float newCamZ = playerPos.z - zOffset;
		float newCamY = transform.position.y;

		transform.position = Vector3.Lerp (transform.position, new Vector3(newCamX, newCamY, newCamZ), Time.deltaTime * 10f);
	}
}
