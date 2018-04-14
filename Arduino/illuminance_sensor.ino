//조도 센서 아두이노


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int inputV;
  inputV = analogRead(A0);
  Serial.println(inputV-500);
  if (inputV - 500 <= 250)
    digitalWrite(9, HIGH);
  else
    digitalWrite(9, LOW);
  delay(1000);

}


