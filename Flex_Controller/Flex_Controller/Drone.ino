// ※ 자세한 설명의 일부는 Flex_Controller.ino 코드 참조
#include <SoftwareSerial.h>

#define THROTTLE_MAX 255
#define THROTTLE_MIN 0
#define THROTTLE_INI 5


const int rx = 2;
const int tx = 3;

SoftwareSerial BTserial(rx, tx); //RX : pin2 , TX : pin3

const int motorA = 6;
const int motorB = 10;
const int motorC = 5;
const int motorD = 9;



void setup()
{


}


void loop()
{
	analogWrite(motorA, THROTTLE_INI);
	analogWrite(motorB, THROTTLE_INI);
	analogWrite(motorC, THROTTLE_INI);
	analogWrite(motorD, THROTTLE_INI);
	delay(1000);

}
