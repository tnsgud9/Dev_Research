using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class car_follow : MonoBehaviour
{


	public float f_Speed=0.3f;

	int posCount = 0;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		this.transform.position =
			Vector3.MoveTowards(transform.position,input_mouse.trans[posCount].position, f_Speed*Time.deltaTime);
	}
}
