/*
Name:		flex_control.ino
Created:	2018-05-05 ���� 09:06:14
Author:	user

*/

// �ڼ����� �Ƴ��α� ������� ������

#include <SoftwareSerial.h>


SoftwareSerial mySerial(1, 0);

//pinMode set
int f_sensor_0=0;
int f_sensor_1=1;
int f_sensor_2=2;
int f_sensor_3=3;
int f_sensor_4=4;


// the setup function runs once when you press reset or power the board
void setup() {



	Serial.begin(9600);

	//flex sensor line
	pinMode(6, INPUT);
	pinMode(5, INPUT);
	pinMode(4, INPUT);
	pinMode(3, INPUT);
	pinMode(2, INPUT);


	while (1) //�ø��� ��� ����
	{
		if (!Serial)
			continue;
		else
		{
			Serial.print("Serial Connected.");
			break;
		}
	}


}

// the loop function runs over and over again until power down or reset
void loop() {

	if (mySerial.available())
	{

	}


}







