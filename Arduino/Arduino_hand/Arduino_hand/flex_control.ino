/*
Name:		flex_control.ino
Created:	2018-05-05 오전 09:06:14
Author:	user

*/

// 휨센서는 아날로그 방식으로 전송함

#include <SoftwareSerial.h>


SoftwareSerial mySerial(1, 0);

//pinMode set
int f_sensor0=0;
int f_sensor1=1;
int f_sensor2=2;
int f_sensor3=3;
int f_sensor4=4;


// the setup function runs once when you press reset or power the board
void setup() {



	Serial.begin(9600);

	//flex sensor line
	pinMode(6, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(2, OUTPUT);


	while (1) //시리얼 통신 연결
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
		//Flex Sensor input
		f_sensor0 = analogRead(A0);
		f_sensor1 = analogRead(A1);
		f_sensor2 = analogRead(A2);
		f_sensor3 = analogRead(A3);
		f_sensor4 = analogRead(A4);


		Serial.print(F_sensor_0);
		Serial.print(F_sensor_1);
		Serial.print(F_sensor_2);
		Serial.print(F_sensor_3);
		Serial.print(F_sensor_4);
	}






}







