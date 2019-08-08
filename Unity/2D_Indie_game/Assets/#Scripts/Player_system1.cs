using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using System.Runtime.InteropServices;
using UnityEditor;
using UnityEngine;

public class Player_system1 : MonoBehaviour
{

	//공개
	public static float Speed=3f;
	
	
	//비공개	
	private int _PosCount = 0;
	
	
	// Use this for initialization
	void Start ()
	{
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		Chasing();
		
		
	}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//                                                                                        //  
	//                                                                                        //  
	//                                  PC   사용자 지정 함수                                   //                  
	//                                                                                        //  
	//                                                                                        //  

	void Chasing ()
	{

		transform.LookAt((Vector3) mouse_input1.MousePos[_PosCount]);
		transform.position.Normalize();
		//transform.Translate((Vector3) mouse_input1.MousePos[_PosCount]);
		transform.position =
			Vector3.MoveTowards(transform.position, (Vector3) mouse_input1.MousePos[_PosCount], Speed*Time.deltaTime);
		
		if (transform.position == (Vector3) mouse_input1.MousePos[_PosCount])
		{
			_PosCount++;
			mouse_input1.MousePos.RemoveAt(_PosCount-1);
		}
		
	}

	
}
