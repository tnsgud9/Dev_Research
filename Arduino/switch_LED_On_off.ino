//아두이노 LED x3 Switch x3 on off

void setup()
{
  //스위치
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  //LED
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);


}

void loop()
{
  if (digitalRead(10) == HIGH)
    digitalWrite(3, HIGH);
  else
    digitalWrite(3, LOW);

  if (digitalRead(9) == HIGH)
    digitalWrite(4, HIGH);
  else
    digitalWrite(4, LOW);

  if (digitalRead(8) == HIGH)
    digitalWrite(5, HIGH);
  else
    digitalWrite(5, LOW);
}
