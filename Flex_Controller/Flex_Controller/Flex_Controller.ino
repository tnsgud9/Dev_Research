#include <SoftwareSerial.h>

const int rx = 2;
const int tx = 3;

SoftwareSerial BTserial(rx, tx); //RX : pin2 , TX : pin3



//손가락 기준 = 오른손 

const unsigned  int fin[5] = { A0, A1, A2, A3, A4 };
//		!!!중요!!!
//	꼭 fin 속성을 정의해야 됨.
//		A0 = 엄지
//		A1 = 검지
//		A2 = 중지
//		A3 = 약지
//		A4 = 소지


// fin 저장 > BT Serial 송신 데이터
int Trans_fin[5] = { 1,2,3,4,5 };
int trans_Count = 0;


//BTserial 접속 후 한번 작동 유무
//bool worked_once = false;


void setup()
{
	pinMode(A0, INPUT);
	pinMode(A1, INPUT);
	pinMode(A2, INPUT);
	pinMode(A3, INPUT);
	pinMode(A4, INPUT);
	
	pinMode(LED_BUILTIN, OUTPUT);
	
	
	Serial.begin(115200);
	BTserial.begin(115200);

	


	
	

}

void loop()
{
	if (Serial.available() == true || BTserial.available() == true )
	{

		digitalWrite(LED_BUILTIN, LOW);


		//for문 방식 (작동 안됨)
		/*
		for (int count; count > 5; count++)
		{

			Serial.println(Trans_fin[count]);
			BTserial.write(Trans_fin[count]);
		}
		*/
		Trans_fin[trans_Count] = analogRead(fin[trans_Count]);


		Serial.println(Trans_fin[trans_Count]);
		BTserial.write(Trans_fin[trans_Count]);

		

		trans_Count++;
		if (trans_Count > 5)
			trans_Count = 0;
	}
	else
		digitalWrite(LED_BUILTIN, HIGH);



}
