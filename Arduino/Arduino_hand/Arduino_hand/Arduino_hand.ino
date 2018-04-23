/*
 Name:		Arduino_hand.ino
 Created:	2018-04-20 오후 10:30:14
 Author:	user

*/

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	//servo line
	pinMode(6, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(2, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
  
}
