using System.CodeDom.Compiler;
using System.Collections;
using System.Collections.Generic;
using System.Linq.Expressions;
using UnityEngine;

public class mouse_input1 : MonoBehaviour
{
	//public static Vector3[] v3_mousePos;
	//카메라 시아각이 Top뷰 시점이기 떄문에 y을 받지 않는다 (레이캐스트 참조);

	//공개
	//public static List<Transform> MousePos = new List<Transform>();
	public static ArrayList MousePos = new ArrayList();
	public GameObject MousePoint;
	
	//비공개
	private int _posLoop = 0;
	
	
	void Start()
	{
	}

	void Update()
	{
		

		Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		RaycastHit hit;


		if (Physics.Raycast(ray, out hit, 100f))
		{

			if (Input.GetMouseButton(0))
			{
				
				MousePos.Add(hit.point);
				MousePoint.transform.position = new Vector3(hit.point.x,hit.point.y+0.1f,hit.point.z);
			}

		}
	}
	
}















