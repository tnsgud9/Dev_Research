using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class input_mouse : MonoBehaviour
{
	private Transform _trans;
	public static List<Transform> trans;
	
	// Use this for initialization
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
			Debug.DrawLine(transform.position, hit.point, Color.yellow);
			if (Input.GetMouseButton(0))
			{
				_trans.position = hit.point;
				Debug.Log(_trans.position);
				trans.Add(_trans);
				
				
			}

		}
	}
}
