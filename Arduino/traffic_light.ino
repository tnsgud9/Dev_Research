//아두이노 LED 자동차 신호등 횡단보도 신호등

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);

  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);

  
  digitalWrite(12,HIGH);
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(12,LOW);

  
  digitalWrite(11,HIGH);
  delay(2000);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);

}


