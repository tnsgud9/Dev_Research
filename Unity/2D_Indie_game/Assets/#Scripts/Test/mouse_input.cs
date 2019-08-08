using System.CodeDom.Compiler;
using System.Collections;
using System.Collections.Generic;
using System.Linq.Expressions;
using UnityEngine;

public class mouse_input : MonoBehaviour
{
	//public static Vector3[] v3_mousePos;
	//카메라 시아각이 Top뷰 시점이기 떄문에 y을 받지 않는다 (레이캐스트 참조);

	private int pos_loop = 0;
	public static ArrayList al_mousePos = new ArrayList();
	public GameObject Mouse_point;
	
	void Start()
	{


	}

	// Update is called once per frame
	void Update()
	{
		

		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		RaycastHit hit;


		if (Physics.Raycast(ray, out hit, 100f))
		{

//				Debug.Log("hit point : " + hit.point);
			if (Input.GetMouseButton(0))
			{
				al_mousePos.Add(hit.point);
				Debug.Log(hit.point);
				Mouse_point.transform.position = new Vector3(hit.point.x,hit.point.y+0.1f,hit.point.z);

			}

		}

	}
	
}

	
	
	
	
	
	
	
	
	
	




