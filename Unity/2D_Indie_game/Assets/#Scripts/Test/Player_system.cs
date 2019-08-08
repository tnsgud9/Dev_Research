using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using UnityEditor;
using UnityEngine;

public class Player_system : MonoBehaviour
{

	
	public float Speed=0.03f;
	public static float f_Speed;
	
	
	int pos_count = 0;

	// Use this for initialization
	void Start ()
	{
		f_Speed = Speed;
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		car_follow();
		
	}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//                                                                                        //  
	//                                                                                        //  
	//                                  PC   사용자 지정 함수                                   //                  
	//                                                                                        //  
	//                                                                                        //  
	//  

	void car_follow ()
	{
		this.transform.LookAt((Vector3) mouse_input.al_mousePos[pos_count]);
		this.transform.position.Normalize();
		//targetRotation = Quaternion.LookRotation(targetObj.transform.position - transform.position);
		//this.transform.position = Vector3.MoveTowards(this.transform.position, mouse_input.a_mousePos[0] as Transform, f_Speed);
		//this.transform.position = Vector3.MoveTowards(transform.position, mouse_input.v3_mousePos[mouse_input.pos_loop], f_Speed);
		//transform.rotation = Quaternion.Slerp(transform.rotation,(Vector3) mouse_input.al_mousePos[pos_count], speed * Time.deltaTime);
		//smooth roatete
		
		//this.transform.rotation = Quaternion.LookRotation(mouse_input.al_mousePos[pos_count].position - transform.position);
		this.transform.position =
			Vector3.MoveTowards(transform.position, (Vector3) mouse_input.al_mousePos[pos_count], f_Speed);
		
		//this.transform.position = new Vector3(transform.position.x, 0, transform.position.z);

		//this.transform.position = new Vector3(transform.position.x, 0.1f,transform.position.z);
		if (this.transform.position == (Vector3) mouse_input.al_mousePos[pos_count])
		{
			pos_count++;
			mouse_input.al_mousePos.RemoveAt(pos_count-1);
		}
	}
	
	
	

}
