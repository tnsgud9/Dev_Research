using System.CodeDom.Compiler;
using System.Collections;
using System.Collections.Generic;
using System.Linq.Expressions;
using UnityEngine;

public class mouse_input_test : MonoBehaviour
{
	public static float[] mouse_pos_x = new float[100];
	public static float[] mouse_pos_z = new float[100];
	//카메라 시아각이 Top뷰 시점이기 떄문에 y을 받지 않는다 (레이캐스트 참조);

	public Transform mouse_point;

	public static int pos_loop = 0;
//	public int clickLayer = 8;

	void Start()
	{
		
	}

	// Update is called once per frame
	void Update () {
 
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			RaycastHit hit;
 
			if( Physics.Raycast(ray,out hit, 100f) )
			{
				Debug.Log("hit point : " + hit.point);
				
//				int l = hit.transform.gameObject.layer;
// 
//				if( l == clickLayer )
//				{
//					Debug.Log(" hit object : " + hit.collider.name);
//				}
				
				
				Vector3 mouse_pos = hit.point;
				
				if (pos_loop < 99)
				{
					mouse_pos_x[pos_loop] = mouse_pos.x;
					mouse_pos_z[pos_loop] = mouse_pos.z;
					mouse_point.transform.position =new Vector3(mouse_pos.x,0.3f,mouse_pos.z);
					
					pos_loop++;
					Debug.Log("Debug1 : "+ mouse_pos_x[pos_loop] + "x||z" + mouse_pos_z[pos_loop]+"pos_loop"+pos_loop);
				}
				else
					pos_loop = 0;

			}
 
	}

}


