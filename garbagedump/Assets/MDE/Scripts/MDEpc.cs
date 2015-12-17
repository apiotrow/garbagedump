using UnityEngine;
using System.Collections;

public class MDEpc : MonoBehaviour {
	public ParticleSystem[] hitEnemyParticleSystem;
	
	float walkSpeed = 20f;
	float gotHitSpeed = 5f;

	public int health;
	public float privPower = 0f;

	CharacterController controller;
	public Animator animator;
	bool u, d, l, r, au, ad, al, ar;
	float xGo, yGo, zGo, ax, ay, az;
	bool gotHit;
	Vector3 gotHitFlyToPos;
	bool readyToTakeDmgAgain;


	Vector3 lookRot;
	public LayerMask lay;
	bool usingMouse = true;
	Vector3 lookTarget;

	void Start () {
		controller = GetComponent<CharacterController>();
		animator = GetComponent<Animator>();
		health = 100;
		readyToTakeDmgAgain = true;
		lookRot = transform.forward;
	}

	void Update(){

		if(usingMouse){
			RaycastHit vHit;
			Ray vRay = Camera.main.ScreenPointToRay(Input.mousePosition);
			if(Physics.Raycast(vRay, out vHit, 1000, lay)) 
			{
				lookTarget = vHit.point;
			}
		}
	

		//knockback
		if(gotHit == true){
			float step = gotHitSpeed * Time.deltaTime;
			transform.position = Vector3.Lerp(transform.position, gotHitFlyToPos, step);

			//threshhold keeps player from slowing down too much near end of knockback
			if((transform.position - gotHitFlyToPos).magnitude < 2f){
				gotHit = false;
				readyToTakeDmgAgain = true;
			}
		}


		if (Input.GetKeyDown (KeyCode.Mouse0) || Input.GetKeyDown (KeyCode.Space)) {
			animator.SetTrigger("MDEattack");
		}
		
//		if(Input.GetKey (KeyCode.Mouse1)){
//			animator.SetBool("blocking", true);
//		}
//		if(Input.GetKeyUp(KeyCode.Mouse1))
//			animator.SetBool("blocking", false);
		
		
		u = false;
		d = false;
		l = false;
		r = false;

		au = false;
		ad = false;
		al = false;
		ar = false;


		xGo = 0f;
		yGo = 0f;
		zGo = 0f;

		ax = 0f;
		az = 0f;
		az = 0f;
		
//		animator.SetBool("walking", false);

		//movement direction
		if (Input.GetKey (KeyCode.A)) {
			l = true;
//			animator.SetBool("walking", true);
		}
		if (Input.GetKey (KeyCode.S)) {
			d = true;
//			animator.SetBool("walking", true);
		}
		if (Input.GetKey (KeyCode.W)) {
			u = true;
//			animator.SetBool("walking", true);
		}
		if (Input.GetKey (KeyCode.D)) {
			r = true;
//			animator.SetBool("walking", true);
		}

		//facing direction
		if (Input.GetKey (KeyCode.LeftArrow)) {
			al = true;
		}
		if (Input.GetKey (KeyCode.DownArrow)) {
			ad = true;
		}
		if (Input.GetKey (KeyCode.UpArrow)) {
			au = true;
		}
		if (Input.GetKey (KeyCode.RightArrow)) {
			ar = true;
		}
		
		if(l)
			xGo = -walkSpeed;
		if(d)
			zGo = -walkSpeed;
		if(r)
			xGo = walkSpeed;
		if(u)
			zGo = walkSpeed;

		if(al)
			ax = -walkSpeed;
		if(ad)
			az = -walkSpeed;
		if(ar)
			ax = walkSpeed;
		if(au)
			az = walkSpeed;


		
		
		if(!gotHit){
			


			if(usingMouse){
				lookRot =  transform.position - lookTarget;
				lookRot.y = 0f;
			}else{
				if(ax == 0f && az == 0f){
					lookRot = lookRot; //keep player looking in direction he's facing
					
				}else{
					lookRot = new Vector3(-ax, yGo, -az); //make player face new dir of movement
				}
			}

			controller.SimpleMove(new Vector3(xGo, yGo, zGo));
			controller.transform.forward = Vector3.RotateTowards(transform.forward, lookRot, Time.deltaTime * 30f, 0f);
		}


	}


	public void performHit(){
		privPower += 1;

		for(int i = 0; i < hitEnemyParticleSystem.Length; i++){
			hitEnemyParticleSystem[i].Play ();
		}
	}

	public void takeHit(float dist){
//		if(privPower > 0)
//			privPower -= 1;

		if(readyToTakeDmgAgain == true){
			health -= 5;
			readyToTakeDmgAgain = false;
		}

		//if blocking, don't get knocked back
		if(animator.GetBool("blocking") == false){
			gotHit = true;
			gotHitFlyToPos = new Vector3(transform.position.x + dist, transform.position.y, transform.position.z);
		}
	}
}
