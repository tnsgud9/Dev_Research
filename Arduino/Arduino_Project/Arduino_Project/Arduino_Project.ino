//아두이노 2족 보행로봇 
// DC모터 x2, 서보모터 x1

/*
           진행도
블루투스 모듈 통신을 배워야함

tx 송신 라인 rx 수신 라인
*/

#include <SoftwareSerial.h>

SoftwareSerial BTSerial(1 , 0);

bool grap;

void setup()
{
	Serial.begin(9600);
	BTSerial.begin(9600);

	//이동 컨트롤
	pinMode(13, INPUT);
	pinMode(12, INPUT);
	pinMode(11, INPUT);
	pinMode(10, INPUT);
	//서보 잡기 놓기
	pinMode(9, INPUT);

	//DC모터 라인
	pinMode(7, OUTPUT);
	pinMode(6, OUTPUT);
	//Servo 모터 라인
	pinMode(5, OUTPUT);


}

void loop()
{
	if (BTSerial.available())
		Serial.write(BTSerial.read());

	if(digitalRead(13)==true)
		AnalogWrite(motorPin, speed);
}