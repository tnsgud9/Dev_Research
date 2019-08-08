using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wall_system : MonoBehaviour
{
	public float WallSpeed=0.3f;
	
	// Use this for initialization
	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update()
	{
		this.transform.position += new Vector3(0,0,WallSpeed*Time.deltaTime);
		Vector3 Pos = this.transform.position;
		if (Pos.z >= 7f)
		{
			WallSpeed = -0.3f;
		}

	}
}
