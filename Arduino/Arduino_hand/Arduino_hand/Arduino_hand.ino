/*
 Name:		Arduino_hand.ino
 Created:	2018-04-20 오후 10:30:14
 Author:	user

*/
#include <SoftwareSerial.h>


SoftwareSerial mySerial(1, 0);

int F_sensor_0;
int F_sensor_1;
int F_sensor_2;
int F_sensor_3;
int F_sensor_4;


// the setup function runs once when you press reset or power the board
void setup() {



	Serial.begin(9600);

	//servo line
	pinMode(6, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(2, OUTPUT);

	//data_set
	F_sensor_0 = 0;
	F_sensor_1 = 0;
	F_sensor_2 = 0;
	F_sensor_3 = 0;
	F_sensor_4 = 0;

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

	}


}







