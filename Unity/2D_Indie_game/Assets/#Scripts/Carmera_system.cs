using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Carmera_system : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		transform.position += Vector3.left * Time.deltaTime * 0.3f;
	} 
}
